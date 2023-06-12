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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ipw_priv {int status; TYPE_1__* assoc_network; } ;
struct TYPE_2__ {int beacon_interval; } ;

/* Variables and functions */
 int STATUS_ASSOCIATED ; 

__attribute__((used)) static int ipw_passive_dwell_time(struct ipw_priv *priv)
{
	/* staying on passive channels longer than the DTIM interval during a
	 * scan, while associated, causes the firmware to cancel the scan
	 * without notification. Hence, don't stay on passive channels longer
	 * than the beacon interval.
	 */
	if (priv->status & STATUS_ASSOCIATED
	    && priv->assoc_network->beacon_interval > 10)
		return priv->assoc_network->beacon_interval - 10;
	else
		return 120;
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_priv0 = 65025;
          struct ipw_priv * priv = (struct ipw_priv *) malloc(_len_priv0*sizeof(struct ipw_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__assoc_network0 = 1;
          priv[_i0].assoc_network = (struct TYPE_2__ *) malloc(_len_priv__i0__assoc_network0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__assoc_network0; _j0++) {
              priv[_i0].assoc_network->beacon_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ipw_passive_dwell_time(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].assoc_network);
          }
          free(priv);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_priv0 = 100;
          struct ipw_priv * priv = (struct ipw_priv *) malloc(_len_priv0*sizeof(struct ipw_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__assoc_network0 = 1;
          priv[_i0].assoc_network = (struct TYPE_2__ *) malloc(_len_priv__i0__assoc_network0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__assoc_network0; _j0++) {
              priv[_i0].assoc_network->beacon_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ipw_passive_dwell_time(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].assoc_network);
          }
          free(priv);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_priv0 = 1;
          struct ipw_priv * priv = (struct ipw_priv *) malloc(_len_priv0*sizeof(struct ipw_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__assoc_network0 = 1;
          priv[_i0].assoc_network = (struct TYPE_2__ *) malloc(_len_priv__i0__assoc_network0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__assoc_network0; _j0++) {
              priv[_i0].assoc_network->beacon_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ipw_passive_dwell_time(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].assoc_network);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
