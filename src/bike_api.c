#include "bike_api.h"

int pedal(struct bike * b) {
    return b->vtable->pedal(b); 
}

