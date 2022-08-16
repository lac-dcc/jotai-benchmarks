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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ opts_max_size; TYPE_1__* file; } ;
typedef  TYPE_2__ git_diff_file_content ;
struct TYPE_4__ {int flags; scalar_t__ size; } ;

/* Variables and functions */
 int DIFF_FLAGS_KNOWN_BINARY ; 
 int GIT_DIFF_FLAG_BINARY ; 

__attribute__((used)) static bool diff_file_content_binary_by_size(git_diff_file_content *fc)
{
	/* if we have diff opts, check max_size vs file size */
	if ((fc->file->flags & DIFF_FLAGS_KNOWN_BINARY) == 0 &&
		fc->opts_max_size > 0 &&
		fc->file->size > fc->opts_max_size)
		fc->file->flags |= GIT_DIFF_FLAG_BINARY;

	return ((fc->file->flags & GIT_DIFF_FLAG_BINARY) != 0);
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
          int _len_fc0 = 1;
          struct TYPE_5__ * fc = (struct TYPE_5__ *) malloc(_len_fc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
            fc[_i0].opts_max_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fc__i0__file0 = 1;
          fc[_i0].file = (struct TYPE_4__ *) malloc(_len_fc__i0__file0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fc__i0__file0; _j0++) {
            fc[_i0].file->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fc[_i0].file->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = diff_file_content_binary_by_size(fc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fc0; _aux++) {
          free(fc[_aux].file);
          }
          free(fc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
