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
struct file_lock {scalar_t__ fl_type; } ;

/* Variables and functions */
 scalar_t__ F_WRLCK ; 

__attribute__((used)) static int locks_conflict(struct file_lock *caller_fl, struct file_lock *sys_fl)
{
	if (sys_fl->fl_type == F_WRLCK)
		return 1;
	if (caller_fl->fl_type == F_WRLCK)
		return 1;
	return 0;
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
          int _len_caller_fl0 = 1;
          struct file_lock * caller_fl = (struct file_lock *) malloc(_len_caller_fl0*sizeof(struct file_lock));
          for(int _i0 = 0; _i0 < _len_caller_fl0; _i0++) {
            caller_fl[_i0].fl_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sys_fl0 = 1;
          struct file_lock * sys_fl = (struct file_lock *) malloc(_len_sys_fl0*sizeof(struct file_lock));
          for(int _i0 = 0; _i0 < _len_sys_fl0; _i0++) {
            sys_fl[_i0].fl_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = locks_conflict(caller_fl,sys_fl);
          printf("%d\n", benchRet); 
          free(caller_fl);
          free(sys_fl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
