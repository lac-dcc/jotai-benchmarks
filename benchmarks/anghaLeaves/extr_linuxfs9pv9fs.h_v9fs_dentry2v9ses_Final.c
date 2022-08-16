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
struct v9fs_session_info {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct v9fs_session_info* s_fs_info; } ;

/* Variables and functions */

__attribute__((used)) static inline struct v9fs_session_info *v9fs_dentry2v9ses(struct dentry *dentry)
{
	return dentry->d_sb->s_fs_info;
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
          int _len_dentry0 = 1;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
              int _len_dentry__i0__d_sb0 = 1;
          dentry[_i0].d_sb = (struct TYPE_2__ *) malloc(_len_dentry__i0__d_sb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_sb0; _j0++) {
              int _len_dentry__i0__d_sb_s_fs_info0 = 1;
          dentry[_i0].d_sb->s_fs_info = (struct v9fs_session_info *) malloc(_len_dentry__i0__d_sb_s_fs_info0*sizeof(struct v9fs_session_info));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_sb_s_fs_info0; _j0++) {
            dentry[_i0].d_sb->s_fs_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct v9fs_session_info * benchRet = v9fs_dentry2v9ses(dentry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dentry0; _aux++) {
          free(dentry[_aux].d_sb);
          }
          free(dentry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
