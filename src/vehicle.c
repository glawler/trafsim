#include <stdio.h>
#include <stdlib.h>  
#include "vehicle.h"

int vehicle_tick(struct vehicle *this) {
    fprintf(stdout, "vehicle tick called\n");
    return 1; 
}

int vehicle_move(struct vehicle *this, int x, int y, int z) {
    this->position.x = x;
    this->position.y = y;
    this->position.z = z;
    fprintf(stdout, "vehicle moved to: %d, %d, %d\n", x, y, z);
    return 1; 
}

struct vehicle_vtable the_vehicle_vtable = {
    .tick = vehicle_tick,
    .move = vehicle_move
};

struct vehicle *new_vehicle() {
    struct vehicle *v = (struct vehicle*)malloc(sizeof(struct vehicle));
    v->vtable = &the_vehicle_vtable;
    v->position.x = 0;
    v->position.y = 0;
    v->position.z = 0;
    return v;
}

void *delete_vehicle(struct vehicle *this) {
    free(this); 
    return NULL; 
}
