#ifndef TRAFSIM_BIKE_H
#define TRAFSIM_BIKE_H

#include "vehicle.h"

struct bike; 
struct bike_vtable {
    int (*pedal)(struct bike*);
};

struct bike {
    struct vehicle *vehicle;   // bike is a vehicle and supports all vehicle functions.
    struct bike_vtable *vtable;
};

struct bike *new_bike(); 
void *delete_bike(struct bike *b); 

#endif /* TRAFSIM_BIKE_H */
