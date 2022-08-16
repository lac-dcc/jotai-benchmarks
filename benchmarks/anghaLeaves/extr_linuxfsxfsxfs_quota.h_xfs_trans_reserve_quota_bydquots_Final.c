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
typedef  int /*<<< orphan*/  uint ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int xfs_trans_reserve_quota_bydquots(struct xfs_trans *tp,
		struct xfs_mount *mp, struct xfs_dquot *udqp,
		struct xfs_dquot *gdqp, struct xfs_dquot *pdqp,
		long nblks, long nions, uint flags)
{
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
          long nblks = 100;
          long nions = 100;
          int flags = 100;
          int _len_tp0 = 1;
          struct xfs_trans * tp = (struct xfs_trans *) malloc(_len_tp0*sizeof(struct xfs_trans));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mp0 = 1;
          struct xfs_mount * mp = (struct xfs_mount *) malloc(_len_mp0*sizeof(struct xfs_mount));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udqp0 = 1;
          struct xfs_dquot * udqp = (struct xfs_dquot *) malloc(_len_udqp0*sizeof(struct xfs_dquot));
          for(int _i0 = 0; _i0 < _len_udqp0; _i0++) {
            udqp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gdqp0 = 1;
          struct xfs_dquot * gdqp = (struct xfs_dquot *) malloc(_len_gdqp0*sizeof(struct xfs_dquot));
          for(int _i0 = 0; _i0 < _len_gdqp0; _i0++) {
            gdqp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdqp0 = 1;
          struct xfs_dquot * pdqp = (struct xfs_dquot *) malloc(_len_pdqp0*sizeof(struct xfs_dquot));
          for(int _i0 = 0; _i0 < _len_pdqp0; _i0++) {
            pdqp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfs_trans_reserve_quota_bydquots(tp,mp,udqp,gdqp,pdqp,nblks,nions,flags);
          printf("%d\n", benchRet); 
          free(tp);
          free(mp);
          free(udqp);
          free(gdqp);
          free(pdqp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
