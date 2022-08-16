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
typedef  int /*<<< orphan*/  uint64_t ;
typedef  enum telemetry_pmi { ____Placeholder_telemetry_pmi } telemetry_pmi ;

/* Variables and functions */

int telemetry_pmi_setup(enum telemetry_pmi pmi_ctr, uint64_t period)
{
#if defined(MT_CORE_INSTRS) && defined(MT_CORE_CYCLES)
	static boolean_t sample_all_tasks_aside = FALSE;
	static uint32_t active_tasks_aside = FALSE;
	int error = 0;
	const char *name = "?";

	unsigned int ctr = 0;

	TELEMETRY_PMI_LOCK();

	switch (pmi_ctr) {
	case TELEMETRY_PMI_NONE:
		if (!telemetry_sample_pmis) {
			error = 1;
			goto out;
		}

		telemetry_sample_pmis = FALSE;
		telemetry_sample_all_tasks = sample_all_tasks_aside;
		telemetry_active_tasks = active_tasks_aside;
		error = mt_microstackshot_stop();
		if (!error) {
			printf("telemetry: disabling ustackshot on PMI\n");
		}
		goto out;

	case TELEMETRY_PMI_INSTRS:
		ctr = MT_CORE_INSTRS;
		name = "instructions";
		break;

	case TELEMETRY_PMI_CYCLES:
		ctr = MT_CORE_CYCLES;
		name = "cycles";
		break;

	default:
		error = 1;
		goto out;
	}

	telemetry_sample_pmis = TRUE;
	sample_all_tasks_aside = telemetry_sample_all_tasks;
	active_tasks_aside = telemetry_active_tasks;
	telemetry_sample_all_tasks = FALSE;
	telemetry_active_tasks = 0;

	error = mt_microstackshot_start(ctr, period, telemetry_pmi_handler, NULL);
	if (!error) {
		printf("telemetry: ustackshot every %llu %s\n", period, name);
	}

out:
	TELEMETRY_PMI_UNLOCK();
	return error;
#else /* defined(MT_CORE_INSTRS) && defined(MT_CORE_CYCLES) */
#pragma unused(pmi_ctr, period)
	return 1;
#endif /* !defined(MT_CORE_INSTRS) || !defined(MT_CORE_CYCLES) */
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
          enum telemetry_pmi pmi_ctr = 0;
          int period = 100;
          int benchRet = telemetry_pmi_setup(pmi_ctr,period);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum telemetry_pmi pmi_ctr = 0;
          int period = 255;
          int benchRet = telemetry_pmi_setup(pmi_ctr,period);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum telemetry_pmi pmi_ctr = 0;
          int period = 10;
          int benchRet = telemetry_pmi_setup(pmi_ctr,period);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
