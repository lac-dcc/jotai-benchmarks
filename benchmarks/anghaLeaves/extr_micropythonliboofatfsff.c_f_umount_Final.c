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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ fs_type; } ;
typedef  int /*<<< orphan*/  FRESULT ;
typedef  TYPE_1__ FATFS ;

/* Variables and functions */
 int /*<<< orphan*/  FR_OK ; 

FRESULT f_umount (
    FATFS* fs                   /* Pointer to the file system object to unmount */
)
{
#if FF_FS_LOCK
    clear_lock(fs);
#endif
#if FF_FS_REENTRANT             /* Discard sync object of the current volume */
    if (!ff_del_syncobj(fs->sobj)) return FR_INT_ERR;
#endif
    fs->fs_type = 0;            /* Clear old fs object */

    return FR_OK;
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
          int _len_fs0 = 1;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].fs_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = f_umount(fs);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fs0 = 100;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].fs_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = f_umount(fs);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
