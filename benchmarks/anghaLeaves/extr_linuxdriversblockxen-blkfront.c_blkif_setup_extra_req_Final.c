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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint16_t ;
struct TYPE_3__ {int nr_segments; int /*<<< orphan*/  handle; scalar_t__ sector_number; } ;
struct TYPE_4__ {TYPE_1__ rw; } ;
struct blkif_request {int /*<<< orphan*/  operation; TYPE_2__ u; } ;

/* Variables and functions */
 int BLKIF_MAX_SEGMENTS_PER_REQUEST ; 
 int XEN_PAGE_SIZE ; 

__attribute__((used)) static void blkif_setup_extra_req(struct blkif_request *first,
				  struct blkif_request *second)
{
	uint16_t nr_segments = first->u.rw.nr_segments;

	/*
	 * The second request is only present when the first request uses
	 * all its segments. It's always the continuity of the first one.
	 */
	first->u.rw.nr_segments = BLKIF_MAX_SEGMENTS_PER_REQUEST;

	second->u.rw.nr_segments = nr_segments - BLKIF_MAX_SEGMENTS_PER_REQUEST;
	second->u.rw.sector_number = first->u.rw.sector_number +
		(BLKIF_MAX_SEGMENTS_PER_REQUEST * XEN_PAGE_SIZE) / 512;

	second->u.rw.handle = first->u.rw.handle;
	second->operation = first->operation;
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
          int _len_first0 = 1;
          struct blkif_request * first = (struct blkif_request *) malloc(_len_first0*sizeof(struct blkif_request));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0].operation = ((-2 * (next_i()%2)) + 1) * next_i();
        first[_i0].u.rw.nr_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        first[_i0].u.rw.handle = ((-2 * (next_i()%2)) + 1) * next_i();
        first[_i0].u.rw.sector_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_second0 = 1;
          struct blkif_request * second = (struct blkif_request *) malloc(_len_second0*sizeof(struct blkif_request));
          for(int _i0 = 0; _i0 < _len_second0; _i0++) {
            second[_i0].operation = ((-2 * (next_i()%2)) + 1) * next_i();
        second[_i0].u.rw.nr_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        second[_i0].u.rw.handle = ((-2 * (next_i()%2)) + 1) * next_i();
        second[_i0].u.rw.sector_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blkif_setup_extra_req(first,second);
          free(first);
          free(second);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
