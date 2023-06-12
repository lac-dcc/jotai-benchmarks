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
struct opregion_acpi {scalar_t__ csts; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {struct opregion_acpi* acpi; } ;

/* Variables and functions */
 int NOTIFY_DONE ; 
 int NOTIFY_OK ; 
 TYPE_1__* system_opregion ; 

__attribute__((used)) static int psb_intel_opregion_video_event(struct notifier_block *nb,
					  unsigned long val, void *data)
{
	/* The only video events relevant to opregion are 0x80. These indicate
	   either a docking event, lid switch or display switch request. In
	   Linux, these are handled by the dock, button and video drivers.
	   We might want to fix the video driver to be opregion-aware in
	   future, but right now we just indicate to the firmware that the
	   request has been handled */

	struct opregion_acpi *acpi;

	if (!system_opregion)
		return NOTIFY_DONE;

	acpi = system_opregion->acpi;
	acpi->csts = 0;

	return NOTIFY_OK;
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
          unsigned long val = 100;
        
          int _len_nb0 = 1;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = psb_intel_opregion_video_event(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long val = 255;
        
          int _len_nb0 = 65025;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = psb_intel_opregion_video_event(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long val = 10;
        
          int _len_nb0 = 100;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = psb_intel_opregion_video_event(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_nb0 = 1;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = psb_intel_opregion_video_event(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
