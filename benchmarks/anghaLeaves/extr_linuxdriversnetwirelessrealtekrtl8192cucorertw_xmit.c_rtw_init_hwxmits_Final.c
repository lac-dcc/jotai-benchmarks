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
struct hw_xmit {scalar_t__ accnt; } ;
typedef  scalar_t__ sint ;

/* Variables and functions */
 int /*<<< orphan*/  _func_enter_ ; 
 int /*<<< orphan*/  _func_exit_ ; 

void rtw_init_hwxmits(struct hw_xmit *phwxmit, sint entry)
{
	sint i;
_func_enter_;	
	for(i = 0; i < entry; i++, phwxmit++)
	{
		//_rtw_spinlock_init(&phwxmit->xmit_lock);
		//_rtw_init_listhead(&phwxmit->pending);		
		//phwxmit->txcmdcnt = 0;
		phwxmit->accnt = 0;
	}
_func_exit_;	
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 3070
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1284
          // ------------------------------- 

          long entry = 255;
        
          int _len_phwxmit0 = 65025;
          struct hw_xmit * phwxmit = (struct hw_xmit *) malloc(_len_phwxmit0*sizeof(struct hw_xmit));
          for(int _i0 = 0; _i0 < _len_phwxmit0; _i0++) {
              phwxmit[_i0].accnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rtw_init_hwxmits(phwxmit,entry);
          free(phwxmit);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 130
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 59
          // ------------------------------- 

          long entry = 10;
        
          int _len_phwxmit0 = 100;
          struct hw_xmit * phwxmit = (struct hw_xmit *) malloc(_len_phwxmit0*sizeof(struct hw_xmit));
          for(int _i0 = 0; _i0 < _len_phwxmit0; _i0++) {
              phwxmit[_i0].accnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rtw_init_hwxmits(phwxmit,entry);
          free(phwxmit);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 3
          // dynamic_instructions_O1 : 3
          // ------------------------------- 
          // static_instructions_O2 : 3
          // dynamic_instructions_O2 : 3
          // ------------------------------- 
          // static_instructions_O3 : 3
          // dynamic_instructions_O3 : 3
          // ------------------------------- 
          // static_instructions_Ofast : 3
          // dynamic_instructions_Ofast : 3
          // ------------------------------- 
          // static_instructions_Os : 3
          // dynamic_instructions_Os : 3
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          long entry = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_phwxmit0 = 1;
          struct hw_xmit * phwxmit = (struct hw_xmit *) malloc(_len_phwxmit0*sizeof(struct hw_xmit));
          for(int _i0 = 0; _i0 < _len_phwxmit0; _i0++) {
              phwxmit[_i0].accnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rtw_init_hwxmits(phwxmit,entry);
          free(phwxmit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
