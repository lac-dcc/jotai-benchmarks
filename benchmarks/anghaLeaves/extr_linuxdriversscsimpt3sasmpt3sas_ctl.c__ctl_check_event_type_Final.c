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
typedef  int u32 ;
typedef  int u16 ;
struct MPT3SAS_ADAPTER {int* event_type; int /*<<< orphan*/  event_log; } ;

/* Variables and functions */

__attribute__((used)) static int
_ctl_check_event_type(struct MPT3SAS_ADAPTER *ioc, u16 event)
{
	u16 i;
	u32 desired_event;

	if (event >= 128 || !event || !ioc->event_log)
		return 0;

	desired_event = (1 << (event % 32));
	if (!desired_event)
		desired_event = 1;
	i = event / 32;
	return desired_event & ioc->event_type[i];
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int event = 255;
        
          int _len_ioc0 = 65025;
          struct MPT3SAS_ADAPTER * ioc = (struct MPT3SAS_ADAPTER *) malloc(_len_ioc0*sizeof(struct MPT3SAS_ADAPTER));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__event_type0 = 1;
          ioc[_i0].event_type = (int *) malloc(_len_ioc__i0__event_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ioc__i0__event_type0; _j0++) {
            ioc[_i0].event_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ioc[_i0].event_log = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = _ctl_check_event_type(ioc,event);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].event_type);
          }
          free(ioc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 35
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int event = 10;
        
          int _len_ioc0 = 100;
          struct MPT3SAS_ADAPTER * ioc = (struct MPT3SAS_ADAPTER *) malloc(_len_ioc0*sizeof(struct MPT3SAS_ADAPTER));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__event_type0 = 1;
          ioc[_i0].event_type = (int *) malloc(_len_ioc__i0__event_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ioc__i0__event_type0; _j0++) {
            ioc[_i0].event_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ioc[_i0].event_log = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = _ctl_check_event_type(ioc,event);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].event_type);
          }
          free(ioc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
