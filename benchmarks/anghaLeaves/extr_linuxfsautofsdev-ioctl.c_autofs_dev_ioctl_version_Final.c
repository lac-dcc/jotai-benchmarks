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
struct file {int dummy; } ;
struct autofs_sb_info {int dummy; } ;
struct autofs_dev_ioctl {int /*<<< orphan*/  ver_minor; int /*<<< orphan*/  ver_major; } ;

/* Variables and functions */
 int /*<<< orphan*/  AUTOFS_DEV_IOCTL_VERSION_MAJOR ; 
 int /*<<< orphan*/  AUTOFS_DEV_IOCTL_VERSION_MINOR ; 

__attribute__((used)) static int autofs_dev_ioctl_version(struct file *fp,
				    struct autofs_sb_info *sbi,
				    struct autofs_dev_ioctl *param)
{
	/* This should have already been set. */
	param->ver_major = AUTOFS_DEV_IOCTL_VERSION_MAJOR;
	param->ver_minor = AUTOFS_DEV_IOCTL_VERSION_MINOR;
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
          int _len_fp0 = 1;
          struct file * fp = (struct file *) malloc(_len_fp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 1;
          struct autofs_sb_info * sbi = (struct autofs_sb_info *) malloc(_len_sbi0*sizeof(struct autofs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param0 = 1;
          struct autofs_dev_ioctl * param = (struct autofs_dev_ioctl *) malloc(_len_param0*sizeof(struct autofs_dev_ioctl));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].ver_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].ver_major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = autofs_dev_ioctl_version(fp,sbi,param);
          printf("%d\n", benchRet); 
          free(fp);
          free(sbi);
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
