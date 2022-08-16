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
struct nfs_server {int dummy; } ;
struct nfs4_threshold {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline bool
pnfs_use_threshold(struct nfs4_threshold **dst, struct nfs4_threshold *src,
		   struct nfs_server *nfss)
{
	return false;
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
          int _len_dst0 = 1;
          struct nfs4_threshold ** dst = (struct nfs4_threshold **) malloc(_len_dst0*sizeof(struct nfs4_threshold *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (struct nfs4_threshold *) malloc(_len_dst1*sizeof(struct nfs4_threshold));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src0 = 1;
          struct nfs4_threshold * src = (struct nfs4_threshold *) malloc(_len_src0*sizeof(struct nfs4_threshold));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nfss0 = 1;
          struct nfs_server * nfss = (struct nfs_server *) malloc(_len_nfss0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_nfss0; _i0++) {
            nfss[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pnfs_use_threshold(dst,src,nfss);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          free(src);
          free(nfss);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
