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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct ib_sge {scalar_t__ length; int /*<<< orphan*/  lkey; int /*<<< orphan*/  addr; } ;
struct bnxt_qplib_sge {scalar_t__ size; int /*<<< orphan*/  lkey; int /*<<< orphan*/  addr; } ;

/* Variables and functions */

__attribute__((used)) static int bnxt_re_build_sgl(struct ib_sge *ib_sg_list,
			     struct bnxt_qplib_sge *sg_list, int num)
{
	int i, total = 0;

	for (i = 0; i < num; i++) {
		sg_list[i].addr = ib_sg_list[i].addr;
		sg_list[i].lkey = ib_sg_list[i].lkey;
		sg_list[i].size = ib_sg_list[i].length;
		total += sg_list[i].size;
	}
	return total;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int num = 255;
        
          int _len_ib_sg_list0 = 65025;
          struct ib_sge * ib_sg_list = (struct ib_sge *) malloc(_len_ib_sg_list0*sizeof(struct ib_sge));
          for(int _i0 = 0; _i0 < _len_ib_sg_list0; _i0++) {
              ib_sg_list[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          ib_sg_list[_i0].lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          ib_sg_list[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sg_list0 = 65025;
          struct bnxt_qplib_sge * sg_list = (struct bnxt_qplib_sge *) malloc(_len_sg_list0*sizeof(struct bnxt_qplib_sge));
          for(int _i0 = 0; _i0 < _len_sg_list0; _i0++) {
              sg_list[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_list[_i0].lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_list[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bnxt_re_build_sgl(ib_sg_list,sg_list,num);
          printf("%d\n", benchRet); 
          free(ib_sg_list);
          free(sg_list);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int num = 10;
        
          int _len_ib_sg_list0 = 100;
          struct ib_sge * ib_sg_list = (struct ib_sge *) malloc(_len_ib_sg_list0*sizeof(struct ib_sge));
          for(int _i0 = 0; _i0 < _len_ib_sg_list0; _i0++) {
              ib_sg_list[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          ib_sg_list[_i0].lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          ib_sg_list[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sg_list0 = 100;
          struct bnxt_qplib_sge * sg_list = (struct bnxt_qplib_sge *) malloc(_len_sg_list0*sizeof(struct bnxt_qplib_sge));
          for(int _i0 = 0; _i0 < _len_sg_list0; _i0++) {
              sg_list[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_list[_i0].lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_list[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bnxt_re_build_sgl(ib_sg_list,sg_list,num);
          printf("%d\n", benchRet); 
          free(ib_sg_list);
          free(sg_list);
        
        break;
    }
    // empty
    case 2:
    {
          int num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ib_sg_list0 = 1;
          struct ib_sge * ib_sg_list = (struct ib_sge *) malloc(_len_ib_sg_list0*sizeof(struct ib_sge));
          for(int _i0 = 0; _i0 < _len_ib_sg_list0; _i0++) {
              ib_sg_list[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          ib_sg_list[_i0].lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          ib_sg_list[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sg_list0 = 1;
          struct bnxt_qplib_sge * sg_list = (struct bnxt_qplib_sge *) malloc(_len_sg_list0*sizeof(struct bnxt_qplib_sge));
          for(int _i0 = 0; _i0 < _len_sg_list0; _i0++) {
              sg_list[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_list[_i0].lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_list[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bnxt_re_build_sgl(ib_sg_list,sg_list,num);
          printf("%d\n", benchRet); 
          free(ib_sg_list);
          free(sg_list);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
