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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct timeval {scalar_t__ tv_sec; } ;
typedef  scalar_t__ int32 ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ enable_deletion; scalar_t__ filled_entries; scalar_t__ max_fill_state; TYPE_1__ last_read; } ;
typedef  TYPE_2__ TME_DATA ;

/* Variables and functions */
 scalar_t__ DELTA_READ ; 
 scalar_t__ FALSE ; 
 scalar_t__ TRUE ; 

__attribute__((used)) static __inline int32 IS_DELETABLE(void *timestamp, TME_DATA *data)
{
	struct timeval *ts=(struct timeval*)timestamp;

	if (data->enable_deletion==FALSE)
		return FALSE;
	if (data->filled_entries<data->max_fill_state)
		return FALSE;
	if ((ts->tv_sec+DELTA_READ)<data->last_read.tv_sec)
		return TRUE;
	return FALSE;
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
          void * timestamp;
          int _len_data0 = 1;
          struct TYPE_5__ * data = (struct TYPE_5__ *) malloc(_len_data0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].enable_deletion = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].filled_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].max_fill_state = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].last_read.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = IS_DELETABLE(timestamp,data);
          printf("%ld\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * timestamp;
          int _len_data0 = 65025;
          struct TYPE_5__ * data = (struct TYPE_5__ *) malloc(_len_data0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].enable_deletion = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].filled_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].max_fill_state = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].last_read.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = IS_DELETABLE(timestamp,data);
          printf("%ld\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * timestamp;
          int _len_data0 = 100;
          struct TYPE_5__ * data = (struct TYPE_5__ *) malloc(_len_data0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].enable_deletion = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].filled_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].max_fill_state = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].last_read.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = IS_DELETABLE(timestamp,data);
          printf("%ld\n", benchRet); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
