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
struct urb {int transfer_buffer_length; unsigned char* transfer_buffer; } ;
struct snd_line6_pcm {unsigned char* prev_fbuf; scalar_t__ impulse_count; unsigned char impulse_volume; scalar_t__ impulse_period; } ;

/* Variables and functions */

__attribute__((used)) static void create_impulse_test_signal(struct snd_line6_pcm *line6pcm,
				       struct urb *urb_out, int bytes_per_frame)
{
	int frames = urb_out->transfer_buffer_length / bytes_per_frame;

	if (bytes_per_frame == 4) {
		int i;
		short *pi = (short *)line6pcm->prev_fbuf;
		short *po = (short *)urb_out->transfer_buffer;

		for (i = 0; i < frames; ++i) {
			po[0] = pi[0];
			po[1] = 0;
			pi += 2;
			po += 2;
		}
	} else if (bytes_per_frame == 6) {
		int i, j;
		unsigned char *pi = line6pcm->prev_fbuf;
		unsigned char *po = urb_out->transfer_buffer;

		for (i = 0; i < frames; ++i) {
			for (j = 0; j < bytes_per_frame / 2; ++j)
				po[j] = pi[j];

			for (; j < bytes_per_frame; ++j)
				po[j] = 0;

			pi += bytes_per_frame;
			po += bytes_per_frame;
		}
	}
	if (--line6pcm->impulse_count <= 0) {
		((unsigned char *)(urb_out->transfer_buffer))[bytes_per_frame -
							      1] =
		    line6pcm->impulse_volume;
		line6pcm->impulse_count = line6pcm->impulse_period;
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
          int bytes_per_frame = 100;
          int _len_line6pcm0 = 1;
          struct snd_line6_pcm * line6pcm = (struct snd_line6_pcm *) malloc(_len_line6pcm0*sizeof(struct snd_line6_pcm));
          for(int _i0 = 0; _i0 < _len_line6pcm0; _i0++) {
              int _len_line6pcm__i0__prev_fbuf0 = 1;
          line6pcm[_i0].prev_fbuf = (unsigned char *) malloc(_len_line6pcm__i0__prev_fbuf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_line6pcm__i0__prev_fbuf0; _j0++) {
            line6pcm[_i0].prev_fbuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        line6pcm[_i0].impulse_count = ((-2 * (next_i()%2)) + 1) * next_i();
        line6pcm[_i0].impulse_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        line6pcm[_i0].impulse_period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb_out0 = 1;
          struct urb * urb_out = (struct urb *) malloc(_len_urb_out0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb_out0; _i0++) {
            urb_out[_i0].transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_urb_out__i0__transfer_buffer0 = 1;
          urb_out[_i0].transfer_buffer = (unsigned char *) malloc(_len_urb_out__i0__transfer_buffer0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_urb_out__i0__transfer_buffer0; _j0++) {
            urb_out[_i0].transfer_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          create_impulse_test_signal(line6pcm,urb_out,bytes_per_frame);
          for(int _aux = 0; _aux < _len_line6pcm0; _aux++) {
          free(line6pcm[_aux].prev_fbuf);
          }
          free(line6pcm);
          for(int _aux = 0; _aux < _len_urb_out0; _aux++) {
          free(urb_out[_aux].transfer_buffer);
          }
          free(urb_out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bytes_per_frame = 255;
          int _len_line6pcm0 = 65025;
          struct snd_line6_pcm * line6pcm = (struct snd_line6_pcm *) malloc(_len_line6pcm0*sizeof(struct snd_line6_pcm));
          for(int _i0 = 0; _i0 < _len_line6pcm0; _i0++) {
              int _len_line6pcm__i0__prev_fbuf0 = 1;
          line6pcm[_i0].prev_fbuf = (unsigned char *) malloc(_len_line6pcm__i0__prev_fbuf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_line6pcm__i0__prev_fbuf0; _j0++) {
            line6pcm[_i0].prev_fbuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        line6pcm[_i0].impulse_count = ((-2 * (next_i()%2)) + 1) * next_i();
        line6pcm[_i0].impulse_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        line6pcm[_i0].impulse_period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb_out0 = 65025;
          struct urb * urb_out = (struct urb *) malloc(_len_urb_out0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb_out0; _i0++) {
            urb_out[_i0].transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_urb_out__i0__transfer_buffer0 = 1;
          urb_out[_i0].transfer_buffer = (unsigned char *) malloc(_len_urb_out__i0__transfer_buffer0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_urb_out__i0__transfer_buffer0; _j0++) {
            urb_out[_i0].transfer_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          create_impulse_test_signal(line6pcm,urb_out,bytes_per_frame);
          for(int _aux = 0; _aux < _len_line6pcm0; _aux++) {
          free(line6pcm[_aux].prev_fbuf);
          }
          free(line6pcm);
          for(int _aux = 0; _aux < _len_urb_out0; _aux++) {
          free(urb_out[_aux].transfer_buffer);
          }
          free(urb_out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bytes_per_frame = 10;
          int _len_line6pcm0 = 100;
          struct snd_line6_pcm * line6pcm = (struct snd_line6_pcm *) malloc(_len_line6pcm0*sizeof(struct snd_line6_pcm));
          for(int _i0 = 0; _i0 < _len_line6pcm0; _i0++) {
              int _len_line6pcm__i0__prev_fbuf0 = 1;
          line6pcm[_i0].prev_fbuf = (unsigned char *) malloc(_len_line6pcm__i0__prev_fbuf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_line6pcm__i0__prev_fbuf0; _j0++) {
            line6pcm[_i0].prev_fbuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        line6pcm[_i0].impulse_count = ((-2 * (next_i()%2)) + 1) * next_i();
        line6pcm[_i0].impulse_volume = ((-2 * (next_i()%2)) + 1) * next_i();
        line6pcm[_i0].impulse_period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb_out0 = 100;
          struct urb * urb_out = (struct urb *) malloc(_len_urb_out0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb_out0; _i0++) {
            urb_out[_i0].transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_urb_out__i0__transfer_buffer0 = 1;
          urb_out[_i0].transfer_buffer = (unsigned char *) malloc(_len_urb_out__i0__transfer_buffer0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_urb_out__i0__transfer_buffer0; _j0++) {
            urb_out[_i0].transfer_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          create_impulse_test_signal(line6pcm,urb_out,bytes_per_frame);
          for(int _aux = 0; _aux < _len_line6pcm0; _aux++) {
          free(line6pcm[_aux].prev_fbuf);
          }
          free(line6pcm);
          for(int _aux = 0; _aux < _len_urb_out0; _aux++) {
          free(urb_out[_aux].transfer_buffer);
          }
          free(urb_out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
