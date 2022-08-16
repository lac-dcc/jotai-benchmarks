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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_int32_t ;
typedef  int mbuf_svc_class_t ;
struct TYPE_3__ {int fqs_flags; } ;
typedef  TYPE_1__ fq_if_t ;

/* Variables and functions */
 int FQS_DRIVER_MANAGED ; 
 int /*<<< orphan*/  FQ_IF_AV_INDEX ; 
 int /*<<< orphan*/  FQ_IF_BE_INDEX ; 
 int /*<<< orphan*/  FQ_IF_BK_INDEX ; 
 int /*<<< orphan*/  FQ_IF_BK_SYS_INDEX ; 
 int /*<<< orphan*/  FQ_IF_CTL_INDEX ; 
 int /*<<< orphan*/  FQ_IF_OAM_INDEX ; 
 int /*<<< orphan*/  FQ_IF_RD_INDEX ; 
 int /*<<< orphan*/  FQ_IF_RV_INDEX ; 
 int /*<<< orphan*/  FQ_IF_SIG_INDEX ; 
 int /*<<< orphan*/  FQ_IF_VI_INDEX ; 
 int /*<<< orphan*/  FQ_IF_VO_INDEX ; 
#define  MBUF_SC_AV 138 
#define  MBUF_SC_BE 137 
#define  MBUF_SC_BK 136 
#define  MBUF_SC_BK_SYS 135 
#define  MBUF_SC_CTL 134 
#define  MBUF_SC_OAM 133 
#define  MBUF_SC_RD 132 
#define  MBUF_SC_RV 131 
#define  MBUF_SC_SIG 130 
#define  MBUF_SC_VI 129 
#define  MBUF_SC_VO 128 

__attribute__((used)) static inline u_int32_t
fq_if_service_to_priority(fq_if_t *fqs, mbuf_svc_class_t svc)
{
	u_int32_t pri;

	if (fqs->fqs_flags & FQS_DRIVER_MANAGED) {
		switch (svc) {
		case MBUF_SC_BK_SYS:
		case MBUF_SC_BK:
			pri = FQ_IF_BK_INDEX;
			break;
		case MBUF_SC_BE:
		case MBUF_SC_RD:
		case MBUF_SC_OAM:
			pri = FQ_IF_BE_INDEX;
			break;
		case MBUF_SC_AV:
		case MBUF_SC_RV:
		case MBUF_SC_VI:
		case MBUF_SC_SIG:
			pri = FQ_IF_VI_INDEX;
			break;
		case MBUF_SC_VO:
		case MBUF_SC_CTL:
			pri = FQ_IF_VO_INDEX;
			break;
		default:
			pri = FQ_IF_BE_INDEX; /* Use best effort by default */
			break;
		}
		return (pri);
	}

	/* scheduler is not managed by the driver */
	switch (svc) {
	case MBUF_SC_BK_SYS:
		pri = FQ_IF_BK_SYS_INDEX;
		break;
	case MBUF_SC_BK:
		pri = FQ_IF_BK_INDEX;
		break;
	case MBUF_SC_BE:
		pri = FQ_IF_BE_INDEX;
		break;
	case MBUF_SC_RD:
		pri = FQ_IF_RD_INDEX;
		break;
	case MBUF_SC_OAM:
		pri = FQ_IF_OAM_INDEX;
		break;
	case MBUF_SC_AV:
		pri = FQ_IF_AV_INDEX;
		break;
	case MBUF_SC_RV:
		pri = FQ_IF_RV_INDEX;
		break;
	case MBUF_SC_VI:
		pri = FQ_IF_VI_INDEX;
		break;
	case MBUF_SC_SIG:
		pri = FQ_IF_SIG_INDEX;
		break;
	case MBUF_SC_VO:
		pri = FQ_IF_VO_INDEX;
		break;
	case MBUF_SC_CTL:
		pri = FQ_IF_CTL_INDEX;
		break;
	default:
		pri = FQ_IF_BE_INDEX; /* Use best effort by default */
		break;
	}
	return (pri);
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
          int svc = 100;
          int _len_fqs0 = 1;
          struct TYPE_3__ * fqs = (struct TYPE_3__ *) malloc(_len_fqs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fqs0; _i0++) {
            fqs[_i0].fqs_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fq_if_service_to_priority(fqs,svc);
          printf("%d\n", benchRet); 
          free(fqs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int svc = 10;
          int _len_fqs0 = 100;
          struct TYPE_3__ * fqs = (struct TYPE_3__ *) malloc(_len_fqs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fqs0; _i0++) {
            fqs[_i0].fqs_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fq_if_service_to_priority(fqs,svc);
          printf("%d\n", benchRet); 
          free(fqs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
