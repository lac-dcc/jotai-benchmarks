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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int pos; scalar_t__ end; } ;
typedef  TYPE_1__ R_STREAM_FILE ;

/* Variables and functions */

void stream_file_seek(R_STREAM_FILE *stream_file, int offset, int whence) {
	switch (whence) {
	case 0:
		stream_file->pos = offset;
		break;
	case 1:
		stream_file->pos += offset;
		break;
	case 2:
		stream_file->pos = stream_file->end + offset;
		break;
	default:
		break;
	}
	if (stream_file->pos < 0) {
		stream_file->pos = 0;
	}
	if (stream_file->pos > stream_file->end) {
		stream_file->pos = stream_file->end;
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
          int offset = 100;
          int whence = 100;
          int _len_stream_file0 = 1;
          struct TYPE_3__ * stream_file = (struct TYPE_3__ *) malloc(_len_stream_file0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream_file0; _i0++) {
            stream_file[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream_file_seek(stream_file,offset,whence);
          free(stream_file);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int whence = 255;
          int _len_stream_file0 = 65025;
          struct TYPE_3__ * stream_file = (struct TYPE_3__ *) malloc(_len_stream_file0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream_file0; _i0++) {
            stream_file[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream_file_seek(stream_file,offset,whence);
          free(stream_file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int whence = 10;
          int _len_stream_file0 = 100;
          struct TYPE_3__ * stream_file = (struct TYPE_3__ *) malloc(_len_stream_file0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream_file0; _i0++) {
            stream_file[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream_file[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream_file_seek(stream_file,offset,whence);
          free(stream_file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
