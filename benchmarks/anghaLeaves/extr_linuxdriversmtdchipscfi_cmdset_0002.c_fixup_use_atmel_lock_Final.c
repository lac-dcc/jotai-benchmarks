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
struct mtd_info {int /*<<< orphan*/  flags; int /*<<< orphan*/  _unlock; int /*<<< orphan*/  _lock; } ;

/* Variables and functions */
 int /*<<< orphan*/  MTD_POWERUP_LOCK ; 
 int /*<<< orphan*/  cfi_atmel_lock ; 
 int /*<<< orphan*/  cfi_atmel_unlock ; 

__attribute__((used)) static void fixup_use_atmel_lock(struct mtd_info *mtd)
{
	mtd->_lock = cfi_atmel_lock;
	mtd->_unlock = cfi_atmel_unlock;
	mtd->flags |= MTD_POWERUP_LOCK;
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
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0]._unlock = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0]._lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fixup_use_atmel_lock(mtd);
          free(mtd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
