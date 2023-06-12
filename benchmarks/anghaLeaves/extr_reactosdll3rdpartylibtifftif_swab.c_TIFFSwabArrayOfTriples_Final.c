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

/* Type definitions */
typedef  int /*<<< orphan*/  uint8 ;
typedef  int /*<<< orphan*/  tmsize_t ;

/* Variables and functions */

void
TIFFSwabArrayOfTriples(register uint8* tp, tmsize_t n)
{
	unsigned char* cp;
	unsigned char t;

	/* XXX unroll loop some */
	while (n-- > 0) {
		cp = (unsigned char*) tp;
		t = cp[2]; cp[2] = cp[0]; cp[0] = t;
		tp += 3;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 5622
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 2049
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 1302
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 1302
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 1302
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 2048
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 2302
          // ------------------------------- 

          int n = 255;
        
          int _len_tp0 = 65025;
          int * tp = (int *) malloc(_len_tp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          TIFFSwabArrayOfTriples(tp,n);
          free(tp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 232
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 89
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 74
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 88
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 97
          // ------------------------------- 

          int n = 10;
        
          int _len_tp0 = 100;
          int * tp = (int *) malloc(_len_tp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          TIFFSwabArrayOfTriples(tp,n);
          free(tp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_tp0 = 1;
          int * tp = (int *) malloc(_len_tp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          TIFFSwabArrayOfTriples(tp,n);
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
