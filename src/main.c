#include <stdio.h>
#include <stdlib.h>

#include "vehicle_api.h"
#include "bike_api.h"

int main(int argc, char **argv)
{
    struct vehicle *v = new_vehicle();
    tick(v); 
    move(v, 1, 2, 3);
    v = delete_vehicle(v);

    struct bike *b = new_bike(); 
    tick((struct vehicle*)b);
    move((struct vehicle*)b, 4, 5, 6);
    pedal(b); 

    return(EXIT_SUCCESS);
}
