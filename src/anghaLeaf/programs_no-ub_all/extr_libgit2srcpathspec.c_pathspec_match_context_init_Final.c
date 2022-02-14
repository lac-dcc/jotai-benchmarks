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

/* Type definitions */
struct pathspec_match_context {int fnmatch_flags; int /*<<< orphan*/  strncomp; int /*<<< orphan*/  strcomp; } ;

/* Variables and functions */
 int FNM_CASEFOLD ; 
 int /*<<< orphan*/  git__strcasecmp ; 
 int /*<<< orphan*/  git__strcmp ; 
 int /*<<< orphan*/  git__strncasecmp ; 
 int /*<<< orphan*/  git__strncmp ; 

__attribute__((used)) static void pathspec_match_context_init(
	struct pathspec_match_context *ctxt,
	bool disable_fnmatch,
	bool casefold)
{
	if (disable_fnmatch)
		ctxt->fnmatch_flags = -1;
	else if (casefold)
		ctxt->fnmatch_flags = FNM_CASEFOLD;
	else
		ctxt->fnmatch_flags = 0;

	if (casefold) {
		ctxt->strcomp  = git__strcasecmp;
		ctxt->strncomp = git__strncasecmp;
	} else {
		ctxt->strcomp  = git__strcmp;
		ctxt->strncomp = git__strncmp;
	}
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
          int disable_fnmatch = 255;
          int casefold = 255;
          int _len_ctxt0 = 1;
          struct pathspec_match_context * ctxt = (struct pathspec_match_context *) malloc(_len_ctxt0*sizeof(struct pathspec_match_context));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt->fnmatch_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ctxt->strncomp = ((-2 * (next_i()%2)) + 1) * next_i();
        ctxt->strcomp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pathspec_match_context_init(ctxt,disable_fnmatch,casefold);
          free(ctxt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
