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
struct bstp_pri_vector {scalar_t__ pv_root_id; scalar_t__ pv_cost; scalar_t__ pv_dbridge_id; scalar_t__ pv_dport_id; } ;

/* Variables and functions */
 int INFO_BETTER ; 
 int INFO_SAME ; 
 int INFO_WORSE ; 

__attribute__((used)) static int
bstp_info_cmp(struct bstp_pri_vector *pv,
    struct bstp_pri_vector *cpv)
{
	if (cpv->pv_root_id < pv->pv_root_id)
		return (INFO_BETTER);
	if (cpv->pv_root_id > pv->pv_root_id)
		return (INFO_WORSE);

	if (cpv->pv_cost < pv->pv_cost)
		return (INFO_BETTER);
	if (cpv->pv_cost > pv->pv_cost)
		return (INFO_WORSE);

	if (cpv->pv_dbridge_id < pv->pv_dbridge_id)
		return (INFO_BETTER);
	if (cpv->pv_dbridge_id > pv->pv_dbridge_id)
		return (INFO_WORSE);

	if (cpv->pv_dport_id < pv->pv_dport_id)
		return (INFO_BETTER);
	if (cpv->pv_dport_id > pv->pv_dport_id)
		return (INFO_WORSE);

	return (INFO_SAME);
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
          int _len_pv0 = 1;
          struct bstp_pri_vector * pv = (struct bstp_pri_vector *) malloc(_len_pv0*sizeof(struct bstp_pri_vector));
          for(int _i0 = 0; _i0 < _len_pv0; _i0++) {
            pv[_i0].pv_root_id = ((-2 * (next_i()%2)) + 1) * next_i();
        pv[_i0].pv_cost = ((-2 * (next_i()%2)) + 1) * next_i();
        pv[_i0].pv_dbridge_id = ((-2 * (next_i()%2)) + 1) * next_i();
        pv[_i0].pv_dport_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpv0 = 1;
          struct bstp_pri_vector * cpv = (struct bstp_pri_vector *) malloc(_len_cpv0*sizeof(struct bstp_pri_vector));
          for(int _i0 = 0; _i0 < _len_cpv0; _i0++) {
            cpv[_i0].pv_root_id = ((-2 * (next_i()%2)) + 1) * next_i();
        cpv[_i0].pv_cost = ((-2 * (next_i()%2)) + 1) * next_i();
        cpv[_i0].pv_dbridge_id = ((-2 * (next_i()%2)) + 1) * next_i();
        cpv[_i0].pv_dport_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bstp_info_cmp(pv,cpv);
          printf("%d\n", benchRet); 
          free(pv);
          free(cpv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
