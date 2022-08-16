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
struct file_lock {int fl_flags; int fl_type; } ;

/* Variables and functions */
 int FL_DOWNGRADE_PENDING ; 
 int FL_UNLOCK_PENDING ; 
 int F_RDLCK ; 
 int F_UNLCK ; 

__attribute__((used)) static int target_leasetype(struct file_lock *fl)
{
	if (fl->fl_flags & FL_UNLOCK_PENDING)
		return F_UNLCK;
	if (fl->fl_flags & FL_DOWNGRADE_PENDING)
		return F_RDLCK;
	return fl->fl_type;
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
          int _len_fl0 = 1;
          struct file_lock * fl = (struct file_lock *) malloc(_len_fl0*sizeof(struct file_lock));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
            fl[_i0].fl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fl[_i0].fl_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = target_leasetype(fl);
          printf("%d\n", benchRet); 
          free(fl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
