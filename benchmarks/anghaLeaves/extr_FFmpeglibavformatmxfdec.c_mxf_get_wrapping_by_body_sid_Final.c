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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_6__ {int body_sid; scalar_t__ wrapping; } ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef  scalar_t__ MXFWrappingScheme ;
typedef  TYPE_2__ MXFTrack ;
typedef  TYPE_3__ AVFormatContext ;

/* Variables and functions */
 scalar_t__ UnknownWrapped ; 

__attribute__((used)) static MXFWrappingScheme mxf_get_wrapping_by_body_sid(AVFormatContext *s, int body_sid)
{
    for (int i = 0; i < s->nb_streams; i++) {
        MXFTrack *track = s->streams[i]->priv_data;
        if (track && track->body_sid == body_sid && track->wrapping != UnknownWrapped)
            return track->wrapping;
    }
    return UnknownWrapped;
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
          int body_sid = 100;
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_5__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_5__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
                int _len_s__i0__streams__j0__priv_data0 = 1;
          s[_i0].streams[_j0]->priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__streams__j0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__priv_data0; _j0++) {
            s[_i0].streams[_j0]->priv_data->body_sid = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].streams[_j0]->priv_data->wrapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          long benchRet = mxf_get_wrapping_by_body_sid(s,body_sid);
          printf("%ld\n", benchRet); 
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
