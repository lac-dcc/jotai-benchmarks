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
typedef  int u32 ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
 int FATTR4_WORD0_FS_LOCATIONS ; 
 int FATTR4_WORD0_RDATTR_ERROR ; 
 int NFSERR_MOVED ; 
 int WORD0_ABSENT_FS_ATTRS ; 
 int WORD1_ABSENT_FS_ATTRS ; 
 int WORD2_ABSENT_FS_ATTRS ; 
 int /*<<< orphan*/  nfserr_moved ; 

__attribute__((used)) static __be32 fattr_handle_absent_fs(u32 *bmval0, u32 *bmval1, u32 *bmval2, u32 *rdattr_err)
{
	/* As per referral draft:  */
	if (*bmval0 & ~WORD0_ABSENT_FS_ATTRS ||
	    *bmval1 & ~WORD1_ABSENT_FS_ATTRS) {
		if (*bmval0 & FATTR4_WORD0_RDATTR_ERROR ||
	            *bmval0 & FATTR4_WORD0_FS_LOCATIONS)
			*rdattr_err = NFSERR_MOVED;
		else
			return nfserr_moved;
	}
	*bmval0 &= WORD0_ABSENT_FS_ATTRS;
	*bmval1 &= WORD1_ABSENT_FS_ATTRS;
	*bmval2 &= WORD2_ABSENT_FS_ATTRS;
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
          int _len_bmval00 = 1;
          int * bmval0 = (int *) malloc(_len_bmval00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bmval00; _i0++) {
            bmval0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bmval10 = 1;
          int * bmval1 = (int *) malloc(_len_bmval10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bmval10; _i0++) {
            bmval1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bmval20 = 1;
          int * bmval2 = (int *) malloc(_len_bmval20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bmval20; _i0++) {
            bmval2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdattr_err0 = 1;
          int * rdattr_err = (int *) malloc(_len_rdattr_err0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rdattr_err0; _i0++) {
            rdattr_err[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fattr_handle_absent_fs(bmval0,bmval1,bmval2,rdattr_err);
          printf("%d\n", benchRet); 
          free(bmval0);
          free(bmval1);
          free(bmval2);
          free(rdattr_err);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
