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

/* Type definitions */
typedef  int uint8_t ;
struct rtcdev {int reg_b; } ;

/* Variables and functions */
 int RTCSB_BIN ; 

__attribute__((used)) static int
rtcget(struct rtcdev *rtc, int val, int *retval)
{
	uint8_t upper, lower;

	if (rtc->reg_b & RTCSB_BIN) {
		*retval = val;
		return (0);
	}

	lower = val & 0xf;
	upper = (val >> 4) & 0xf;

	if (lower > 9 || upper > 9)
		return (-1);

	*retval = upper * 10 + lower;
	return (0);
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int val = 100;
        
          int _len_rtc0 = 1;
          struct rtcdev * rtc = (struct rtcdev *) malloc(_len_rtc0*sizeof(struct rtcdev));
          for(int _i0 = 0; _i0 < _len_rtc0; _i0++) {
              rtc[_i0].reg_b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_retval0 = 1;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtcget(rtc,val,retval);
          printf("%d\n", benchRet); 
          free(rtc);
          free(retval);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int val = 255;
        
          int _len_rtc0 = 65025;
          struct rtcdev * rtc = (struct rtcdev *) malloc(_len_rtc0*sizeof(struct rtcdev));
          for(int _i0 = 0; _i0 < _len_rtc0; _i0++) {
              rtc[_i0].reg_b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_retval0 = 65025;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtcget(rtc,val,retval);
          printf("%d\n", benchRet); 
          free(rtc);
          free(retval);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int val = 10;
        
          int _len_rtc0 = 100;
          struct rtcdev * rtc = (struct rtcdev *) malloc(_len_rtc0*sizeof(struct rtcdev));
          for(int _i0 = 0; _i0 < _len_rtc0; _i0++) {
              rtc[_i0].reg_b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_retval0 = 100;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtcget(rtc,val,retval);
          printf("%d\n", benchRet); 
          free(rtc);
          free(retval);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rtc0 = 1;
          struct rtcdev * rtc = (struct rtcdev *) malloc(_len_rtc0*sizeof(struct rtcdev));
          for(int _i0 = 0; _i0 < _len_rtc0; _i0++) {
              rtc[_i0].reg_b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_retval0 = 1;
          int * retval = (int *) malloc(_len_retval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_retval0; _i0++) {
            retval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rtcget(rtc,val,retval);
          printf("%d\n", benchRet); 
          free(rtc);
          free(retval);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
