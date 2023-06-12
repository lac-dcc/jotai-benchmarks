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
struct i5000_pvt {int b0_ambpresent1; int b0_ambpresent0; int b1_ambpresent1; int b1_ambpresent0; } ;

/* Variables and functions */
 int CHANNELS_PER_BRANCH ; 

__attribute__((used)) static int determine_amb_present_reg(struct i5000_pvt *pvt, int channel)
{
	int amb_present;

	if (channel < CHANNELS_PER_BRANCH) {
		if (channel & 0x1)
			amb_present = pvt->b0_ambpresent1;
		else
			amb_present = pvt->b0_ambpresent0;
	} else {
		if (channel & 0x1)
			amb_present = pvt->b1_ambpresent1;
		else
			amb_present = pvt->b1_ambpresent0;
	}

	return amb_present;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int channel = 100;
        
          int _len_pvt0 = 1;
          struct i5000_pvt * pvt = (struct i5000_pvt *) malloc(_len_pvt0*sizeof(struct i5000_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              pvt[_i0].b0_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b0_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = determine_amb_present_reg(pvt,channel);
          printf("%d\n", benchRet); 
          free(pvt);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int channel = 255;
        
          int _len_pvt0 = 65025;
          struct i5000_pvt * pvt = (struct i5000_pvt *) malloc(_len_pvt0*sizeof(struct i5000_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              pvt[_i0].b0_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b0_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = determine_amb_present_reg(pvt,channel);
          printf("%d\n", benchRet); 
          free(pvt);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int channel = 10;
        
          int _len_pvt0 = 100;
          struct i5000_pvt * pvt = (struct i5000_pvt *) malloc(_len_pvt0*sizeof(struct i5000_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              pvt[_i0].b0_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b0_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = determine_amb_present_reg(pvt,channel);
          printf("%d\n", benchRet); 
          free(pvt);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pvt0 = 1;
          struct i5000_pvt * pvt = (struct i5000_pvt *) malloc(_len_pvt0*sizeof(struct i5000_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              pvt[_i0].b0_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b0_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent1 = ((-2 * (next_i()%2)) + 1) * next_i();
          pvt[_i0].b1_ambpresent0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = determine_amb_present_reg(pvt,channel);
          printf("%d\n", benchRet); 
          free(pvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
