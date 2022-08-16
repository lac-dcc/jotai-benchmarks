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
struct writeback_control {scalar_t__ sync_mode; long nr_to_write; } ;
struct f2fs_sb_info {int dummy; } ;

/* Variables and functions */
 long BIO_MAX_PAGES ; 
 int NODE ; 
 scalar_t__ WB_SYNC_NONE ; 

__attribute__((used)) static inline long nr_pages_to_write(struct f2fs_sb_info *sbi, int type,
					struct writeback_control *wbc)
{
	long nr_to_write, desired;

	if (wbc->sync_mode != WB_SYNC_NONE)
		return 0;

	nr_to_write = wbc->nr_to_write;
	desired = BIO_MAX_PAGES;
	if (type == NODE)
		desired <<= 1;

	wbc->nr_to_write = desired;
	return desired - nr_to_write;
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
          int type = 100;
          int _len_sbi0 = 1;
          struct f2fs_sb_info * sbi = (struct f2fs_sb_info *) malloc(_len_sbi0*sizeof(struct f2fs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wbc0 = 1;
          struct writeback_control * wbc = (struct writeback_control *) malloc(_len_wbc0*sizeof(struct writeback_control));
          for(int _i0 = 0; _i0 < _len_wbc0; _i0++) {
            wbc[_i0].sync_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        wbc[_i0].nr_to_write = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = nr_pages_to_write(sbi,type,wbc);
          printf("%ld\n", benchRet); 
          free(sbi);
          free(wbc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
