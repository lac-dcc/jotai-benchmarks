// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct packing_data {struct object_entry* objects; } ;
struct object_entry {int delta_sibling_idx; } ;

/* Variables and functions */

__attribute__((used)) static inline void oe_set_delta_sibling(struct packing_data *pack,
					struct object_entry *e,
					struct object_entry *delta)
{
	if (delta)
		e->delta_sibling_idx = (delta - pack->objects) + 1;
	else
		e->delta_sibling_idx = 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_pack0 = 65025;
          struct packing_data * pack = (struct packing_data *) malloc(_len_pack0*sizeof(struct packing_data));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
              int _len_pack__i0__objects0 = 1;
          pack[_i0].objects = (struct object_entry *) malloc(_len_pack__i0__objects0*sizeof(struct object_entry));
          for(int _j0 = 0; _j0 < _len_pack__i0__objects0; _j0++) {
              pack[_i0].objects->delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_e0 = 65025;
          struct object_entry * e = (struct object_entry *) malloc(_len_e0*sizeof(struct object_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_delta0 = 65025;
          struct object_entry * delta = (struct object_entry *) malloc(_len_delta0*sizeof(struct object_entry));
          for(int _i0 = 0; _i0 < _len_delta0; _i0++) {
              delta[_i0].delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          oe_set_delta_sibling(pack,e,delta);
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].objects);
          }
          free(pack);
          free(e);
          free(delta);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_pack0 = 100;
          struct packing_data * pack = (struct packing_data *) malloc(_len_pack0*sizeof(struct packing_data));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
              int _len_pack__i0__objects0 = 1;
          pack[_i0].objects = (struct object_entry *) malloc(_len_pack__i0__objects0*sizeof(struct object_entry));
          for(int _j0 = 0; _j0 < _len_pack__i0__objects0; _j0++) {
              pack[_i0].objects->delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_e0 = 100;
          struct object_entry * e = (struct object_entry *) malloc(_len_e0*sizeof(struct object_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_delta0 = 100;
          struct object_entry * delta = (struct object_entry *) malloc(_len_delta0*sizeof(struct object_entry));
          for(int _i0 = 0; _i0 < _len_delta0; _i0++) {
              delta[_i0].delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          oe_set_delta_sibling(pack,e,delta);
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].objects);
          }
          free(pack);
          free(e);
          free(delta);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_pack0 = 1;
          struct packing_data * pack = (struct packing_data *) malloc(_len_pack0*sizeof(struct packing_data));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
              int _len_pack__i0__objects0 = 1;
          pack[_i0].objects = (struct object_entry *) malloc(_len_pack__i0__objects0*sizeof(struct object_entry));
          for(int _j0 = 0; _j0 < _len_pack__i0__objects0; _j0++) {
              pack[_i0].objects->delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_e0 = 1;
          struct object_entry * e = (struct object_entry *) malloc(_len_e0*sizeof(struct object_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_delta0 = 1;
          struct object_entry * delta = (struct object_entry *) malloc(_len_delta0*sizeof(struct object_entry));
          for(int _i0 = 0; _i0 < _len_delta0; _i0++) {
              delta[_i0].delta_sibling_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          oe_set_delta_sibling(pack,e,delta);
          for(int _aux = 0; _aux < _len_pack0; _aux++) {
          free(pack[_aux].objects);
          }
          free(pack);
          free(e);
          free(delta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
