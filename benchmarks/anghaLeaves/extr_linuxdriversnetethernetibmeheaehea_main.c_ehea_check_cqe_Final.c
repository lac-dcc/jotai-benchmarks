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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct ehea_cqe {int type; int status; scalar_t__ header_length; } ;

/* Variables and functions */
 int EHEA_CQE_STAT_ERR_MASK ; 
 int EHEA_CQE_STAT_ERR_TCP ; 
 int EHEA_CQE_TYPE_RQ ; 
 int EINVAL ; 

__attribute__((used)) static inline int ehea_check_cqe(struct ehea_cqe *cqe, int *rq_num)
{
	*rq_num = (cqe->type & EHEA_CQE_TYPE_RQ) >> 5;
	if ((cqe->status & EHEA_CQE_STAT_ERR_MASK) == 0)
		return 0;
	if (((cqe->status & EHEA_CQE_STAT_ERR_TCP) != 0) &&
	    (cqe->header_length == 0))
		return 0;
	return -EINVAL;
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
          int _len_cqe0 = 1;
          struct ehea_cqe * cqe = (struct ehea_cqe *) malloc(_len_cqe0*sizeof(struct ehea_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        cqe[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        cqe[_i0].header_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rq_num0 = 1;
          int * rq_num = (int *) malloc(_len_rq_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rq_num0; _i0++) {
            rq_num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ehea_check_cqe(cqe,rq_num);
          printf("%d\n", benchRet); 
          free(cqe);
          free(rq_num);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cqe0 = 65025;
          struct ehea_cqe * cqe = (struct ehea_cqe *) malloc(_len_cqe0*sizeof(struct ehea_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        cqe[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        cqe[_i0].header_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rq_num0 = 65025;
          int * rq_num = (int *) malloc(_len_rq_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rq_num0; _i0++) {
            rq_num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ehea_check_cqe(cqe,rq_num);
          printf("%d\n", benchRet); 
          free(cqe);
          free(rq_num);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cqe0 = 100;
          struct ehea_cqe * cqe = (struct ehea_cqe *) malloc(_len_cqe0*sizeof(struct ehea_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        cqe[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        cqe[_i0].header_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rq_num0 = 100;
          int * rq_num = (int *) malloc(_len_rq_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rq_num0; _i0++) {
            rq_num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ehea_check_cqe(cqe,rq_num);
          printf("%d\n", benchRet); 
          free(cqe);
          free(rq_num);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
