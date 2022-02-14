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
       0            big-arr\n\
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
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int flags; } ;
struct TYPE_12__ {TYPE_2__ opts; } ;
typedef  TYPE_4__ git_status_list ;
struct TYPE_9__ {scalar_t__ mode; } ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_13__ {scalar_t__ status; TYPE_1__ new_file; TYPE_3__ old_file; } ;
typedef  TYPE_5__ git_diff_delta ;

/* Variables and functions */
 scalar_t__ GIT_DELTA_ADDED ; 
 scalar_t__ GIT_DELTA_DELETED ; 
 scalar_t__ GIT_FILEMODE_COMMIT ; 
 int GIT_STATUS_OPT_EXCLUDE_SUBMODULES ; 

__attribute__((used)) static bool status_is_included(
	git_status_list *status,
	git_diff_delta *head2idx,
	git_diff_delta *idx2wd)
{
	if (!(status->opts.flags & GIT_STATUS_OPT_EXCLUDE_SUBMODULES))
		return 1;

	/* if excluding submodules and this is a submodule everywhere */
	if (head2idx) {
		if (head2idx->status != GIT_DELTA_ADDED &&
			head2idx->old_file.mode != GIT_FILEMODE_COMMIT)
			return 1;
		if (head2idx->status != GIT_DELTA_DELETED &&
			head2idx->new_file.mode != GIT_FILEMODE_COMMIT)
			return 1;
	}
	if (idx2wd) {
		if (idx2wd->status != GIT_DELTA_ADDED &&
			idx2wd->old_file.mode != GIT_FILEMODE_COMMIT)
			return 1;
		if (idx2wd->status != GIT_DELTA_DELETED &&
			idx2wd->new_file.mode != GIT_FILEMODE_COMMIT)
			return 1;
	}

	/* only get here if every valid mode is GIT_FILEMODE_COMMIT */
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

    // big-arr
    case 0:
    {
          int _len_status0 = 1;
          struct TYPE_12__ * status = (struct TYPE_12__ *) malloc(_len_status0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status->opts.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_head2idx0 = 1;
          struct TYPE_13__ * head2idx = (struct TYPE_13__ *) malloc(_len_head2idx0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_head2idx0; _i0++) {
            head2idx->status = ((-2 * (next_i()%2)) + 1) * next_i();
        head2idx->new_file.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        head2idx->old_file.mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_idx2wd0 = 1;
          struct TYPE_13__ * idx2wd = (struct TYPE_13__ *) malloc(_len_idx2wd0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_idx2wd0; _i0++) {
            idx2wd->status = ((-2 * (next_i()%2)) + 1) * next_i();
        idx2wd->new_file.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        idx2wd->old_file.mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = status_is_included(status,head2idx,idx2wd);
          printf("%d\n", benchRet); 
          free(status);
          free(head2idx);
          free(idx2wd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
