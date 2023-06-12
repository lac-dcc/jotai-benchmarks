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
struct page {int dummy; } ;
struct ftmac100_rxdes {unsigned int rxdes3; } ;

/* Variables and functions */

__attribute__((used)) static void ftmac100_rxdes_set_page(struct ftmac100_rxdes *rxdes, struct page *page)
{
	rxdes->rxdes3 = (unsigned int)page;
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_rxdes0 = 65025;
          struct ftmac100_rxdes * rxdes = (struct ftmac100_rxdes *) malloc(_len_rxdes0*sizeof(struct ftmac100_rxdes));
          for(int _i0 = 0; _i0 < _len_rxdes0; _i0++) {
              rxdes[_i0].rxdes3 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_page0 = 65025;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
              page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ftmac100_rxdes_set_page(rxdes,page);
          free(rxdes);
          free(page);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_rxdes0 = 100;
          struct ftmac100_rxdes * rxdes = (struct ftmac100_rxdes *) malloc(_len_rxdes0*sizeof(struct ftmac100_rxdes));
          for(int _i0 = 0; _i0 < _len_rxdes0; _i0++) {
              rxdes[_i0].rxdes3 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_page0 = 100;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
              page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ftmac100_rxdes_set_page(rxdes,page);
          free(rxdes);
          free(page);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_rxdes0 = 1;
          struct ftmac100_rxdes * rxdes = (struct ftmac100_rxdes *) malloc(_len_rxdes0*sizeof(struct ftmac100_rxdes));
          for(int _i0 = 0; _i0 < _len_rxdes0; _i0++) {
              rxdes[_i0].rxdes3 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_page0 = 1;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
              page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ftmac100_rxdes_set_page(rxdes,page);
          free(rxdes);
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
