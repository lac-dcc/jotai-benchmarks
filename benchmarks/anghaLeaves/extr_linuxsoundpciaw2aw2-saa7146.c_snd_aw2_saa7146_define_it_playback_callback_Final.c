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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  scalar_t__ snd_aw2_saa7146_it_cb ;
struct TYPE_2__ {void* p_callback_param; scalar_t__ p_it_callback; } ;

/* Variables and functions */
 unsigned int NB_STREAM_PLAYBACK ; 
 TYPE_1__* arr_substream_it_playback_cb ; 

void snd_aw2_saa7146_define_it_playback_callback(unsigned int stream_number,
						 snd_aw2_saa7146_it_cb
						 p_it_callback,
						 void *p_callback_param)
{
	if (stream_number < NB_STREAM_PLAYBACK) {
		arr_substream_it_playback_cb[stream_number].p_it_callback =
		    (snd_aw2_saa7146_it_cb) p_it_callback;
		arr_substream_it_playback_cb[stream_number].p_callback_param =
		    (void *)p_callback_param;
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
          unsigned int stream_number = 100;
          long p_it_callback = 100;
          void * p_callback_param;
          snd_aw2_saa7146_define_it_playback_callback(stream_number,p_it_callback,p_callback_param);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int stream_number = 255;
          long p_it_callback = 255;
          void * p_callback_param;
          snd_aw2_saa7146_define_it_playback_callback(stream_number,p_it_callback,p_callback_param);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int stream_number = 10;
          long p_it_callback = 10;
          void * p_callback_param;
          snd_aw2_saa7146_define_it_playback_callback(stream_number,p_it_callback,p_callback_param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
