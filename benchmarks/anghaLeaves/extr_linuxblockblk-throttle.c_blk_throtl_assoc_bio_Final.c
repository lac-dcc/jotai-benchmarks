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
struct throtl_grp {int dummy; } ;
struct bio {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void blk_throtl_assoc_bio(struct throtl_grp *tg, struct bio *bio)
{
#ifdef CONFIG_BLK_DEV_THROTTLING_LOW
	/* fallback to root_blkg if we fail to get a blkg ref */
	if (bio->bi_css && (bio_associate_blkg(bio, tg_to_blkg(tg)) == -ENODEV))
		bio_associate_blkg(bio, bio->bi_disk->queue->root_blkg);
	bio_issue_init(&bio->bi_issue, bio_sectors(bio));
#endif
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
          int _len_tg0 = 1;
          struct throtl_grp * tg = (struct throtl_grp *) malloc(_len_tg0*sizeof(struct throtl_grp));
          for(int _i0 = 0; _i0 < _len_tg0; _i0++) {
            tg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_throtl_assoc_bio(tg,bio);
          free(tg);
          free(bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
