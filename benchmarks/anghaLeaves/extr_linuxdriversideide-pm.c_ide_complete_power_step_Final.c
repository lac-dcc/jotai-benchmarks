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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct request {struct ide_pm_state* special; } ;
struct ide_pm_state {int pm_step; int /*<<< orphan*/  pm_state; } ;
struct TYPE_3__ {scalar_t__ media; } ;
typedef  TYPE_1__ ide_drive_t ;

/* Variables and functions */
 void* IDE_PM_COMPLETED ; 
#define  IDE_PM_FLUSH_CACHE 131 
#define  IDE_PM_IDLE 130 
 int IDE_PM_RESTORE_DMA ; 
#define  IDE_PM_RESTORE_PIO 129 
#define  IDE_PM_STANDBY 128 
 int /*<<< orphan*/  PM_EVENT_FREEZE ; 
 scalar_t__ ide_disk ; 

void ide_complete_power_step(ide_drive_t *drive, struct request *rq)
{
	struct ide_pm_state *pm = rq->special;

#ifdef DEBUG_PM
	printk(KERN_INFO "%s: complete_power_step(step: %d)\n",
		drive->name, pm->pm_step);
#endif
	if (drive->media != ide_disk)
		return;

	switch (pm->pm_step) {
	case IDE_PM_FLUSH_CACHE:	/* Suspend step 1 (flush cache) */
		if (pm->pm_state == PM_EVENT_FREEZE)
			pm->pm_step = IDE_PM_COMPLETED;
		else
			pm->pm_step = IDE_PM_STANDBY;
		break;
	case IDE_PM_STANDBY:		/* Suspend step 2 (standby) */
		pm->pm_step = IDE_PM_COMPLETED;
		break;
	case IDE_PM_RESTORE_PIO:	/* Resume step 1 (restore PIO) */
		pm->pm_step = IDE_PM_IDLE;
		break;
	case IDE_PM_IDLE:		/* Resume step 2 (idle)*/
		pm->pm_step = IDE_PM_RESTORE_DMA;
		break;
	}
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_drive0 = 65025;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].media = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rq0 = 65025;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
              int _len_rq__i0__special0 = 1;
          rq[_i0].special = (struct ide_pm_state *) malloc(_len_rq__i0__special0*sizeof(struct ide_pm_state));
          for(int _j0 = 0; _j0 < _len_rq__i0__special0; _j0++) {
              rq[_i0].special->pm_step = ((-2 * (next_i()%2)) + 1) * next_i();
          rq[_i0].special->pm_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ide_complete_power_step(drive,rq);
          free(drive);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].special);
          }
          free(rq);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_drive0 = 100;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].media = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rq0 = 100;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
              int _len_rq__i0__special0 = 1;
          rq[_i0].special = (struct ide_pm_state *) malloc(_len_rq__i0__special0*sizeof(struct ide_pm_state));
          for(int _j0 = 0; _j0 < _len_rq__i0__special0; _j0++) {
              rq[_i0].special->pm_step = ((-2 * (next_i()%2)) + 1) * next_i();
          rq[_i0].special->pm_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ide_complete_power_step(drive,rq);
          free(drive);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].special);
          }
          free(rq);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_drive0 = 1;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
              drive[_i0].media = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_rq0 = 1;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
              int _len_rq__i0__special0 = 1;
          rq[_i0].special = (struct ide_pm_state *) malloc(_len_rq__i0__special0*sizeof(struct ide_pm_state));
          for(int _j0 = 0; _j0 < _len_rq__i0__special0; _j0++) {
              rq[_i0].special->pm_step = ((-2 * (next_i()%2)) + 1) * next_i();
          rq[_i0].special->pm_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          ide_complete_power_step(drive,rq);
          free(drive);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].special);
          }
          free(rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
