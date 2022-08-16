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
typedef  int uint32_t ;
struct TYPE_3__ {int range; int code; } ;
typedef  TYPE_1__ RangeCoder ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 

__attribute__((used)) static int get_freq(RangeCoder *rc, uint32_t total_freq, uint32_t *freq)
{
    if (total_freq == 0)
        return AVERROR_INVALIDDATA;

    rc->range = rc->range / total_freq;

    if (rc->range == 0)
        return AVERROR_INVALIDDATA;

    *freq = rc->code / rc->range;

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
          int total_freq = 100;
          int _len_rc0 = 1;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_freq0 = 1;
          int * freq = (int *) malloc(_len_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freq0; _i0++) {
            freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_freq(rc,total_freq,freq);
          printf("%d\n", benchRet); 
          free(rc);
          free(freq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
