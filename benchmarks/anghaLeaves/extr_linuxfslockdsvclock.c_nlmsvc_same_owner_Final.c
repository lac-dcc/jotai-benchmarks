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
struct file_lock {scalar_t__ fl_owner; scalar_t__ fl_pid; } ;

/* Variables and functions */

__attribute__((used)) static int nlmsvc_same_owner(struct file_lock *fl1, struct file_lock *fl2)
{
	return fl1->fl_owner == fl2->fl_owner && fl1->fl_pid == fl2->fl_pid;
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
          int _len_fl10 = 1;
          struct file_lock * fl1 = (struct file_lock *) malloc(_len_fl10*sizeof(struct file_lock));
          for(int _i0 = 0; _i0 < _len_fl10; _i0++) {
            fl1[_i0].fl_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].fl_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl20 = 1;
          struct file_lock * fl2 = (struct file_lock *) malloc(_len_fl20*sizeof(struct file_lock));
          for(int _i0 = 0; _i0 < _len_fl20; _i0++) {
            fl2[_i0].fl_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].fl_pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nlmsvc_same_owner(fl1,fl2);
          printf("%d\n", benchRet); 
          free(fl1);
          free(fl2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
