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
struct kqrequest {int kqr_state; scalar_t__ kqr_thread; } ;
struct kqworkloop {struct kqrequest kqwl_request; } ;

/* Variables and functions */
 int KQR_THREQUESTED ; 
 scalar_t__ THREAD_NULL ; 

__attribute__((used)) static inline bool
filt_wlturnstile_interlock_is_workq(struct kqworkloop *kqwl)
{
	struct kqrequest *kqr = &kqwl->kqwl_request;
	return (kqr->kqr_state & KQR_THREQUESTED) &&
			(kqr->kqr_thread == THREAD_NULL);
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
          int _len_kqwl0 = 1;
          struct kqworkloop * kqwl = (struct kqworkloop *) malloc(_len_kqwl0*sizeof(struct kqworkloop));
          for(int _i0 = 0; _i0 < _len_kqwl0; _i0++) {
            kqwl[_i0].kqwl_request.kqr_state = ((-2 * (next_i()%2)) + 1) * next_i();
        kqwl[_i0].kqwl_request.kqr_thread = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = filt_wlturnstile_interlock_is_workq(kqwl);
          printf("%d\n", benchRet); 
          free(kqwl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
