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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct TYPE_3__ {int pcm_wd_sz; } ;
struct TYPE_4__ {TYPE_1__ pcm_params; } ;
struct sst_byt_stream {TYPE_2__ request; } ;
struct sst_byt {int dummy; } ;

/* Variables and functions */

int sst_byt_stream_set_bits(struct sst_byt *byt, struct sst_byt_stream *stream,
			    int bits)
{
	stream->request.pcm_params.pcm_wd_sz = bits;
	return 0;
}

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
          int bits = 100;
        
          int _len_byt0 = 1;
          struct sst_byt * byt = (struct sst_byt *) malloc(_len_byt0*sizeof(struct sst_byt));
          for(int _i0 = 0; _i0 < _len_byt0; _i0++) {
              byt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_stream0 = 1;
          struct sst_byt_stream * stream = (struct sst_byt_stream *) malloc(_len_stream0*sizeof(struct sst_byt_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].request.pcm_params.pcm_wd_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = sst_byt_stream_set_bits(byt,stream,bits);
          printf("%d\n", benchRet); 
          free(byt);
          free(stream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bits = 255;
        
          int _len_byt0 = 65025;
          struct sst_byt * byt = (struct sst_byt *) malloc(_len_byt0*sizeof(struct sst_byt));
          for(int _i0 = 0; _i0 < _len_byt0; _i0++) {
              byt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_stream0 = 65025;
          struct sst_byt_stream * stream = (struct sst_byt_stream *) malloc(_len_stream0*sizeof(struct sst_byt_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].request.pcm_params.pcm_wd_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = sst_byt_stream_set_bits(byt,stream,bits);
          printf("%d\n", benchRet); 
          free(byt);
          free(stream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bits = 10;
        
          int _len_byt0 = 100;
          struct sst_byt * byt = (struct sst_byt *) malloc(_len_byt0*sizeof(struct sst_byt));
          for(int _i0 = 0; _i0 < _len_byt0; _i0++) {
              byt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_stream0 = 100;
          struct sst_byt_stream * stream = (struct sst_byt_stream *) malloc(_len_stream0*sizeof(struct sst_byt_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].request.pcm_params.pcm_wd_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = sst_byt_stream_set_bits(byt,stream,bits);
          printf("%d\n", benchRet); 
          free(byt);
          free(stream);
        
        break;
    }
    // empty
    case 3:
    {
          int bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_byt0 = 1;
          struct sst_byt * byt = (struct sst_byt *) malloc(_len_byt0*sizeof(struct sst_byt));
          for(int _i0 = 0; _i0 < _len_byt0; _i0++) {
              byt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_stream0 = 1;
          struct sst_byt_stream * stream = (struct sst_byt_stream *) malloc(_len_stream0*sizeof(struct sst_byt_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].request.pcm_params.pcm_wd_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = sst_byt_stream_set_bits(byt,stream,bits);
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
