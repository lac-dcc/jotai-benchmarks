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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct file_lock {int fl_type; TYPE_1__* fl_file; } ;
struct TYPE_2__ {int f_mode; } ;

/* Variables and functions */
 int EBADF ; 
 int FMODE_READ ; 
 int FMODE_WRITE ; 
#define  F_RDLCK 129 
#define  F_WRLCK 128 

__attribute__((used)) static int
check_fmode_for_setlk(struct file_lock *fl)
{
	switch (fl->fl_type) {
	case F_RDLCK:
		if (!(fl->fl_file->f_mode & FMODE_READ))
			return -EBADF;
		break;
	case F_WRLCK:
		if (!(fl->fl_file->f_mode & FMODE_WRITE))
			return -EBADF;
	}
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
          int _len_fl0 = 1;
          struct file_lock * fl = (struct file_lock *) malloc(_len_fl0*sizeof(struct file_lock));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
            fl[_i0].fl_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fl__i0__fl_file0 = 1;
          fl[_i0].fl_file = (struct TYPE_2__ *) malloc(_len_fl__i0__fl_file0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fl__i0__fl_file0; _j0++) {
            fl[_i0].fl_file->f_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_fmode_for_setlk(fl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fl0; _aux++) {
          free(fl[_aux].fl_file);
          }
          free(fl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
