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
struct TYPE_3__ {int /*<<< orphan*/  flex_ratio_max; int /*<<< orphan*/  flex_ratio_min; int /*<<< orphan*/  flex_ratio; int /*<<< orphan*/  busFreq; int /*<<< orphan*/  bus2tsc; int /*<<< orphan*/  tscGranularity; int /*<<< orphan*/  tscFCvtn2t; int /*<<< orphan*/  tscFCvtt2n; int /*<<< orphan*/  tscFreq; int /*<<< orphan*/  busFCvtn2t; int /*<<< orphan*/  busFCvtt2n; } ;
typedef  TYPE_1__ tscInfo_t ;

/* Variables and functions */
 int /*<<< orphan*/  bus2tsc ; 
 int /*<<< orphan*/  busFCvtn2t ; 
 int /*<<< orphan*/  busFCvtt2n ; 
 int /*<<< orphan*/  busFreq ; 
 int /*<<< orphan*/  flex_ratio ; 
 int /*<<< orphan*/  flex_ratio_max ; 
 int /*<<< orphan*/  flex_ratio_min ; 
 int /*<<< orphan*/  tscFCvtn2t ; 
 int /*<<< orphan*/  tscFCvtt2n ; 
 int /*<<< orphan*/  tscFreq ; 
 int /*<<< orphan*/  tscGranularity ; 

void
tsc_get_info(tscInfo_t *info)
{
	info->busFCvtt2n     = busFCvtt2n;
	info->busFCvtn2t     = busFCvtn2t;
	info->tscFreq        = tscFreq;
	info->tscFCvtt2n     = tscFCvtt2n;
	info->tscFCvtn2t     = tscFCvtn2t;
	info->tscGranularity = tscGranularity;
	info->bus2tsc        = bus2tsc;
	info->busFreq        = busFreq;
	info->flex_ratio     = flex_ratio;
	info->flex_ratio_min = flex_ratio_min;
	info->flex_ratio_max = flex_ratio_max;
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
          int _len_info0 = 1;
          struct TYPE_3__ * info = (struct TYPE_3__ *) malloc(_len_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flex_ratio_max = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].flex_ratio_min = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].flex_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].busFreq = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].bus2tsc = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tscGranularity = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tscFCvtn2t = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tscFCvtt2n = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tscFreq = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].busFCvtn2t = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].busFCvtt2n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tsc_get_info(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
