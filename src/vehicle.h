#ifndef TRAFSIM_VEHILE_H
#define TRAFSIM_VEHILE_H

struct vehicle;

struct vehicle_vtable {
    int (*tick)(struct vehicle*);
    int (*move)(struct vehicle*, int x, int y, int z); 
};

struct vehicle {
    struct {
        int x;
        int y;
        int z;
    } position; 

    struct vehicle_vtable *vtable;
}; 

extern struct vehicle* new_vehicle();
extern void *delete_vehicle(struct vehicle*);  // returns NULL. 

#endif /* TRAFSIM_VEHILE_H */
