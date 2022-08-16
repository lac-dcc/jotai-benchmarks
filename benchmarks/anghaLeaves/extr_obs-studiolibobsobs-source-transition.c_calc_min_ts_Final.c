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
typedef  scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ audio_ts; int /*<<< orphan*/  audio_pending; } ;
typedef  TYPE_1__ obs_source_t ;

/* Variables and functions */

__attribute__((used)) static inline uint64_t calc_min_ts(obs_source_t *sources[2])
{
	uint64_t min_ts = 0;

	for (size_t i = 0; i < 2; i++) {
		if (sources[i] && !sources[i]->audio_pending) {
			if (!min_ts || sources[i]->audio_ts < min_ts)
				min_ts = sources[i]->audio_ts;
		}
	}

	return min_ts;
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
          int _len_sources0 = 2;
          struct TYPE_3__ ** sources = (struct TYPE_3__ **) malloc(_len_sources0*sizeof(struct TYPE_3__ *));
          for(int _i0 = 0; _i0 < _len_sources0; _i0++) {
            int _len_sources1 = 1;
            sources[_i0] = (struct TYPE_3__ *) malloc(_len_sources1*sizeof(struct TYPE_3__));
            for(int _i1 = 0; _i1 < _len_sources1; _i1++) {
              sources[_i0][_i1].audio_ts = ((-2 * (next_i()%2)) + 1) * next_i();
        sources[_i0][_i1].audio_pending = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = calc_min_ts(sources);
          printf("%ld\n", benchRet); 
          for(int i1 = 0; i1 < _len_sources0; i1++) {
            int _len_sources1 = 1;
              free(sources[i1]);
          }
          free(sources);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
