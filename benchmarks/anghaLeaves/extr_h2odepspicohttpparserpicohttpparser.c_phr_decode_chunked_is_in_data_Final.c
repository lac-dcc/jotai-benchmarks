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
       1            big-arr-10x\n\
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
struct phr_chunked_decoder {scalar_t__ _state; } ;

/* Variables and functions */
 scalar_t__ CHUNKED_IN_CHUNK_DATA ; 

int phr_decode_chunked_is_in_data(struct phr_chunked_decoder *decoder)
{
    return decoder->_state == CHUNKED_IN_CHUNK_DATA;
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
          int _len_decoder0 = 1;
          struct phr_chunked_decoder * decoder = (struct phr_chunked_decoder *) malloc(_len_decoder0*sizeof(struct phr_chunked_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0]._state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phr_decode_chunked_is_in_data(decoder);
          printf("%d\n", benchRet); 
          free(decoder);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_decoder0 = 100;
          struct phr_chunked_decoder * decoder = (struct phr_chunked_decoder *) malloc(_len_decoder0*sizeof(struct phr_chunked_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0]._state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phr_decode_chunked_is_in_data(decoder);
          printf("%d\n", benchRet); 
          free(decoder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
