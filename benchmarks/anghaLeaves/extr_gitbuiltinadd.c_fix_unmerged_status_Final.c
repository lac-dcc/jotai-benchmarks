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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct update_callback_data {int flags; } ;
struct diff_filepair {scalar_t__ status; TYPE_1__* two; } ;
struct TYPE_2__ {int /*<<< orphan*/  mode; } ;

/* Variables and functions */
 int ADD_CACHE_IGNORE_REMOVAL ; 
 int DIFF_STATUS_DELETED ; 
 int DIFF_STATUS_MODIFIED ; 
 scalar_t__ DIFF_STATUS_UNMERGED ; 

__attribute__((used)) static int fix_unmerged_status(struct diff_filepair *p,
			       struct update_callback_data *data)
{
	if (p->status != DIFF_STATUS_UNMERGED)
		return p->status;
	if (!(data->flags & ADD_CACHE_IGNORE_REMOVAL) && !p->two->mode)
		/*
		 * This is not an explicit add request, and the
		 * path is missing from the working tree (deleted)
		 */
		return DIFF_STATUS_DELETED;
	else
		/*
		 * Either an explicit add request, or path exists
		 * in the working tree.  An attempt to explicitly
		 * add a path that does not exist in the working tree
		 * will be caught as an error by the caller immediately.
		 */
		return DIFF_STATUS_MODIFIED;
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
          int _len_p0 = 1;
          struct diff_filepair * p = (struct diff_filepair *) malloc(_len_p0*sizeof(struct diff_filepair));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__two0 = 1;
          p[_i0].two = (struct TYPE_2__ *) malloc(_len_p__i0__two0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__two0; _j0++) {
            p[_i0].two->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 1;
          struct update_callback_data * data = (struct update_callback_data *) malloc(_len_data0*sizeof(struct update_callback_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fix_unmerged_status(p,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].two);
          }
          free(p);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
