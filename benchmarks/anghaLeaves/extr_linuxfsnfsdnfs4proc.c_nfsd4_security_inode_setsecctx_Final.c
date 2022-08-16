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
typedef  int /*<<< orphan*/  u32 ;
struct xdr_netobj {int dummy; } ;
struct svc_fh {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void
nfsd4_security_inode_setsecctx(struct svc_fh *resfh, struct xdr_netobj *label, u32 *bmval)
{ }


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
          int _len_resfh0 = 1;
          struct svc_fh * resfh = (struct svc_fh *) malloc(_len_resfh0*sizeof(struct svc_fh));
          for(int _i0 = 0; _i0 < _len_resfh0; _i0++) {
            resfh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_label0 = 1;
          struct xdr_netobj * label = (struct xdr_netobj *) malloc(_len_label0*sizeof(struct xdr_netobj));
          for(int _i0 = 0; _i0 < _len_label0; _i0++) {
            label[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bmval0 = 1;
          int * bmval = (int *) malloc(_len_bmval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bmval0; _i0++) {
            bmval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfsd4_security_inode_setsecctx(resfh,label,bmval);
          free(resfh);
          free(label);
          free(bmval);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
