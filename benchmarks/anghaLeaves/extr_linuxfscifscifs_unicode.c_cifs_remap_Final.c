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
struct cifs_sb_info {int mnt_cifs_flags; } ;

/* Variables and functions */
 int CIFS_MOUNT_MAP_SFM_CHR ; 
 int CIFS_MOUNT_MAP_SPECIAL_CHR ; 
 int NO_MAP_UNI_RSVD ; 
 int SFM_MAP_UNI_RSVD ; 
 int SFU_MAP_UNI_RSVD ; 

int cifs_remap(struct cifs_sb_info *cifs_sb)
{
	int map_type;

	if (cifs_sb->mnt_cifs_flags & CIFS_MOUNT_MAP_SFM_CHR)
		map_type = SFM_MAP_UNI_RSVD;
	else if (cifs_sb->mnt_cifs_flags & CIFS_MOUNT_MAP_SPECIAL_CHR)
		map_type = SFU_MAP_UNI_RSVD;
	else
		map_type = NO_MAP_UNI_RSVD;

	return map_type;
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
          int _len_cifs_sb0 = 1;
          struct cifs_sb_info * cifs_sb = (struct cifs_sb_info *) malloc(_len_cifs_sb0*sizeof(struct cifs_sb_info));
          for(int _i0 = 0; _i0 < _len_cifs_sb0; _i0++) {
            cifs_sb[_i0].mnt_cifs_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cifs_remap(cifs_sb);
          printf("%d\n", benchRet); 
          free(cifs_sb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cifs_sb0 = 100;
          struct cifs_sb_info * cifs_sb = (struct cifs_sb_info *) malloc(_len_cifs_sb0*sizeof(struct cifs_sb_info));
          for(int _i0 = 0; _i0 < _len_cifs_sb0; _i0++) {
            cifs_sb[_i0].mnt_cifs_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cifs_remap(cifs_sb);
          printf("%d\n", benchRet); 
          free(cifs_sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
