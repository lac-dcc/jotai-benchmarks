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
typedef  TYPE_2__* mount_t ;
struct TYPE_5__ {TYPE_1__* mnt_vtable; } ;
struct TYPE_4__ {int vfc_vfsflags; } ;

/* Variables and functions */
 int VFC_VFS64BITREADY ; 

int
vfs_64bitready(mount_t mp)
{
	if ((mp->mnt_vtable->vfc_vfsflags & VFC_VFS64BITREADY))
		return(1);
	else
		return(0);
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
              int _len_mp__i0__mnt_vtable0 = 1;
          mp[_i0].mnt_vtable = (struct TYPE_4__ *) malloc(_len_mp__i0__mnt_vtable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mp__i0__mnt_vtable0; _j0++) {
            mp[_i0].mnt_vtable->vfc_vfsflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vfs_64bitready(mp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].mnt_vtable);
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
