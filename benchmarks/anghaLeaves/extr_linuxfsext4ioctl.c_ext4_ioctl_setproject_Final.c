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
       1            big-arr-10x\n\
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
struct file {int dummy; } ;
typedef  scalar_t__ __u32 ;

/* Variables and functions */
 int EOPNOTSUPP ; 
 scalar_t__ EXT4_DEF_PROJID ; 

__attribute__((used)) static int ext4_ioctl_setproject(struct file *filp, __u32 projid)
{
	if (projid != EXT4_DEF_PROJID)
		return -EOPNOTSUPP;
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
          long projid = 100;
          int _len_filp0 = 1;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext4_ioctl_setproject(filp,projid);
          printf("%d\n", benchRet); 
          free(filp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long projid = 10;
          int _len_filp0 = 100;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext4_ioctl_setproject(filp,projid);
          printf("%d\n", benchRet); 
          free(filp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
