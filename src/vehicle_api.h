#ifndef TRAFSIM_VEHICLE_API
#define TRAFSIM_VEHICLE_API

#include "vehicle.h"

int tick(struct vehicle *); 
int move(struct vehicle *, int x, int y, int z); 

#endif /* TRAFSIM_VEHICLE_API */
