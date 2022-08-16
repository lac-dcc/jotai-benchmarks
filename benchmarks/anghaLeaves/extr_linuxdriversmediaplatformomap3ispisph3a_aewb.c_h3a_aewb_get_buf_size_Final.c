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
typedef  int u32 ;
struct omap3isp_h3a_aewb_config {int ver_win_count; int hor_win_count; } ;

/* Variables and functions */
 int AEWB_PACKET_SIZE ; 

__attribute__((used)) static u32 h3a_aewb_get_buf_size(struct omap3isp_h3a_aewb_config *conf)
{
	/* Number of configured windows + extra row for black data */
	u32 win_count = (conf->ver_win_count + 1) * conf->hor_win_count;

	/*
	 * Unsaturated block counts for each 8 windows.
	 * 1 extra for the last (win_count % 8) windows if win_count is not
	 * divisible by 8.
	 */
	win_count += (win_count + 7) / 8;

	return win_count * AEWB_PACKET_SIZE;
}


// ------------------------------------------------------------------------- //




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
          int _len_conf0 = 1;
          struct omap3isp_h3a_aewb_config * conf = (struct omap3isp_h3a_aewb_config *) malloc(_len_conf0*sizeof(struct omap3isp_h3a_aewb_config));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].ver_win_count = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].hor_win_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h3a_aewb_get_buf_size(conf);
          printf("%d\n", benchRet); 
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
