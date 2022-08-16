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
struct priv {scalar_t__ start; scalar_t__ end; scalar_t__ codec; } ;
struct mp_frame {scalar_t__ type; struct demux_packet* data; } ;
struct demux_packet {scalar_t__ start; scalar_t__ end; scalar_t__ codec; scalar_t__ segmented; } ;

/* Variables and functions */
 scalar_t__ MP_FRAME_PACKET ; 

__attribute__((used)) static bool is_new_segment(struct priv *p, struct mp_frame frame)
{
    if (frame.type != MP_FRAME_PACKET)
        return false;
    struct demux_packet *pkt = frame.data;
    return pkt->segmented && (pkt->start != p->start || pkt->end != p->end ||
                              pkt->codec != p->codec);
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
          int _len_p0 = 1;
          struct priv * p = (struct priv *) malloc(_len_p0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mp_frame frame;
        frame.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frame_data0 = 1;
          frame.data = (struct demux_packet *) malloc(_len_frame_data0*sizeof(struct demux_packet));
          for(int _j0 = 0; _j0 < _len_frame_data0; _j0++) {
            frame.data->start = ((-2 * (next_i()%2)) + 1) * next_i();
        frame.data->end = ((-2 * (next_i()%2)) + 1) * next_i();
        frame.data->codec = ((-2 * (next_i()%2)) + 1) * next_i();
        frame.data->segmented = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_new_segment(p,frame);
          printf("%d\n", benchRet); 
          free(p);
          free(frame.data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
