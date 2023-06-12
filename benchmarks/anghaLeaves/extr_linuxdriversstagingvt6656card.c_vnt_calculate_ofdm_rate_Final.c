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
typedef  int u8 ;
typedef  int u16 ;

/* Variables and functions */
 int BB_TYPE_11A ; 
#define  RATE_12M 135 
#define  RATE_18M 134 
#define  RATE_24M 133 
#define  RATE_36M 132 
#define  RATE_48M 131 
#define  RATE_54M 130 
#define  RATE_6M 129 
#define  RATE_9M 128 

__attribute__((used)) static void vnt_calculate_ofdm_rate(u16 rate, u8 bb_type,
				    u8 *tx_rate, u8 *rsv_time)
{
	switch (rate) {
	case RATE_6M:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x9b;
			*rsv_time = 24;
		} else {
			*tx_rate = 0x8b;
			*rsv_time = 30;
		}
			break;
	case RATE_9M:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x9f;
			*rsv_time = 16;
		} else {
			*tx_rate = 0x8f;
			*rsv_time = 22;
		}
		break;
	case RATE_12M:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x9a;
			*rsv_time = 12;
		} else {
			*tx_rate = 0x8a;
			*rsv_time = 18;
		}
		break;
	case RATE_18M:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x9e;
			*rsv_time = 8;
		} else {
			*tx_rate = 0x8e;
			*rsv_time = 14;
		}
		break;
	case RATE_36M:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x9d;
			*rsv_time = 4;
		} else {
			*tx_rate = 0x8d;
			*rsv_time = 10;
		}
		break;
	case RATE_48M:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x98;
			*rsv_time = 4;
		} else {
			*tx_rate = 0x88;
			*rsv_time = 10;
		}
		break;
	case RATE_54M:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x9c;
			*rsv_time = 4;
		} else {
			*tx_rate = 0x8c;
			*rsv_time = 10;
		}
		break;
	case RATE_24M:
	default:
		if (bb_type == BB_TYPE_11A) {
			*tx_rate = 0x99;
			*rsv_time = 8;
		} else {
			*tx_rate = 0x89;
			*rsv_time = 14;
		}
		break;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int rate = 100;
        
          int bb_type = 100;
        
          int _len_tx_rate0 = 1;
          int * tx_rate = (int *) malloc(_len_tx_rate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_rate0; _i0++) {
            tx_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_rsv_time0 = 1;
          int * rsv_time = (int *) malloc(_len_rsv_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsv_time0; _i0++) {
            rsv_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vnt_calculate_ofdm_rate(rate,bb_type,tx_rate,rsv_time);
          free(tx_rate);
          free(rsv_time);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int rate = 255;
        
          int bb_type = 255;
        
          int _len_tx_rate0 = 65025;
          int * tx_rate = (int *) malloc(_len_tx_rate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_rate0; _i0++) {
            tx_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_rsv_time0 = 65025;
          int * rsv_time = (int *) malloc(_len_rsv_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsv_time0; _i0++) {
            rsv_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vnt_calculate_ofdm_rate(rate,bb_type,tx_rate,rsv_time);
          free(tx_rate);
          free(rsv_time);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int rate = 10;
        
          int bb_type = 10;
        
          int _len_tx_rate0 = 100;
          int * tx_rate = (int *) malloc(_len_tx_rate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_rate0; _i0++) {
            tx_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_rsv_time0 = 100;
          int * rsv_time = (int *) malloc(_len_rsv_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsv_time0; _i0++) {
            rsv_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vnt_calculate_ofdm_rate(rate,bb_type,tx_rate,rsv_time);
          free(tx_rate);
          free(rsv_time);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int bb_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_tx_rate0 = 1;
          int * tx_rate = (int *) malloc(_len_tx_rate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_rate0; _i0++) {
            tx_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_rsv_time0 = 1;
          int * rsv_time = (int *) malloc(_len_rsv_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rsv_time0; _i0++) {
            rsv_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vnt_calculate_ofdm_rate(rate,bb_type,tx_rate,rsv_time);
          free(tx_rate);
          free(rsv_time);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
