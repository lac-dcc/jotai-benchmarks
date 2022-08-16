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
struct TYPE_4__ {int is_ssd; int /*<<< orphan*/  enabled; } ;
struct _disk_conditioner_info_t {TYPE_1__ dcinfo; } ;
typedef  TYPE_2__* mount_t ;
typedef  int boolean_t ;
struct TYPE_5__ {int mnt_kern_flag; struct _disk_conditioner_info_t* mnt_disk_conditioner_info; } ;

/* Variables and functions */
 int MNTK_SSD ; 

boolean_t
disk_conditioner_mount_is_ssd(mount_t mp)
{
	struct _disk_conditioner_info_t *internal_info = mp->mnt_disk_conditioner_info;

	if (!internal_info || !internal_info->dcinfo.enabled) {
		return !!(mp->mnt_kern_flag & MNTK_SSD);
	}

	return internal_info->dcinfo.is_ssd;
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
          int _len_mp0 = 1;
          struct TYPE_5__ * mp = (struct TYPE_5__ *) malloc(_len_mp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mnt_kern_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mp__i0__mnt_disk_conditioner_info0 = 1;
          mp[_i0].mnt_disk_conditioner_info = (struct _disk_conditioner_info_t *) malloc(_len_mp__i0__mnt_disk_conditioner_info0*sizeof(struct _disk_conditioner_info_t));
          for(int _j0 = 0; _j0 < _len_mp__i0__mnt_disk_conditioner_info0; _j0++) {
            mp[_i0].mnt_disk_conditioner_info->dcinfo.is_ssd = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_disk_conditioner_info->dcinfo.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = disk_conditioner_mount_is_ssd(mp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].mnt_disk_conditioner_info);
          }
          free(mp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
