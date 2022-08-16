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
struct sis_video_info {int sisfb_parm_mem; int video_size; int hwcursor_size; int cmdQueueSize; scalar_t__ sisvga_engine; scalar_t__ cardnumber; scalar_t__ LFBsize; scalar_t__ UMAsize; } ;

/* Variables and functions */
 scalar_t__ SIS_300_VGA ; 

__attribute__((used)) static u32 sisfb_getheapstart(struct sis_video_info *ivideo)
{
	u32 ret = ivideo->sisfb_parm_mem * 1024;
	u32 maxoffs = ivideo->video_size - ivideo->hwcursor_size - ivideo->cmdQueueSize;
	u32 def;

	/* Calculate heap start = end of memory for console
	 *
	 * CCCCCCCCDDDDDDDDDDDDDDDDDDDDDDDDDDDDHHHHQQQQQQQQQQ
	 * C = console, D = heap, H = HWCursor, Q = cmd-queue
	 *
	 * On 76x in UMA+LFB mode, the layout is as follows:
	 * DDDDDDDDDDDCCCCCCCCCCCCCCCCCCCCCCCCHHHHQQQQQQQQQQQ
	 * where the heap is the entire UMA area, eventually
	 * into the LFB area if the given mem parameter is
	 * higher than the size of the UMA memory.
	 *
	 * Basically given by "mem" parameter
	 *
	 * maximum = videosize - cmd_queue - hwcursor
	 *           (results in a heap of size 0)
	 * default = SiS 300: depends on videosize
	 *           SiS 315/330/340/XGI: 32k below max
	 */

	if(ivideo->sisvga_engine == SIS_300_VGA) {
		if(ivideo->video_size > 0x1000000) {
			def = 0xc00000;
		} else if(ivideo->video_size > 0x800000) {
			def = 0x800000;
		} else {
			def = 0x400000;
		}
	} else if(ivideo->UMAsize && ivideo->LFBsize) {
		ret = def = 0;
	} else {
		def = maxoffs - 0x8000;
	}

	/* Use default for secondary card for now (FIXME) */
	if((!ret) || (ret > maxoffs) || (ivideo->cardnumber != 0))
		ret = def;

	return ret;
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
          int _len_ivideo0 = 1;
          struct sis_video_info * ivideo = (struct sis_video_info *) malloc(_len_ivideo0*sizeof(struct sis_video_info));
          for(int _i0 = 0; _i0 < _len_ivideo0; _i0++) {
            ivideo[_i0].sisfb_parm_mem = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].video_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].hwcursor_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].cmdQueueSize = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].sisvga_engine = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].cardnumber = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].LFBsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].UMAsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sisfb_getheapstart(ivideo);
          printf("%d\n", benchRet); 
          free(ivideo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
