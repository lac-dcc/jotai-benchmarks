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

/* Type definitions */
struct obs_output {scalar_t__ highest_audio_ts; scalar_t__ highest_video_ts; } ;
struct encoder_packet {scalar_t__ type; scalar_t__ dts_usec; } ;

/* Variables and functions */
 scalar_t__ OBS_ENCODER_VIDEO ; 

__attribute__((used)) static inline bool has_higher_opposing_ts(struct obs_output *output,
		struct encoder_packet *packet)
{
	if (packet->type == OBS_ENCODER_VIDEO)
		return output->highest_audio_ts > packet->dts_usec;
	else
		return output->highest_video_ts > packet->dts_usec;
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
          int _len_output0 = 1;
          struct obs_output * output = (struct obs_output *) malloc(_len_output0*sizeof(struct obs_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].highest_audio_ts = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].highest_video_ts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet0 = 1;
          struct encoder_packet * packet = (struct encoder_packet *) malloc(_len_packet0*sizeof(struct encoder_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].dts_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = has_higher_opposing_ts(output,packet);
          printf("%d\n", benchRet); 
          free(output);
          free(packet);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_output0 = 65025;
          struct obs_output * output = (struct obs_output *) malloc(_len_output0*sizeof(struct obs_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].highest_audio_ts = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].highest_video_ts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet0 = 65025;
          struct encoder_packet * packet = (struct encoder_packet *) malloc(_len_packet0*sizeof(struct encoder_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].dts_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = has_higher_opposing_ts(output,packet);
          printf("%d\n", benchRet); 
          free(output);
          free(packet);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_output0 = 100;
          struct obs_output * output = (struct obs_output *) malloc(_len_output0*sizeof(struct obs_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0].highest_audio_ts = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].highest_video_ts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet0 = 100;
          struct encoder_packet * packet = (struct encoder_packet *) malloc(_len_packet0*sizeof(struct encoder_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].dts_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = has_higher_opposing_ts(output,packet);
          printf("%d\n", benchRet); 
          free(output);
          free(packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
