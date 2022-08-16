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
       1            big-arr-10x\n\
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
struct sclp_register {int dummy; } ;
typedef  enum sclp_pm_event { ____Placeholder_sclp_pm_event } sclp_pm_event ;

/* Variables and functions */
#define  SCLP_PM_EVENT_FREEZE 130 
#define  SCLP_PM_EVENT_RESTORE 129 
#define  SCLP_PM_EVENT_THAW 128 
 int /*<<< orphan*/ * _machine_halt ; 
 int /*<<< orphan*/ * _machine_power_off ; 
 int /*<<< orphan*/ * _machine_restart ; 
 int /*<<< orphan*/ * old_machine_halt ; 
 int /*<<< orphan*/ * old_machine_power_off ; 
 int /*<<< orphan*/ * old_machine_restart ; 

__attribute__((used)) static void sclp_quiesce_pm_event(struct sclp_register *reg,
				  enum sclp_pm_event sclp_pm_event)
{
	switch (sclp_pm_event) {
	case SCLP_PM_EVENT_RESTORE:
		if (old_machine_restart) {
			_machine_restart = old_machine_restart;
			_machine_halt = old_machine_halt;
			_machine_power_off = old_machine_power_off;
			old_machine_restart = NULL;
			old_machine_halt = NULL;
			old_machine_power_off = NULL;
		}
		break;
	case SCLP_PM_EVENT_FREEZE:
	case SCLP_PM_EVENT_THAW:
		break;
	}
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
          enum sclp_pm_event sclp_pm_event = 0;
          int _len_reg0 = 1;
          struct sclp_register * reg = (struct sclp_register *) malloc(_len_reg0*sizeof(struct sclp_register));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sclp_quiesce_pm_event(reg,sclp_pm_event);
          free(reg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum sclp_pm_event sclp_pm_event = 0;
          int _len_reg0 = 100;
          struct sclp_register * reg = (struct sclp_register *) malloc(_len_reg0*sizeof(struct sclp_register));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sclp_quiesce_pm_event(reg,sclp_pm_event);
          free(reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
