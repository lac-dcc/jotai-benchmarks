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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int disposition; } ;
struct TYPE_5__ {int nb_packets; scalar_t__ abort_request; } ;
typedef  TYPE_1__ PacketQueue ;
typedef  TYPE_2__ AVStream ;

/* Variables and functions */
 int AV_DISPOSITION_ATTACHED_PIC ; 

__attribute__((used)) static int stream_has_enough_packets(AVStream *st, int stream_id, PacketQueue *queue, int min_frames) {
    return stream_id < 0 ||
           queue->abort_request ||
           (st->disposition & AV_DISPOSITION_ATTACHED_PIC) ||
#ifdef FFP_MERGE
           queue->nb_packets > MIN_FRAMES && (!queue->duration || av_q2d(st->time_base) * queue->duration > 1.0);
#endif
           queue->nb_packets > min_frames;
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
          int stream_id = 100;
          int min_frames = 100;
          int _len_st0 = 1;
          struct TYPE_6__ * st = (struct TYPE_6__ *) malloc(_len_st0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].disposition = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_queue0 = 1;
          struct TYPE_5__ * queue = (struct TYPE_5__ *) malloc(_len_queue0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].nb_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        queue[_i0].abort_request = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stream_has_enough_packets(st,stream_id,queue,min_frames);
          printf("%d\n", benchRet); 
          free(st);
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
