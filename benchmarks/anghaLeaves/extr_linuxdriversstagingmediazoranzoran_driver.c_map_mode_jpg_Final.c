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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  num_buffers; int /*<<< orphan*/  buffer_size; } ;
struct zoran_fh {TYPE_1__ buffers; int /*<<< orphan*/  map_mode; } ;

/* Variables and functions */
 int /*<<< orphan*/  ZORAN_MAP_MODE_JPG_PLAY ; 
 int /*<<< orphan*/  ZORAN_MAP_MODE_JPG_REC ; 
 int /*<<< orphan*/  jpg_bufsize ; 
 int /*<<< orphan*/  jpg_nbufs ; 

__attribute__((used)) static void map_mode_jpg(struct zoran_fh *fh, int play)
{
	fh->map_mode = play ? ZORAN_MAP_MODE_JPG_PLAY : ZORAN_MAP_MODE_JPG_REC;
	fh->buffers.buffer_size = jpg_bufsize;
	fh->buffers.num_buffers = jpg_nbufs;
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
          int play = 100;
          int _len_fh0 = 1;
          struct zoran_fh * fh = (struct zoran_fh *) malloc(_len_fh0*sizeof(struct zoran_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
            fh[_i0].buffers.num_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
        fh[_i0].buffers.buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fh[_i0].map_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_mode_jpg(fh,play);
          free(fh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
