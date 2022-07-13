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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  uint64_t ;
typedef  int /*<<< orphan*/  grant_status_t ;

/* Variables and functions */
 int ENOSYS ; 

int arch_gnttab_map_status(uint64_t *frames, unsigned long nr_gframes,
			   unsigned long max_nr_gframes,
			   grant_status_t **__shared)
{
	return -ENOSYS;
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
          unsigned long nr_gframes = 100;
          unsigned long max_nr_gframes = 100;
          int _len_frames0 = 1;
          int * frames = (int *) malloc(_len_frames0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frames0; _i0++) {
            frames[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len___shared0 = 1;
          int ** __shared = (int **) malloc(_len___shared0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len___shared0; _i0++) {
            int _len___shared1 = 1;
            __shared[_i0] = (int *) malloc(_len___shared1*sizeof(int));
            for(int _i1 = 0; _i1 < _len___shared1; _i1++) {
              __shared[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = arch_gnttab_map_status(frames,nr_gframes,max_nr_gframes,__shared);
          printf("%d\n", benchRet); 
          free(frames);
          for(int i1 = 0; i1 < _len___shared0; i1++) {
            int _len___shared1 = 1;
              free(__shared[i1]);
          }
          free(__shared);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long nr_gframes = 255;
          unsigned long max_nr_gframes = 255;
          int _len_frames0 = 65025;
          int * frames = (int *) malloc(_len_frames0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frames0; _i0++) {
            frames[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len___shared0 = 65025;
          int ** __shared = (int **) malloc(_len___shared0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len___shared0; _i0++) {
            int _len___shared1 = 1;
            __shared[_i0] = (int *) malloc(_len___shared1*sizeof(int));
            for(int _i1 = 0; _i1 < _len___shared1; _i1++) {
              __shared[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = arch_gnttab_map_status(frames,nr_gframes,max_nr_gframes,__shared);
          printf("%d\n", benchRet); 
          free(frames);
          for(int i1 = 0; i1 < _len___shared0; i1++) {
            int _len___shared1 = 1;
              free(__shared[i1]);
          }
          free(__shared);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long nr_gframes = 10;
          unsigned long max_nr_gframes = 10;
          int _len_frames0 = 100;
          int * frames = (int *) malloc(_len_frames0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frames0; _i0++) {
            frames[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len___shared0 = 100;
          int ** __shared = (int **) malloc(_len___shared0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len___shared0; _i0++) {
            int _len___shared1 = 1;
            __shared[_i0] = (int *) malloc(_len___shared1*sizeof(int));
            for(int _i1 = 0; _i1 < _len___shared1; _i1++) {
              __shared[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = arch_gnttab_map_status(frames,nr_gframes,max_nr_gframes,__shared);
          printf("%d\n", benchRet); 
          free(frames);
          for(int i1 = 0; i1 < _len___shared0; i1++) {
            int _len___shared1 = 1;
              free(__shared[i1]);
          }
          free(__shared);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
