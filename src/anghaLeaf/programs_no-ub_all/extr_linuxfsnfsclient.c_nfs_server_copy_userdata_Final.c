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
struct nfs_server {int /*<<< orphan*/  port; int /*<<< orphan*/  auth_info; int /*<<< orphan*/  options; int /*<<< orphan*/  caps; int /*<<< orphan*/  acdirmax; int /*<<< orphan*/  acdirmin; int /*<<< orphan*/  acregmax; int /*<<< orphan*/  acregmin; int /*<<< orphan*/  wsize; int /*<<< orphan*/  rsize; int /*<<< orphan*/  flags; } ;

/* Variables and functions */

void nfs_server_copy_userdata(struct nfs_server *target, struct nfs_server *source)
{
	target->flags = source->flags;
	target->rsize = source->rsize;
	target->wsize = source->wsize;
	target->acregmin = source->acregmin;
	target->acregmax = source->acregmax;
	target->acdirmin = source->acdirmin;
	target->acdirmax = source->acdirmax;
	target->caps = source->caps;
	target->options = source->options;
	target->auth_info = source->auth_info;
	target->port = source->port;
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
          int _len_target0 = 1;
          struct nfs_server * target = (struct nfs_server *) malloc(_len_target0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target->port = ((-2 * (next_i()%2)) + 1) * next_i();
        target->auth_info = ((-2 * (next_i()%2)) + 1) * next_i();
        target->options = ((-2 * (next_i()%2)) + 1) * next_i();
        target->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        target->acdirmax = ((-2 * (next_i()%2)) + 1) * next_i();
        target->acdirmin = ((-2 * (next_i()%2)) + 1) * next_i();
        target->acregmax = ((-2 * (next_i()%2)) + 1) * next_i();
        target->acregmin = ((-2 * (next_i()%2)) + 1) * next_i();
        target->wsize = ((-2 * (next_i()%2)) + 1) * next_i();
        target->rsize = ((-2 * (next_i()%2)) + 1) * next_i();
        target->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_source0 = 1;
          struct nfs_server * source = (struct nfs_server *) malloc(_len_source0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source->port = ((-2 * (next_i()%2)) + 1) * next_i();
        source->auth_info = ((-2 * (next_i()%2)) + 1) * next_i();
        source->options = ((-2 * (next_i()%2)) + 1) * next_i();
        source->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        source->acdirmax = ((-2 * (next_i()%2)) + 1) * next_i();
        source->acdirmin = ((-2 * (next_i()%2)) + 1) * next_i();
        source->acregmax = ((-2 * (next_i()%2)) + 1) * next_i();
        source->acregmin = ((-2 * (next_i()%2)) + 1) * next_i();
        source->wsize = ((-2 * (next_i()%2)) + 1) * next_i();
        source->rsize = ((-2 * (next_i()%2)) + 1) * next_i();
        source->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_server_copy_userdata(target,source);
          free(target);
          free(source);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
