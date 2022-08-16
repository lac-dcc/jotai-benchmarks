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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int /*<<< orphan*/  data_codec_id; int /*<<< orphan*/  subtitle_codec_id; int /*<<< orphan*/  audio_codec_id; int /*<<< orphan*/  video_codec_id; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {int codec_type; int /*<<< orphan*/  codec_id; } ;
typedef  TYPE_2__ AVStream ;
typedef  TYPE_3__ AVFormatContext ;

/* Variables and functions */
#define  AVMEDIA_TYPE_AUDIO 131 
#define  AVMEDIA_TYPE_DATA 130 
#define  AVMEDIA_TYPE_SUBTITLE 129 
#define  AVMEDIA_TYPE_VIDEO 128 

__attribute__((used)) static void force_codec_ids(AVFormatContext *s, AVStream *st)
{
    switch (st->codecpar->codec_type) {
    case AVMEDIA_TYPE_VIDEO:
        if (s->video_codec_id)
            st->codecpar->codec_id = s->video_codec_id;
        break;
    case AVMEDIA_TYPE_AUDIO:
        if (s->audio_codec_id)
            st->codecpar->codec_id = s->audio_codec_id;
        break;
    case AVMEDIA_TYPE_SUBTITLE:
        if (s->subtitle_codec_id)
            st->codecpar->codec_id = s->subtitle_codec_id;
        break;
    case AVMEDIA_TYPE_DATA:
        if (s->data_codec_id)
            st->codecpar->codec_id = s->data_codec_id;
        break;
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
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].data_codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].subtitle_codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].audio_codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].video_codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 1;
          struct TYPE_7__ * st = (struct TYPE_7__ *) malloc(_len_st0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
              int _len_st__i0__codecpar0 = 1;
          st[_i0].codecpar = (struct TYPE_6__ *) malloc(_len_st__i0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_st__i0__codecpar0; _j0++) {
            st[_i0].codecpar->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].codecpar->codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          force_codec_ids(s,st);
          free(s);
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].codecpar);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
