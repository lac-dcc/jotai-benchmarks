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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_5__ {int output_flags; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef  TYPE_2__ obs_source_t ;

/* Variables and functions */
 int OBS_SOURCE_ASYNC ; 
 int OBS_SOURCE_AUDIO ; 
 int OBS_SOURCE_VIDEO ; 

__attribute__((used)) static bool filter_compatible(obs_source_t *source, obs_source_t *filter)
{
	uint32_t s_caps = source->info.output_flags;
	uint32_t f_caps = filter->info.output_flags;

	if ((f_caps & OBS_SOURCE_AUDIO) != 0 &&
	    (f_caps & OBS_SOURCE_VIDEO) == 0)
		f_caps &= ~OBS_SOURCE_ASYNC;

	return (s_caps & f_caps) == f_caps;
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
          int _len_source0 = 1;
          struct TYPE_6__ * source = (struct TYPE_6__ *) malloc(_len_source0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0].info.output_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filter0 = 1;
          struct TYPE_6__ * filter = (struct TYPE_6__ *) malloc(_len_filter0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].info.output_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = filter_compatible(source,filter);
          printf("%d\n", benchRet); 
          free(source);
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
