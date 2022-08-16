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
struct sis_video_info {int video_size; int hwcursor_size; int cmdQueueSize; int UMAsize; int sisfb_parm_mem; int video_offset; int sisfb_mem; int heapstart; scalar_t__ LFBsize; } ;

/* Variables and functions */

__attribute__((used)) static u32 sisfb_getheapsize(struct sis_video_info *ivideo)
{
	u32 max = ivideo->video_size - ivideo->hwcursor_size - ivideo->cmdQueueSize;
	u32 ret = 0;

	if(ivideo->UMAsize && ivideo->LFBsize) {
		if( (!ivideo->sisfb_parm_mem)			||
		    ((ivideo->sisfb_parm_mem * 1024) > max)	||
		    ((max - (ivideo->sisfb_parm_mem * 1024)) < ivideo->UMAsize) ) {
			ret = ivideo->UMAsize;
			max -= ivideo->UMAsize;
		} else {
			ret = max - (ivideo->sisfb_parm_mem * 1024);
			max = ivideo->sisfb_parm_mem * 1024;
		}
		ivideo->video_offset = ret;
		ivideo->sisfb_mem = max;
	} else {
		ret = max - ivideo->heapstart;
		ivideo->sisfb_mem = ivideo->heapstart;
	}

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
            ivideo[_i0].video_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].hwcursor_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].cmdQueueSize = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].UMAsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].sisfb_parm_mem = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].video_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].sisfb_mem = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].heapstart = ((-2 * (next_i()%2)) + 1) * next_i();
        ivideo[_i0].LFBsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sisfb_getheapsize(ivideo);
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
