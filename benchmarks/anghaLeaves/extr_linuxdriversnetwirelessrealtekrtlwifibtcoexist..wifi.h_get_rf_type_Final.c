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
typedef  int /*<<< orphan*/  u8 ;
struct rtl_phy {int /*<<< orphan*/  rf_type; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 get_rf_type(struct rtl_phy *rtlphy)
{
	return rtlphy->rf_type;
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
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_rtlphy0 = 65025;
          struct rtl_phy * rtlphy = (struct rtl_phy *) malloc(_len_rtlphy0*sizeof(struct rtl_phy));
          for(int _i0 = 0; _i0 < _len_rtlphy0; _i0++) {
              rtlphy[_i0].rf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_rf_type(rtlphy);
          printf("%d\n", benchRet); 
          free(rtlphy);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_rtlphy0 = 100;
          struct rtl_phy * rtlphy = (struct rtl_phy *) malloc(_len_rtlphy0*sizeof(struct rtl_phy));
          for(int _i0 = 0; _i0 < _len_rtlphy0; _i0++) {
              rtlphy[_i0].rf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_rf_type(rtlphy);
          printf("%d\n", benchRet); 
          free(rtlphy);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_rtlphy0 = 1;
          struct rtl_phy * rtlphy = (struct rtl_phy *) malloc(_len_rtlphy0*sizeof(struct rtl_phy));
          for(int _i0 = 0; _i0 < _len_rtlphy0; _i0++) {
              rtlphy[_i0].rf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_rf_type(rtlphy);
          printf("%d\n", benchRet); 
          free(rtlphy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
