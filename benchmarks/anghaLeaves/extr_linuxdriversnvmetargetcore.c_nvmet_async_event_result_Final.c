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
typedef  int u32 ;
struct nvmet_async_event {int event_type; int event_info; int log_page; } ;

/* Variables and functions */

__attribute__((used)) static u32 nvmet_async_event_result(struct nvmet_async_event *aen)
{
	return aen->event_type | (aen->event_info << 8) | (aen->log_page << 16);
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
          int _len_aen0 = 1;
          struct nvmet_async_event * aen = (struct nvmet_async_event *) malloc(_len_aen0*sizeof(struct nvmet_async_event));
          for(int _i0 = 0; _i0 < _len_aen0; _i0++) {
            aen[_i0].event_type = ((-2 * (next_i()%2)) + 1) * next_i();
        aen[_i0].event_info = ((-2 * (next_i()%2)) + 1) * next_i();
        aen[_i0].log_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvmet_async_event_result(aen);
          printf("%d\n", benchRet); 
          free(aen);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_aen0 = 65025;
          struct nvmet_async_event * aen = (struct nvmet_async_event *) malloc(_len_aen0*sizeof(struct nvmet_async_event));
          for(int _i0 = 0; _i0 < _len_aen0; _i0++) {
            aen[_i0].event_type = ((-2 * (next_i()%2)) + 1) * next_i();
        aen[_i0].event_info = ((-2 * (next_i()%2)) + 1) * next_i();
        aen[_i0].log_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvmet_async_event_result(aen);
          printf("%d\n", benchRet); 
          free(aen);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_aen0 = 100;
          struct nvmet_async_event * aen = (struct nvmet_async_event *) malloc(_len_aen0*sizeof(struct nvmet_async_event));
          for(int _i0 = 0; _i0 < _len_aen0; _i0++) {
            aen[_i0].event_type = ((-2 * (next_i()%2)) + 1) * next_i();
        aen[_i0].event_info = ((-2 * (next_i()%2)) + 1) * next_i();
        aen[_i0].log_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvmet_async_event_result(aen);
          printf("%d\n", benchRet); 
          free(aen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
