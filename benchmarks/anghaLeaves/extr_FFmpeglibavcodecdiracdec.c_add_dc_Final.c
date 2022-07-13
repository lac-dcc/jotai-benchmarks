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
       0            big-arr-10x\n\
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
typedef  int uint8_t ;
typedef  int uint16_t ;

/* Variables and functions */
 int /*<<< orphan*/  MAX_BLOCKSIZE ; 

__attribute__((used)) static void add_dc(uint16_t *dst, int dc, int stride,
                   uint8_t *obmc_weight, int xblen, int yblen)
{
    int x, y;
    dc += 128;

    for (y = 0; y < yblen; y++) {
        for (x = 0; x < xblen; x += 2) {
            dst[x  ] += dc * obmc_weight[x  ];
            dst[x+1] += dc * obmc_weight[x+1];
        }
        dst          += stride;
        obmc_weight  += MAX_BLOCKSIZE;
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

    // big-arr-10x
    case 0:
    {
          int dc = 10;
          int stride = 10;
          int xblen = 10;
          int yblen = 10;
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obmc_weight0 = 100;
          int * obmc_weight = (int *) malloc(_len_obmc_weight0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_obmc_weight0; _i0++) {
            obmc_weight[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_dc(dst,dc,stride,obmc_weight,xblen,yblen);
          free(dst);
          free(obmc_weight);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
