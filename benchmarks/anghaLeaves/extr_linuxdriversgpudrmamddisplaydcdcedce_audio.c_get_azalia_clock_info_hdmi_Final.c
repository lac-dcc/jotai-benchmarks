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
typedef  int uint32_t ;
struct azalia_clock_info {int audio_dto_phase; int audio_dto_module; } ;

/* Variables and functions */

__attribute__((used)) static void get_azalia_clock_info_hdmi(
	uint32_t crtc_pixel_clock_in_khz,
	uint32_t actual_pixel_clock_in_khz,
	struct azalia_clock_info *azalia_clock_info)
{
	/* audio_dto_phase= 24 * 10,000;
	 *   24MHz in [100Hz] units */
	azalia_clock_info->audio_dto_phase =
			24 * 10000;

	/* audio_dto_module = PCLKFrequency * 10,000;
	 *  [khz] -> [100Hz] */
	azalia_clock_info->audio_dto_module =
			actual_pixel_clock_in_khz * 10;
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
          int crtc_pixel_clock_in_khz = 100;
          int actual_pixel_clock_in_khz = 100;
          int _len_azalia_clock_info0 = 1;
          struct azalia_clock_info * azalia_clock_info = (struct azalia_clock_info *) malloc(_len_azalia_clock_info0*sizeof(struct azalia_clock_info));
          for(int _i0 = 0; _i0 < _len_azalia_clock_info0; _i0++) {
            azalia_clock_info[_i0].audio_dto_phase = ((-2 * (next_i()%2)) + 1) * next_i();
        azalia_clock_info[_i0].audio_dto_module = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_azalia_clock_info_hdmi(crtc_pixel_clock_in_khz,actual_pixel_clock_in_khz,azalia_clock_info);
          free(azalia_clock_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
