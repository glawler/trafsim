#include "vehicle_api.h"

int tick(struct vehicle *v) {
    return v->vtable->tick(v);
}

int move(struct vehicle *v, int x, int y, int z) {
    return v->vtable->move(v, x, y, z); 
}
