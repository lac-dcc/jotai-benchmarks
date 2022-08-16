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
struct telemetry_evtlog {int dummy; } ;
typedef  enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;

/* Variables and functions */

__attribute__((used)) static int telemetry_def_raw_read_eventlog(enum telemetry_unit telem_unit,
					   struct telemetry_evtlog *evtlog,
					   int len, int log_all_evts)
{
	return 0;
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
          enum telemetry_unit telem_unit = 0;
          int len = 100;
          int log_all_evts = 100;
          int _len_evtlog0 = 1;
          struct telemetry_evtlog * evtlog = (struct telemetry_evtlog *) malloc(_len_evtlog0*sizeof(struct telemetry_evtlog));
          for(int _i0 = 0; _i0 < _len_evtlog0; _i0++) {
            evtlog[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = telemetry_def_raw_read_eventlog(telem_unit,evtlog,len,log_all_evts);
          printf("%d\n", benchRet); 
          free(evtlog);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum telemetry_unit telem_unit = 0;
          int len = 10;
          int log_all_evts = 10;
          int _len_evtlog0 = 100;
          struct telemetry_evtlog * evtlog = (struct telemetry_evtlog *) malloc(_len_evtlog0*sizeof(struct telemetry_evtlog));
          for(int _i0 = 0; _i0 < _len_evtlog0; _i0++) {
            evtlog[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = telemetry_def_raw_read_eventlog(telem_unit,evtlog,len,log_all_evts);
          printf("%d\n", benchRet); 
          free(evtlog);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
