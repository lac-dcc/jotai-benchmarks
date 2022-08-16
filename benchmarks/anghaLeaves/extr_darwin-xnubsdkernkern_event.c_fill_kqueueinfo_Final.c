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
struct vinfo_stat {int vst_blksize; int /*<<< orphan*/  vst_ino; int /*<<< orphan*/  vst_mode; int /*<<< orphan*/  vst_size; } ;
struct kqworkloop {int /*<<< orphan*/  kqwl_dynamicid; } ;
struct kqueue_info {int kq_state; struct vinfo_stat kq_stat; } ;
struct kqueue {int kq_state; int /*<<< orphan*/  kq_count; } ;
struct kevent_qos_s {int dummy; } ;
struct kevent64_s {int dummy; } ;
struct kevent {int dummy; } ;

/* Variables and functions */
 int KQ_DYNAMIC ; 
 int KQ_KEV32 ; 
 int KQ_KEV64 ; 
 int KQ_KEV_QOS ; 
 int KQ_SEL ; 
 int KQ_SLEEP ; 
 int KQ_WORKLOOP ; 
 int KQ_WORKQ ; 
 int /*<<< orphan*/  S_IFIFO ; 

int
fill_kqueueinfo(struct kqueue *kq, struct kqueue_info * kinfo)
{
	struct vinfo_stat * st;

	st = &kinfo->kq_stat;

	st->vst_size = kq->kq_count;
	if (kq->kq_state & KQ_KEV_QOS)
		st->vst_blksize = sizeof(struct kevent_qos_s);
	else if (kq->kq_state & KQ_KEV64)
		st->vst_blksize = sizeof(struct kevent64_s);
	else
		st->vst_blksize = sizeof(struct kevent);
	st->vst_mode = S_IFIFO;
	st->vst_ino = (kq->kq_state & KQ_DYNAMIC) ?
		((struct kqworkloop *)kq)->kqwl_dynamicid : 0;

	/* flags exported to libproc as PROC_KQUEUE_* (sys/proc_info.h) */
#define PROC_KQUEUE_MASK (KQ_SEL|KQ_SLEEP|KQ_KEV32|KQ_KEV64|KQ_KEV_QOS|KQ_WORKQ|KQ_WORKLOOP)
	kinfo->kq_state = kq->kq_state & PROC_KQUEUE_MASK;

	return (0);
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
          int _len_kq0 = 1;
          struct kqueue * kq = (struct kqueue *) malloc(_len_kq0*sizeof(struct kqueue));
          for(int _i0 = 0; _i0 < _len_kq0; _i0++) {
            kq[_i0].kq_state = ((-2 * (next_i()%2)) + 1) * next_i();
        kq[_i0].kq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kinfo0 = 1;
          struct kqueue_info * kinfo = (struct kqueue_info *) malloc(_len_kinfo0*sizeof(struct kqueue_info));
          for(int _i0 = 0; _i0 < _len_kinfo0; _i0++) {
            kinfo[_i0].kq_state = ((-2 * (next_i()%2)) + 1) * next_i();
        kinfo[_i0].kq_stat.vst_blksize = ((-2 * (next_i()%2)) + 1) * next_i();
        kinfo[_i0].kq_stat.vst_ino = ((-2 * (next_i()%2)) + 1) * next_i();
        kinfo[_i0].kq_stat.vst_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        kinfo[_i0].kq_stat.vst_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fill_kqueueinfo(kq,kinfo);
          printf("%d\n", benchRet); 
          free(kq);
          free(kinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
