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

/* Type definitions */
struct dpages {int /*<<< orphan*/  context_bi; int /*<<< orphan*/  context_ptr; int /*<<< orphan*/  next_page; int /*<<< orphan*/  get_page; } ;
struct bio {int /*<<< orphan*/  bi_iter; int /*<<< orphan*/  bi_io_vec; } ;

/* Variables and functions */
 int /*<<< orphan*/  bio_get_page ; 
 int /*<<< orphan*/  bio_next_page ; 

__attribute__((used)) static void bio_dp_init(struct dpages *dp, struct bio *bio)
{
	dp->get_page = bio_get_page;
	dp->next_page = bio_next_page;

	/*
	 * We just use bvec iterator to retrieve pages, so it is ok to
	 * access the bvec table directly here
	 */
	dp->context_ptr = bio->bi_io_vec;
	dp->context_bi = bio->bi_iter;
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
          int _len_dp0 = 1;
          struct dpages * dp = (struct dpages *) malloc(_len_dp0*sizeof(struct dpages));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].context_bi = ((-2 * (next_i()%2)) + 1) * next_i();
        dp[_i0].context_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        dp[_i0].next_page = ((-2 * (next_i()%2)) + 1) * next_i();
        dp[_i0].get_page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_iter = ((-2 * (next_i()%2)) + 1) * next_i();
        bio[_i0].bi_io_vec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bio_dp_init(dp,bio);
          free(dp);
          free(bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
