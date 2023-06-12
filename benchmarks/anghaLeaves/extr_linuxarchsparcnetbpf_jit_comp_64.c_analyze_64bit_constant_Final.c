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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void analyze_64bit_constant(u32 high_bits, u32 low_bits,
				   int *hbsp, int *lbsp, int *abbasp)
{
	int lowest_bit_set, highest_bit_set, all_bits_between_are_set;
	int i;

	lowest_bit_set = highest_bit_set = -1;
	i = 0;
	do {
		if ((lowest_bit_set == -1) && ((low_bits >> i) & 1))
			lowest_bit_set = i;
		if ((highest_bit_set == -1) && ((high_bits >> (32 - i - 1)) & 1))
			highest_bit_set = (64 - i - 1);
	}  while (++i < 32 && (highest_bit_set == -1 ||
			       lowest_bit_set == -1));
	if (i == 32) {
		i = 0;
		do {
			if (lowest_bit_set == -1 && ((high_bits >> i) & 1))
				lowest_bit_set = i + 32;
			if (highest_bit_set == -1 &&
			    ((low_bits >> (32 - i - 1)) & 1))
				highest_bit_set = 32 - i - 1;
		} while (++i < 32 && (highest_bit_set == -1 ||
				      lowest_bit_set == -1));
	}

	all_bits_between_are_set = 1;
	for (i = lowest_bit_set; i <= highest_bit_set; i++) {
		if (i < 32) {
			if ((low_bits & (1 << i)) != 0)
				continue;
		} else {
			if ((high_bits & (1 << (i - 32))) != 0)
				continue;
		}
		all_bits_between_are_set = 0;
		break;
	}
	*hbsp = highest_bit_set;
	*lbsp = lowest_bit_set;
	*abbasp = all_bits_between_are_set;
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
          // static_instructions_O0 : 91
          // dynamic_instructions_O0 : 841
          // ------------------------------- 
          // static_instructions_O1 : 59
          // dynamic_instructions_O1 : 634
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 633
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 633
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 633
          // ------------------------------- 
          // static_instructions_Os : 56
          // dynamic_instructions_Os : 631
          // ------------------------------- 
          // static_instructions_Oz : 54
          // dynamic_instructions_Oz : 631
          // ------------------------------- 

          int high_bits = 100;
        
          int low_bits = 100;
        
          int _len_hbsp0 = 1;
          int * hbsp = (int *) malloc(_len_hbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hbsp0; _i0++) {
            hbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lbsp0 = 1;
          int * lbsp = (int *) malloc(_len_lbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lbsp0; _i0++) {
            lbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_abbasp0 = 1;
          int * abbasp = (int *) malloc(_len_abbasp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abbasp0; _i0++) {
            abbasp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          analyze_64bit_constant(high_bits,low_bits,hbsp,lbsp,abbasp);
          free(hbsp);
          free(lbsp);
          free(abbasp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 91
          // dynamic_instructions_O0 : 926
          // ------------------------------- 
          // static_instructions_O1 : 59
          // dynamic_instructions_O1 : 664
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 663
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 663
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 663
          // ------------------------------- 
          // static_instructions_Os : 56
          // dynamic_instructions_Os : 661
          // ------------------------------- 
          // static_instructions_Oz : 54
          // dynamic_instructions_Oz : 668
          // ------------------------------- 

          int high_bits = 255;
        
          int low_bits = 255;
        
          int _len_hbsp0 = 65025;
          int * hbsp = (int *) malloc(_len_hbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hbsp0; _i0++) {
            hbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lbsp0 = 65025;
          int * lbsp = (int *) malloc(_len_lbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lbsp0; _i0++) {
            lbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_abbasp0 = 65025;
          int * abbasp = (int *) malloc(_len_abbasp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abbasp0; _i0++) {
            abbasp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          analyze_64bit_constant(high_bits,low_bits,hbsp,lbsp,abbasp);
          free(hbsp);
          free(lbsp);
          free(abbasp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 91
          // dynamic_instructions_O0 : 922
          // ------------------------------- 
          // static_instructions_O1 : 59
          // dynamic_instructions_O1 : 705
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 704
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 704
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 704
          // ------------------------------- 
          // static_instructions_Os : 56
          // dynamic_instructions_Os : 702
          // ------------------------------- 
          // static_instructions_Oz : 54
          // dynamic_instructions_Oz : 702
          // ------------------------------- 

          int high_bits = 10;
        
          int low_bits = 10;
        
          int _len_hbsp0 = 100;
          int * hbsp = (int *) malloc(_len_hbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hbsp0; _i0++) {
            hbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lbsp0 = 100;
          int * lbsp = (int *) malloc(_len_lbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lbsp0; _i0++) {
            lbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_abbasp0 = 100;
          int * abbasp = (int *) malloc(_len_abbasp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abbasp0; _i0++) {
            abbasp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          analyze_64bit_constant(high_bits,low_bits,hbsp,lbsp,abbasp);
          free(hbsp);
          free(lbsp);
          free(abbasp);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 91
          // dynamic_instructions_O0 : 104
          // ------------------------------- 
          // static_instructions_O1 : 59
          // dynamic_instructions_O1 : 63
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 56
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 54
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          int high_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int low_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hbsp0 = 1;
          int * hbsp = (int *) malloc(_len_hbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hbsp0; _i0++) {
            hbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lbsp0 = 1;
          int * lbsp = (int *) malloc(_len_lbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lbsp0; _i0++) {
            lbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_abbasp0 = 1;
          int * abbasp = (int *) malloc(_len_abbasp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abbasp0; _i0++) {
            abbasp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          analyze_64bit_constant(high_bits,low_bits,hbsp,lbsp,abbasp);
          free(hbsp);
          free(lbsp);
          free(abbasp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
