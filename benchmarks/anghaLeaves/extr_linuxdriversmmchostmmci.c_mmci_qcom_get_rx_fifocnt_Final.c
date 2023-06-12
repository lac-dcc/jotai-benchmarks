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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct mmci_host {TYPE_1__* variant; } ;
struct TYPE_2__ {int fifohalfsize; } ;

/* Variables and functions */
 int MCI_RXDATAAVLBL ; 
 int MCI_RXFIFOHALFFULL ; 

__attribute__((used)) static int mmci_qcom_get_rx_fifocnt(struct mmci_host *host, u32 status, int r)
{
	/*
	 * on qcom SDCC4 only 8 words are used in each burst so only 8 addresses
	 * from the fifo range should be used
	 */
	if (status & MCI_RXFIFOHALFFULL)
		return host->variant->fifohalfsize;
	else if (status & MCI_RXDATAAVLBL)
		return 4;

	return 0;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int status = 100;
        
          int r = 100;
        
          int _len_host0 = 1;
          struct mmci_host * host = (struct mmci_host *) malloc(_len_host0*sizeof(struct mmci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__variant0 = 1;
          host[_i0].variant = (struct TYPE_2__ *) malloc(_len_host__i0__variant0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__variant0; _j0++) {
              host[_i0].variant->fifohalfsize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mmci_qcom_get_rx_fifocnt(host,status,r);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].variant);
          }
          free(host);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int status = 255;
        
          int r = 255;
        
          int _len_host0 = 65025;
          struct mmci_host * host = (struct mmci_host *) malloc(_len_host0*sizeof(struct mmci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__variant0 = 1;
          host[_i0].variant = (struct TYPE_2__ *) malloc(_len_host__i0__variant0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__variant0; _j0++) {
              host[_i0].variant->fifohalfsize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mmci_qcom_get_rx_fifocnt(host,status,r);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].variant);
          }
          free(host);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int status = 10;
        
          int r = 10;
        
          int _len_host0 = 100;
          struct mmci_host * host = (struct mmci_host *) malloc(_len_host0*sizeof(struct mmci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__variant0 = 1;
          host[_i0].variant = (struct TYPE_2__ *) malloc(_len_host__i0__variant0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__variant0; _j0++) {
              host[_i0].variant->fifohalfsize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mmci_qcom_get_rx_fifocnt(host,status,r);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].variant);
          }
          free(host);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          int status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_host0 = 1;
          struct mmci_host * host = (struct mmci_host *) malloc(_len_host0*sizeof(struct mmci_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__variant0 = 1;
          host[_i0].variant = (struct TYPE_2__ *) malloc(_len_host__i0__variant0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__variant0; _j0++) {
              host[_i0].variant->fifohalfsize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mmci_qcom_get_rx_fifocnt(host,status,r);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].variant);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
