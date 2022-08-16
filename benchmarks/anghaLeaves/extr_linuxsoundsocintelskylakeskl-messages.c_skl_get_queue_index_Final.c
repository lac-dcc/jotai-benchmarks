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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ module_id; scalar_t__ instance_id; } ;
struct skl_module_pin {TYPE_1__ id; } ;
struct skl_module_inst_id {scalar_t__ module_id; scalar_t__ instance_id; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int skl_get_queue_index(struct skl_module_pin *mpin,
				struct skl_module_inst_id id, int max)
{
	int i;

	for (i = 0; i < max; i++)  {
		if (mpin[i].id.module_id == id.module_id &&
			mpin[i].id.instance_id == id.instance_id)
			return i;
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
          int max = 100;
          int _len_mpin0 = 1;
          struct skl_module_pin * mpin = (struct skl_module_pin *) malloc(_len_mpin0*sizeof(struct skl_module_pin));
          for(int _i0 = 0; _i0 < _len_mpin0; _i0++) {
            mpin[_i0].id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        mpin[_i0].id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct skl_module_inst_id id;
        id.module_id = ((-2 * (next_i()%2)) + 1) * next_i();
        id.instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = skl_get_queue_index(mpin,id,max);
          printf("%d\n", benchRet); 
          free(mpin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
