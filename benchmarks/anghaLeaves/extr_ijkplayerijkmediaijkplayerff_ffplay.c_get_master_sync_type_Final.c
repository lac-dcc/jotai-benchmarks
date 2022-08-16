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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ av_sync_type; scalar_t__ audio_st; scalar_t__ video_st; } ;
typedef  TYPE_1__ VideoState ;

/* Variables and functions */
 int AV_SYNC_AUDIO_MASTER ; 
 int AV_SYNC_EXTERNAL_CLOCK ; 
 scalar_t__ AV_SYNC_VIDEO_MASTER ; 

__attribute__((used)) static int get_master_sync_type(VideoState *is) {
    if (is->av_sync_type == AV_SYNC_VIDEO_MASTER) {
        if (is->video_st)
            return AV_SYNC_VIDEO_MASTER;
        else
            return AV_SYNC_AUDIO_MASTER;
    } else if (is->av_sync_type == AV_SYNC_AUDIO_MASTER) {
        if (is->audio_st)
            return AV_SYNC_AUDIO_MASTER;
        else
            return AV_SYNC_EXTERNAL_CLOCK;
    } else {
        return AV_SYNC_EXTERNAL_CLOCK;
    }
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
          int _len_is0 = 1;
          struct TYPE_3__ * is = (struct TYPE_3__ *) malloc(_len_is0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_is0; _i0++) {
            is[_i0].av_sync_type = ((-2 * (next_i()%2)) + 1) * next_i();
        is[_i0].audio_st = ((-2 * (next_i()%2)) + 1) * next_i();
        is[_i0].video_st = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_master_sync_type(is);
          printf("%d\n", benchRet); 
          free(is);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
