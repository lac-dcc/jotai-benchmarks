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
       0            int-bounds\n\
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
struct uuid_module {int max_instance; int* instance_id; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int skl_get_pvtid_map(struct uuid_module *module, int instance_id)
{
	int pvt_id;

	for (pvt_id = 0; pvt_id < module->max_instance; pvt_id++) {
		if (module->instance_id[pvt_id] == instance_id)
			return pvt_id;
	}
	return -EINVAL;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int instance_id = 100;
          int _len_module0 = 1;
          struct uuid_module * module = (struct uuid_module *) malloc(_len_module0*sizeof(struct uuid_module));
          for(int _i0 = 0; _i0 < _len_module0; _i0++) {
            module[_i0].max_instance = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_module__i0__instance_id0 = 1;
          module[_i0].instance_id = (int *) malloc(_len_module__i0__instance_id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_module__i0__instance_id0; _j0++) {
            module[_i0].instance_id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = skl_get_pvtid_map(module,instance_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_module0; _aux++) {
          free(module[_aux].instance_id);
          }
          free(module);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
