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
typedef  int /*<<< orphan*/  u16 ;
struct tc_cls_flower_offload {int dummy; } ;
struct bnxt {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static inline int bnxt_tc_setup_flower(struct bnxt *bp, u16 src_fid,
				       struct tc_cls_flower_offload *cls_flower)
{
	return -EOPNOTSUPP;
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
          int src_fid = 100;
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cls_flower0 = 1;
          struct tc_cls_flower_offload * cls_flower = (struct tc_cls_flower_offload *) malloc(_len_cls_flower0*sizeof(struct tc_cls_flower_offload));
          for(int _i0 = 0; _i0 < _len_cls_flower0; _i0++) {
            cls_flower[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnxt_tc_setup_flower(bp,src_fid,cls_flower);
          printf("%d\n", benchRet); 
          free(bp);
          free(cls_flower);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
