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
struct ath_ant_comb {int ant_ratio2; int low_rssi_thresh; } ;

/* Variables and functions */

__attribute__((used)) static inline bool ath_is_alt_ant_ratio_better(struct ath_ant_comb *antcomb,
					       int alt_ratio, int maxdelta,
					       int mindelta, int main_rssi_avg,
					       int alt_rssi_avg, int pkt_count)
{
	if (pkt_count <= 50)
		return false;

	if (alt_rssi_avg > main_rssi_avg + mindelta)
		return true;

	if (alt_ratio >= antcomb->ant_ratio2 &&
	    alt_rssi_avg >= antcomb->low_rssi_thresh &&
	    (alt_rssi_avg > main_rssi_avg + maxdelta))
		return true;

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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int alt_ratio = 100;
        
          int maxdelta = 100;
        
          int mindelta = 100;
        
          int main_rssi_avg = 100;
        
          int alt_rssi_avg = 100;
        
          int pkt_count = 100;
        
          int _len_antcomb0 = 1;
          struct ath_ant_comb * antcomb = (struct ath_ant_comb *) malloc(_len_antcomb0*sizeof(struct ath_ant_comb));
          for(int _i0 = 0; _i0 < _len_antcomb0; _i0++) {
              antcomb[_i0].ant_ratio2 = ((-2 * (next_i()%2)) + 1) * next_i();
          antcomb[_i0].low_rssi_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath_is_alt_ant_ratio_better(antcomb,alt_ratio,maxdelta,mindelta,main_rssi_avg,alt_rssi_avg,pkt_count);
          printf("%d\n", benchRet); 
          free(antcomb);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int alt_ratio = 255;
        
          int maxdelta = 255;
        
          int mindelta = 255;
        
          int main_rssi_avg = 255;
        
          int alt_rssi_avg = 255;
        
          int pkt_count = 255;
        
          int _len_antcomb0 = 65025;
          struct ath_ant_comb * antcomb = (struct ath_ant_comb *) malloc(_len_antcomb0*sizeof(struct ath_ant_comb));
          for(int _i0 = 0; _i0 < _len_antcomb0; _i0++) {
              antcomb[_i0].ant_ratio2 = ((-2 * (next_i()%2)) + 1) * next_i();
          antcomb[_i0].low_rssi_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath_is_alt_ant_ratio_better(antcomb,alt_ratio,maxdelta,mindelta,main_rssi_avg,alt_rssi_avg,pkt_count);
          printf("%d\n", benchRet); 
          free(antcomb);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int alt_ratio = 10;
        
          int maxdelta = 10;
        
          int mindelta = 10;
        
          int main_rssi_avg = 10;
        
          int alt_rssi_avg = 10;
        
          int pkt_count = 10;
        
          int _len_antcomb0 = 100;
          struct ath_ant_comb * antcomb = (struct ath_ant_comb *) malloc(_len_antcomb0*sizeof(struct ath_ant_comb));
          for(int _i0 = 0; _i0 < _len_antcomb0; _i0++) {
              antcomb[_i0].ant_ratio2 = ((-2 * (next_i()%2)) + 1) * next_i();
          antcomb[_i0].low_rssi_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath_is_alt_ant_ratio_better(antcomb,alt_ratio,maxdelta,mindelta,main_rssi_avg,alt_rssi_avg,pkt_count);
          printf("%d\n", benchRet); 
          free(antcomb);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int alt_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int maxdelta = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int mindelta = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int main_rssi_avg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int alt_rssi_avg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int pkt_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_antcomb0 = 1;
          struct ath_ant_comb * antcomb = (struct ath_ant_comb *) malloc(_len_antcomb0*sizeof(struct ath_ant_comb));
          for(int _i0 = 0; _i0 < _len_antcomb0; _i0++) {
              antcomb[_i0].ant_ratio2 = ((-2 * (next_i()%2)) + 1) * next_i();
          antcomb[_i0].low_rssi_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath_is_alt_ant_ratio_better(antcomb,alt_ratio,maxdelta,mindelta,main_rssi_avg,alt_rssi_avg,pkt_count);
          printf("%d\n", benchRet); 
          free(antcomb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
