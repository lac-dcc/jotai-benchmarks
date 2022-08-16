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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int inpos; int inlen; int outpos; int outlen; int /*<<< orphan*/ * in; int /*<<< orphan*/ * out; void* error; } ;
typedef  TYPE_1__ lzo_stream ;

/* Variables and functions */
 void* TRUE ; 

__attribute__((used)) static void lzo_copy(lzo_stream* stream, int len) {
    if (stream->inpos + len > stream->inlen) {
        stream->error = TRUE;
        return;
    }

    if (stream->outpos + len > stream->outlen) {
        stream->error = TRUE;
        return;
    }

    do {
        stream->out[stream->outpos] = stream->in[stream->inpos];
        stream->inpos++;
        stream->outpos++;
        len--;
    } while (len > 0);
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
          int len = 100;
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].inpos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].inlen = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].outpos = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].outlen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__in0 = 1;
          stream[_i0].in = (int *) malloc(_len_stream__i0__in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream__i0__in0; _j0++) {
            stream[_i0].in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stream__i0__out0 = 1;
          stream[_i0].out = (int *) malloc(_len_stream__i0__out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stream__i0__out0; _j0++) {
            stream[_i0].out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lzo_copy(stream,len);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].in);
          }
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].out);
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
