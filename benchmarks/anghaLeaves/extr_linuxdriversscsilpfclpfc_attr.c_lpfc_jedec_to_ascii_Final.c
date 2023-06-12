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

/* Variables and functions */

__attribute__((used)) static void
lpfc_jedec_to_ascii(int incr, char hdw[])
{
	int i, j;
	for (i = 0; i < 8; i++) {
		j = (incr & 0xf);
		if (j <= 9)
			hdw[7 - i] = 0x30 +  j;
		 else
			hdw[7 - i] = 0x61 + j - 10;
		incr = (incr >> 4);
	}
	hdw[8] = 0;
	return;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 195
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 103
          // ------------------------------- 
          // static_instructions_O2 : 83
          // dynamic_instructions_O2 : 83
          // ------------------------------- 
          // static_instructions_O3 : 83
          // dynamic_instructions_O3 : 83
          // ------------------------------- 
          // static_instructions_Ofast : 83
          // dynamic_instructions_Ofast : 83
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 102
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 120
          // ------------------------------- 

          int incr = 255;
        
          int _len_hdw0 = 65025;
          char * hdw = (char *) malloc(_len_hdw0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          lpfc_jedec_to_ascii(incr,hdw);
          free(hdw);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 195
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 103
          // ------------------------------- 
          // static_instructions_O2 : 83
          // dynamic_instructions_O2 : 83
          // ------------------------------- 
          // static_instructions_O3 : 83
          // dynamic_instructions_O3 : 83
          // ------------------------------- 
          // static_instructions_Ofast : 83
          // dynamic_instructions_Ofast : 83
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 102
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 120
          // ------------------------------- 

          int incr = 10;
        
          int _len_hdw0 = 100;
          char * hdw = (char *) malloc(_len_hdw0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          lpfc_jedec_to_ascii(incr,hdw);
          free(hdw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
