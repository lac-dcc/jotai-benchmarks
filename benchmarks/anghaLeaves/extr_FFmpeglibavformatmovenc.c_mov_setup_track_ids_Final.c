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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_9__ {int track_ids_ok; int nb_streams; int flags; TYPE_2__* tracks; scalar_t__ use_stream_ids_as_track_ids; } ;
struct TYPE_8__ {scalar_t__ entry; int track_id; } ;
struct TYPE_7__ {int id; } ;
typedef  TYPE_3__ MOVMuxContext ;
typedef  TYPE_4__ AVFormatContext ;

/* Variables and functions */
 int FF_MOV_FLAG_FRAGMENT ; 

__attribute__((used)) static int mov_setup_track_ids(MOVMuxContext *mov, AVFormatContext *s)
{
    int i;

    if (mov->track_ids_ok)
        return 0;

    if (mov->use_stream_ids_as_track_ids) {
        int next_generated_track_id = 0;
        for (i = 0; i < s->nb_streams; i++) {
            if (s->streams[i]->id > next_generated_track_id)
                next_generated_track_id = s->streams[i]->id;
        }

        for (i = 0; i < mov->nb_streams; i++) {
            if (mov->tracks[i].entry <= 0 && !(mov->flags & FF_MOV_FLAG_FRAGMENT))
                continue;

            mov->tracks[i].track_id = i >= s->nb_streams ? ++next_generated_track_id : s->streams[i]->id;
        }
    } else {
        for (i = 0; i < mov->nb_streams; i++) {
            if (mov->tracks[i].entry <= 0 && !(mov->flags & FF_MOV_FLAG_FRAGMENT))
                continue;

            mov->tracks[i].track_id = i + 1;
        }
    }

    mov->track_ids_ok = 1;

    return 0;
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
          int _len_mov0 = 1;
          struct TYPE_9__ * mov = (struct TYPE_9__ *) malloc(_len_mov0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_mov0; _i0++) {
            mov[_i0].track_ids_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        mov[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
        mov[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mov__i0__tracks0 = 1;
          mov[_i0].tracks = (struct TYPE_8__ *) malloc(_len_mov__i0__tracks0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_mov__i0__tracks0; _j0++) {
            mov[_i0].tracks->entry = ((-2 * (next_i()%2)) + 1) * next_i();
        mov[_i0].tracks->track_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mov[_i0].use_stream_ids_as_track_ids = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          struct TYPE_10__ * s = (struct TYPE_10__ *) malloc(_len_s0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_7__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_7__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = mov_setup_track_ids(mov,s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mov0; _aux++) {
          free(mov[_aux].tracks);
          }
          free(mov);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
