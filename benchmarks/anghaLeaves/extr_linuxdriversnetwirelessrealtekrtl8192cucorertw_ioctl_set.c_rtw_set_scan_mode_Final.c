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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ scan_mode; } ;
struct TYPE_5__ {TYPE_1__ mlmepriv; } ;
typedef  TYPE_2__ _adapter ;
typedef  scalar_t__ RT_SCAN_TYPE ;

/* Variables and functions */
 scalar_t__ SCAN_ACTIVE ; 
 scalar_t__ SCAN_PASSIVE ; 
 int _FAIL ; 
 int _SUCCESS ; 

int rtw_set_scan_mode(_adapter *adapter, RT_SCAN_TYPE scan_mode)
{
	if(scan_mode != SCAN_ACTIVE && scan_mode != SCAN_PASSIVE)
		return _FAIL;
	
	adapter->mlmepriv.scan_mode = scan_mode;

	return _SUCCESS;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          long scan_mode = 100;
        
          int _len_adapter0 = 1;
          struct TYPE_5__ * adapter = (struct TYPE_5__ *) malloc(_len_adapter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].mlmepriv.scan_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = rtw_set_scan_mode(adapter,scan_mode);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          long scan_mode = 255;
        
          int _len_adapter0 = 65025;
          struct TYPE_5__ * adapter = (struct TYPE_5__ *) malloc(_len_adapter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].mlmepriv.scan_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = rtw_set_scan_mode(adapter,scan_mode);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          long scan_mode = 10;
        
          int _len_adapter0 = 100;
          struct TYPE_5__ * adapter = (struct TYPE_5__ *) malloc(_len_adapter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].mlmepriv.scan_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = rtw_set_scan_mode(adapter,scan_mode);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          long scan_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_adapter0 = 1;
          struct TYPE_5__ * adapter = (struct TYPE_5__ *) malloc(_len_adapter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].mlmepriv.scan_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = rtw_set_scan_mode(adapter,scan_mode);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
