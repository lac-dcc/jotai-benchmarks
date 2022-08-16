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
typedef  scalar_t__ u32 ;
struct superblock_security_struct {char flags; } ;

/* Variables and functions */
 char SE_MNTMASK ; 
 int SE_SBINITIALIZED ; 

__attribute__((used)) static int bad_option(struct superblock_security_struct *sbsec, char flag,
		      u32 old_sid, u32 new_sid)
{
	char mnt_flags = sbsec->flags & SE_MNTMASK;

	/* check if the old mount command had the same options */
	if (sbsec->flags & SE_SBINITIALIZED)
		if (!(sbsec->flags & flag) ||
		    (old_sid != new_sid))
			return 1;

	/* check if we were passed the same options twice,
	 * aka someone passed context=a,context=b
	 */
	if (!(sbsec->flags & SE_SBINITIALIZED))
		if (mnt_flags & flag)
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
          char flag = 100;
          long old_sid = 100;
          long new_sid = 100;
          int _len_sbsec0 = 1;
          struct superblock_security_struct * sbsec = (struct superblock_security_struct *) malloc(_len_sbsec0*sizeof(struct superblock_security_struct));
          for(int _i0 = 0; _i0 < _len_sbsec0; _i0++) {
            sbsec[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bad_option(sbsec,flag,old_sid,new_sid);
          printf("%d\n", benchRet); 
          free(sbsec);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          char flag = 10;
          long old_sid = 10;
          long new_sid = 10;
          int _len_sbsec0 = 100;
          struct superblock_security_struct * sbsec = (struct superblock_security_struct *) malloc(_len_sbsec0*sizeof(struct superblock_security_struct));
          for(int _i0 = 0; _i0 < _len_sbsec0; _i0++) {
            sbsec[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bad_option(sbsec,flag,old_sid,new_sid);
          printf("%d\n", benchRet); 
          free(sbsec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
