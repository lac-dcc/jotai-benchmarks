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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int codec_type; int str_type; int operation; int time_slots; } ;
struct TYPE_4__ {TYPE_1__ str_type; } ;
struct sst_byt_stream {TYPE_2__ request; } ;
struct sst_byt {int dummy; } ;

/* Variables and functions */

int sst_byt_stream_type(struct sst_byt *byt, struct sst_byt_stream *stream,
			int codec_type, int stream_type, int operation)
{
	stream->request.str_type.codec_type = codec_type;
	stream->request.str_type.str_type = stream_type;
	stream->request.str_type.operation = operation;
	stream->request.str_type.time_slots = 0xc;

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
          int codec_type = 100;
          int stream_type = 100;
          int operation = 100;
          int _len_byt0 = 1;
          struct sst_byt * byt = (struct sst_byt *) malloc(_len_byt0*sizeof(struct sst_byt));
          for(int _i0 = 0; _i0 < _len_byt0; _i0++) {
            byt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stream0 = 1;
          struct sst_byt_stream * stream = (struct sst_byt_stream *) malloc(_len_stream0*sizeof(struct sst_byt_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].request.str_type.codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].request.str_type.str_type = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].request.str_type.operation = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].request.str_type.time_slots = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sst_byt_stream_type(byt,stream,codec_type,stream_type,operation);
          printf("%d\n", benchRet); 
          free(byt);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
