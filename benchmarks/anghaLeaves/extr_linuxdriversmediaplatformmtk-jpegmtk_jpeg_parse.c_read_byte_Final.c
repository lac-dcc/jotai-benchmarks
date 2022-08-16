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
struct mtk_jpeg_stream {scalar_t__ curr; scalar_t__ size; int* addr; } ;

/* Variables and functions */

__attribute__((used)) static int read_byte(struct mtk_jpeg_stream *stream)
{
	if (stream->curr >= stream->size)
		return -1;
	return stream->addr[stream->curr++];
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
          int _len_stream0 = 1;
          struct mtk_jpeg_stream * stream = (struct mtk_jpeg_stream *) malloc(_len_stream0*sizeof(struct mtk_jpeg_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].curr = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__addr0 = 1;
          stream[_i0].addr = (int *) malloc(_len_stream__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream__i0__addr0; _j0++) {
            stream[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = read_byte(stream);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].addr);
          }
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
