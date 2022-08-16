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
struct ib_udata {int dummy; } ;
struct ib_cq {int dummy; } ;

/* Variables and functions */
 int ENOSYS ; 

__attribute__((used)) static int iwch_resize_cq(struct ib_cq *cq, int cqe, struct ib_udata *udata)
{
#ifdef notyet
	struct iwch_cq *chp = to_iwch_cq(cq);
	struct t3_cq oldcq, newcq;
	int ret;

	pr_debug("%s ib_cq %p cqe %d\n", __func__, cq, cqe);

	/* We don't downsize... */
	if (cqe <= cq->cqe)
		return 0;

	/* create new t3_cq with new size */
	cqe = roundup_pow_of_two(cqe+1);
	newcq.size_log2 = ilog2(cqe);

	/* Dont allow resize to less than the current wce count */
	if (cqe < Q_COUNT(chp->cq.rptr, chp->cq.wptr)) {
		return -ENOMEM;
	}

	/* Quiesce all QPs using this CQ */
	ret = iwch_quiesce_qps(chp);
	if (ret) {
		return ret;
	}

	ret = cxio_create_cq(&chp->rhp->rdev, &newcq);
	if (ret) {
		return ret;
	}

	/* copy CQEs */
	memcpy(newcq.queue, chp->cq.queue, (1 << chp->cq.size_log2) *
				        sizeof(struct t3_cqe));

	/* old iwch_qp gets new t3_cq but keeps old cqid */
	oldcq = chp->cq;
	chp->cq = newcq;
	chp->cq.cqid = oldcq.cqid;

	/* resize new t3_cq to update the HW context */
	ret = cxio_resize_cq(&chp->rhp->rdev, &chp->cq);
	if (ret) {
		chp->cq = oldcq;
		return ret;
	}
	chp->ibcq.cqe = (1<<chp->cq.size_log2) - 1;

	/* destroy old t3_cq */
	oldcq.cqid = newcq.cqid;
	ret = cxio_destroy_cq(&chp->rhp->rdev, &oldcq);
	if (ret) {
		pr_err("%s - cxio_destroy_cq failed %d\n", __func__, ret);
	}

	/* add user hooks here */

	/* resume qps */
	ret = iwch_resume_qps(chp);
	return ret;
#else
	return -ENOSYS;
#endif
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
          int cqe = 100;
          int _len_cq0 = 1;
          struct ib_cq * cq = (struct ib_cq *) malloc(_len_cq0*sizeof(struct ib_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
            cq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udata0 = 1;
          struct ib_udata * udata = (struct ib_udata *) malloc(_len_udata0*sizeof(struct ib_udata));
          for(int _i0 = 0; _i0 < _len_udata0; _i0++) {
            udata[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iwch_resize_cq(cq,cqe,udata);
          printf("%d\n", benchRet); 
          free(cq);
          free(udata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
