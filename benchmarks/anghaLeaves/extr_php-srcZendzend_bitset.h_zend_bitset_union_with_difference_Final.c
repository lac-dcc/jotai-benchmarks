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
typedef  int* zend_bitset ;
typedef  size_t uint32_t ;

/* Variables and functions */

__attribute__((used)) static inline void zend_bitset_union_with_difference(zend_bitset set1, zend_bitset set2, zend_bitset set3, zend_bitset set4, uint32_t len)
{
	uint32_t i;

	for (i = 0; i < len; i++) {
		set1[i] = set2[i] | (set3[i] & ~set4[i]);
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 5623
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 2048
          // ------------------------------- 
          // static_instructions_O2 : 89
          // dynamic_instructions_O2 : 565
          // ------------------------------- 
          // static_instructions_O3 : 89
          // dynamic_instructions_O3 : 565
          // ------------------------------- 
          // static_instructions_Ofast : 89
          // dynamic_instructions_Ofast : 565
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 2047
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 2302
          // ------------------------------- 

          unsigned long len = 255;
        
          int _len_set10 = 65025;
          int * set1 = (int *) malloc(_len_set10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set10; _i0++) {
            set1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_set20 = 65025;
          int * set2 = (int *) malloc(_len_set20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set20; _i0++) {
            set2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_set30 = 65025;
          int * set3 = (int *) malloc(_len_set30*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set30; _i0++) {
            set3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_set40 = 65025;
          int * set4 = (int *) malloc(_len_set40*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set40; _i0++) {
            set4[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          zend_bitset_union_with_difference(set1,set2,set3,set4,len);
          free(set1);
          free(set2);
          free(set3);
          free(set4);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 233
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 88
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
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 87
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 97
          // ------------------------------- 

          unsigned long len = 10;
        
          int _len_set10 = 100;
          int * set1 = (int *) malloc(_len_set10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set10; _i0++) {
            set1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_set20 = 100;
          int * set2 = (int *) malloc(_len_set20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set20; _i0++) {
            set2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_set30 = 100;
          int * set3 = (int *) malloc(_len_set30*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set30; _i0++) {
            set3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_set40 = 100;
          int * set4 = (int *) malloc(_len_set40*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set40; _i0++) {
            set4[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          zend_bitset_union_with_difference(set1,set2,set3,set4,len);
          free(set1);
          free(set2);
          free(set3);
          free(set4);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
