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
typedef  scalar_t__ u8 ;
typedef  int u16 ;

/* Variables and functions */

bool ath9k_hw_get_lower_upper_index(u8 target, u8 *pList, u16 listSize,
				    u16 *indexL, u16 *indexR)
{
	u16 i;

	if (target <= pList[0]) {
		*indexL = *indexR = 0;
		return true;
	}
	if (target >= pList[listSize - 1]) {
		*indexL = *indexR = (u16) (listSize - 1);
		return true;
	}

	for (i = 0; i < listSize - 1; i++) {
		if (pList[i] == target) {
			*indexL = *indexR = i;
			return true;
		}
		if (target < pList[i + 1]) {
			*indexL = i;
			*indexR = (u16) (i + 1);
			return false;
		}
	}
	return false;
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          long target = 255;
        
          int listSize = 255;
        
          int _len_pList0 = 65025;
          long * pList = (long *) malloc(_len_pList0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pList0; _i0++) {
            pList[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_indexL0 = 65025;
          int * indexL = (int *) malloc(_len_indexL0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexL0; _i0++) {
            indexL[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_indexR0 = 65025;
          int * indexR = (int *) malloc(_len_indexR0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexR0; _i0++) {
            indexR[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ath9k_hw_get_lower_upper_index(target,pList,listSize,indexL,indexR);
          printf("%d\n", benchRet); 
          free(pList);
          free(indexL);
          free(indexR);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          long target = 10;
        
          int listSize = 10;
        
          int _len_pList0 = 100;
          long * pList = (long *) malloc(_len_pList0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pList0; _i0++) {
            pList[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_indexL0 = 100;
          int * indexL = (int *) malloc(_len_indexL0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexL0; _i0++) {
            indexL[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_indexR0 = 100;
          int * indexR = (int *) malloc(_len_indexR0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexR0; _i0++) {
            indexR[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ath9k_hw_get_lower_upper_index(target,pList,listSize,indexL,indexR);
          printf("%d\n", benchRet); 
          free(pList);
          free(indexL);
          free(indexR);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
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
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long target = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int listSize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pList0 = 1;
          long * pList = (long *) malloc(_len_pList0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pList0; _i0++) {
            pList[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_indexL0 = 1;
          int * indexL = (int *) malloc(_len_indexL0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexL0; _i0++) {
            indexL[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_indexR0 = 1;
          int * indexR = (int *) malloc(_len_indexR0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexR0; _i0++) {
            indexR[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ath9k_hw_get_lower_upper_index(target,pList,listSize,indexL,indexR);
          printf("%d\n", benchRet); 
          free(pList);
          free(indexL);
          free(indexR);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
