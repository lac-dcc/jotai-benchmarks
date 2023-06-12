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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  u8 ;
struct hotplug_slot {TYPE_1__* info; } ;
struct TYPE_2__ {int /*<<< orphan*/  attention_status; } ;

/* Variables and functions */

__attribute__((used)) static int pnv_php_set_attention_state(struct hotplug_slot *slot, u8 state)
{
	/* FIXME: Make it real once firmware supports it */
	slot->info->attention_status = state;

	return 0;
}

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
          int state = 100;
        
          int _len_slot0 = 1;
          struct hotplug_slot * slot = (struct hotplug_slot *) malloc(_len_slot0*sizeof(struct hotplug_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__info0 = 1;
          slot[_i0].info = (struct TYPE_2__ *) malloc(_len_slot__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_slot__i0__info0; _j0++) {
              slot[_i0].info->attention_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = pnv_php_set_attention_state(slot,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].info);
          }
          free(slot);
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
        
          int _len_slot0 = 65025;
          struct hotplug_slot * slot = (struct hotplug_slot *) malloc(_len_slot0*sizeof(struct hotplug_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__info0 = 1;
          slot[_i0].info = (struct TYPE_2__ *) malloc(_len_slot__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_slot__i0__info0; _j0++) {
              slot[_i0].info->attention_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = pnv_php_set_attention_state(slot,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].info);
          }
          free(slot);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
        
          int _len_slot0 = 100;
          struct hotplug_slot * slot = (struct hotplug_slot *) malloc(_len_slot0*sizeof(struct hotplug_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__info0 = 1;
          slot[_i0].info = (struct TYPE_2__ *) malloc(_len_slot__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_slot__i0__info0; _j0++) {
              slot[_i0].info->attention_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = pnv_php_set_attention_state(slot,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].info);
          }
          free(slot);
        
        break;
    }
    // empty
    case 3:
    {
          int state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_slot0 = 1;
          struct hotplug_slot * slot = (struct hotplug_slot *) malloc(_len_slot0*sizeof(struct hotplug_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__info0 = 1;
          slot[_i0].info = (struct TYPE_2__ *) malloc(_len_slot__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_slot__i0__info0; _j0++) {
              slot[_i0].info->attention_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = pnv_php_set_attention_state(slot,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].info);
          }
          free(slot);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
