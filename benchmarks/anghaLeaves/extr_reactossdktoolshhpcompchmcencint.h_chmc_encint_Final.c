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
typedef  int UInt32 ;
typedef  int UChar ;

/* Variables and functions */

__attribute__((used)) static inline int chmc_encint ( const UInt32 val, UChar *out ) {
	int len;
	UInt32 a;
	UChar *p, *l;

	// FIXME should support 64 bit?
	if ( ! out || val > 0xfffffffUL )
		return 0; // FIXME can't handle, overflow

	if ( val > 0x1fffffUL )
		len = 4;
	else if ( val > 0x3fffUL )
		len = 3;
	else if ( val > 0x7fUL )
		len = 2;
	else
		len = 1;

	a = val;
	l = p = out + (len - 1);

	while ( p >= out ) {
		*p = (a & 0x7fUL);
		if ( p < l )
			*p |= 0x80UL;
		p--;
		a >>= 7;
	}

	return len;
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
          // static_instructions_O0 : 54
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          const int val = 100;
        
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = chmc_encint(val,out);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 59
          // dynamic_instructions_O0 : 80
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 44
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 44
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 44
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 44
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 42
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 44
          // ------------------------------- 

          const int val = 255;
        
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = chmc_encint(val,out);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 54
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          const int val = 10;
        
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = chmc_encint(val,out);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          const int val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = chmc_encint(val,out);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
