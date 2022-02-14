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
struct dk_cxlflash_release {int /*<<< orphan*/  context_id; int /*<<< orphan*/  hdr; } ;
struct dk_cxlflash_clone {int /*<<< orphan*/  context_id_dst; int /*<<< orphan*/  hdr; } ;

/* Variables and functions */

__attribute__((used)) static void marshal_clone_to_rele(struct dk_cxlflash_clone *clone,
				  struct dk_cxlflash_release *release)
{
	release->hdr = clone->hdr;
	release->context_id = clone->context_id_dst;
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
          int _len_clone0 = 1;
          struct dk_cxlflash_clone * clone = (struct dk_cxlflash_clone *) malloc(_len_clone0*sizeof(struct dk_cxlflash_clone));
          for(int _i0 = 0; _i0 < _len_clone0; _i0++) {
            clone->context_id_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        clone->hdr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_release0 = 1;
          struct dk_cxlflash_release * release = (struct dk_cxlflash_release *) malloc(_len_release0*sizeof(struct dk_cxlflash_release));
          for(int _i0 = 0; _i0 < _len_release0; _i0++) {
            release->context_id = ((-2 * (next_i()%2)) + 1) * next_i();
        release->hdr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          marshal_clone_to_rele(clone,release);
          free(clone);
          free(release);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
