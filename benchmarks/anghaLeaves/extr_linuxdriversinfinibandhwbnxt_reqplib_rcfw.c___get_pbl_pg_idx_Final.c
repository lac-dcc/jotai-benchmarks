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
struct bnxt_qplib_pbl {scalar_t__ pg_size; } ;

/* Variables and functions */
 int CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_1G ; 
 int CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_2M ; 
 int CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_4K ; 
 int CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_64K ; 
 int CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_8K ; 
 int CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_8M ; 
 scalar_t__ ROCE_PG_SIZE_1G ; 
 scalar_t__ ROCE_PG_SIZE_2M ; 
 scalar_t__ ROCE_PG_SIZE_4K ; 
 scalar_t__ ROCE_PG_SIZE_64K ; 
 scalar_t__ ROCE_PG_SIZE_8K ; 
 scalar_t__ ROCE_PG_SIZE_8M ; 

__attribute__((used)) static int __get_pbl_pg_idx(struct bnxt_qplib_pbl *pbl)
{
	return (pbl->pg_size == ROCE_PG_SIZE_4K ?
				      CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_4K :
		pbl->pg_size == ROCE_PG_SIZE_8K ?
				      CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_8K :
		pbl->pg_size == ROCE_PG_SIZE_64K ?
				      CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_64K :
		pbl->pg_size == ROCE_PG_SIZE_2M ?
				      CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_2M :
		pbl->pg_size == ROCE_PG_SIZE_8M ?
				      CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_8M :
		pbl->pg_size == ROCE_PG_SIZE_1G ?
				      CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_1G :
				      CMDQ_INITIALIZE_FW_QPC_PG_SIZE_PG_4K);
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
          int _len_pbl0 = 1;
          struct bnxt_qplib_pbl * pbl = (struct bnxt_qplib_pbl *) malloc(_len_pbl0*sizeof(struct bnxt_qplib_pbl));
          for(int _i0 = 0; _i0 < _len_pbl0; _i0++) {
            pbl[_i0].pg_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __get_pbl_pg_idx(pbl);
          printf("%d\n", benchRet); 
          free(pbl);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pbl0 = 100;
          struct bnxt_qplib_pbl * pbl = (struct bnxt_qplib_pbl *) malloc(_len_pbl0*sizeof(struct bnxt_qplib_pbl));
          for(int _i0 = 0; _i0 < _len_pbl0; _i0++) {
            pbl[_i0].pg_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __get_pbl_pg_idx(pbl);
          printf("%d\n", benchRet); 
          free(pbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
