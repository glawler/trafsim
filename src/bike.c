#include <stdio.h>
#include <stdlib.h>
#include "bike.h"

int bike_pedal(struct bike * this) { 
    printf("bike pedal\n"); 
    // NOOP
    return 0;
}

int bike_move(struct vehicle *b, int x, int y, int z) {
    printf("bike move: %d, %d, %d\n", x, y, z); 
    struct bike *ptr = (struct bike*)b;
    return ptr->vehicle->vtable->move(ptr->vehicle, x, y, z); 
}

struct bike_vtable the_bike_vtable = {
    .pedal = bike_pedal
};

struct bike* new_bike() {
    struct bike *b = (struct bike*)malloc(sizeof(struct bike));
    b->vehicle = new_vehicle();
    b->vehicle->vtable->move = bike_move;  // move is over ridden for bikes. 
    b->vtable = &the_bike_vtable; 
    return b;
}


