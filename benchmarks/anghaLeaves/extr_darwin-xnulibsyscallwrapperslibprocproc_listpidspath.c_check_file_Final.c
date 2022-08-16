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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct vinfo_stat {scalar_t__ vst_dev; scalar_t__ vst_ino; } ;
typedef  TYPE_2__* fdOpenInfoRef ;
struct TYPE_4__ {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_5__ {int flags; TYPE_1__ match_stat; } ;

/* Variables and functions */
 int PROC_LISTPIDSPATH_PATH_IS_VOLUME ; 

__attribute__((used)) static int
check_file(fdOpenInfoRef info, struct vinfo_stat *sb)
{
	if (sb->vst_dev == 0) {
		// if no info
		return 0;
	}

	if (sb->vst_dev != info->match_stat.st_dev) {
		// if not the requested filesystem
		return 0;
	}

	if (!(info->flags & PROC_LISTPIDSPATH_PATH_IS_VOLUME) &&
	    (sb->vst_ino != info->match_stat.st_ino)) {
		// if not the requested file
		return 0;
	}

	return 1;
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
          int _len_info0 = 1;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].match_stat.st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].match_stat.st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sb0 = 1;
          struct vinfo_stat * sb = (struct vinfo_stat *) malloc(_len_sb0*sizeof(struct vinfo_stat));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].vst_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].vst_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_file(info,sb);
          printf("%d\n", benchRet); 
          free(info);
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
