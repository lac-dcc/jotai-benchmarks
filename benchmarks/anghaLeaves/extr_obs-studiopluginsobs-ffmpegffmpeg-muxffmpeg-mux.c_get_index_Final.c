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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ffmpeg_mux {int num_audio_streams; TYPE_2__** audio_streams; TYPE_1__* video_stream; } ;
struct ffm_packet_info {scalar_t__ type; size_t index; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int id; } ;

/* Variables and functions */
 scalar_t__ FFM_PACKET_VIDEO ; 

__attribute__((used)) static inline int get_index(struct ffmpeg_mux *ffm,
		struct ffm_packet_info *info)
{
	if (info->type == FFM_PACKET_VIDEO) {
		if (ffm->video_stream) {
			return ffm->video_stream->id;
		}
	} else {
		if ((int)info->index < ffm->num_audio_streams) {
			return ffm->audio_streams[info->index]->id;
		}
	}

	return -1;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_ffm0 = 65025;
          struct ffmpeg_mux * ffm = (struct ffmpeg_mux *) malloc(_len_ffm0*sizeof(struct ffmpeg_mux));
          for(int _i0 = 0; _i0 < _len_ffm0; _i0++) {
              ffm[_i0].num_audio_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ffm__i0__audio_streams0 = 1;
          ffm[_i0].audio_streams = (struct TYPE_4__ **) malloc(_len_ffm__i0__audio_streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_ffm__i0__audio_streams0; _j0++) {
            int _len_ffm__i0__audio_streams1 = 1;
            ffm[_i0].audio_streams[_j0] = (struct TYPE_4__ *) malloc(_len_ffm__i0__audio_streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_ffm__i0__audio_streams1; _j1++) {
                ffm[_i0].audio_streams[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          int _len_ffm__i0__video_stream0 = 1;
          ffm[_i0].video_stream = (struct TYPE_3__ *) malloc(_len_ffm__i0__video_stream0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ffm__i0__video_stream0; _j0++) {
              ffm[_i0].video_stream->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_info0 = 65025;
          struct ffm_packet_info * info = (struct ffm_packet_info *) malloc(_len_info0*sizeof(struct ffm_packet_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_index(ffm,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ffm0; _aux++) {
          free(*(ffm[_aux].audio_streams));
        free(ffm[_aux].audio_streams);
          }
          for(int _aux = 0; _aux < _len_ffm0; _aux++) {
          free(ffm[_aux].video_stream);
          }
          free(ffm);
          free(info);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_ffm0 = 100;
          struct ffmpeg_mux * ffm = (struct ffmpeg_mux *) malloc(_len_ffm0*sizeof(struct ffmpeg_mux));
          for(int _i0 = 0; _i0 < _len_ffm0; _i0++) {
              ffm[_i0].num_audio_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ffm__i0__audio_streams0 = 1;
          ffm[_i0].audio_streams = (struct TYPE_4__ **) malloc(_len_ffm__i0__audio_streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_ffm__i0__audio_streams0; _j0++) {
            int _len_ffm__i0__audio_streams1 = 1;
            ffm[_i0].audio_streams[_j0] = (struct TYPE_4__ *) malloc(_len_ffm__i0__audio_streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_ffm__i0__audio_streams1; _j1++) {
                ffm[_i0].audio_streams[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          int _len_ffm__i0__video_stream0 = 1;
          ffm[_i0].video_stream = (struct TYPE_3__ *) malloc(_len_ffm__i0__video_stream0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ffm__i0__video_stream0; _j0++) {
              ffm[_i0].video_stream->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_info0 = 100;
          struct ffm_packet_info * info = (struct ffm_packet_info *) malloc(_len_info0*sizeof(struct ffm_packet_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_index(ffm,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ffm0; _aux++) {
          free(*(ffm[_aux].audio_streams));
        free(ffm[_aux].audio_streams);
          }
          for(int _aux = 0; _aux < _len_ffm0; _aux++) {
          free(ffm[_aux].video_stream);
          }
          free(ffm);
          free(info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_ffm0 = 1;
          struct ffmpeg_mux * ffm = (struct ffmpeg_mux *) malloc(_len_ffm0*sizeof(struct ffmpeg_mux));
          for(int _i0 = 0; _i0 < _len_ffm0; _i0++) {
              ffm[_i0].num_audio_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ffm__i0__audio_streams0 = 1;
          ffm[_i0].audio_streams = (struct TYPE_4__ **) malloc(_len_ffm__i0__audio_streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_ffm__i0__audio_streams0; _j0++) {
            int _len_ffm__i0__audio_streams1 = 1;
            ffm[_i0].audio_streams[_j0] = (struct TYPE_4__ *) malloc(_len_ffm__i0__audio_streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_ffm__i0__audio_streams1; _j1++) {
                ffm[_i0].audio_streams[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          int _len_ffm__i0__video_stream0 = 1;
          ffm[_i0].video_stream = (struct TYPE_3__ *) malloc(_len_ffm__i0__video_stream0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ffm__i0__video_stream0; _j0++) {
              ffm[_i0].video_stream->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_info0 = 1;
          struct ffm_packet_info * info = (struct ffm_packet_info *) malloc(_len_info0*sizeof(struct ffm_packet_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_index(ffm,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ffm0; _aux++) {
          free(*(ffm[_aux].audio_streams));
        free(ffm[_aux].audio_streams);
          }
          for(int _aux = 0; _aux < _len_ffm0; _aux++) {
          free(ffm[_aux].video_stream);
          }
          free(ffm);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
