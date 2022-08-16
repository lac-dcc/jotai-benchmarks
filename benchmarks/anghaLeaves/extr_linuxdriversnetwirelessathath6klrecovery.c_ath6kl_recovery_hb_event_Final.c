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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ seq_num; int hb_pending; } ;
struct ath6kl {TYPE_1__ fw_recovery; } ;

/* Variables and functions */

void ath6kl_recovery_hb_event(struct ath6kl *ar, u32 cookie)
{
	if (cookie == ar->fw_recovery.seq_num)
		ar->fw_recovery.hb_pending = false;
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
          long cookie = 100;
          int _len_ar0 = 1;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].fw_recovery.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].fw_recovery.hb_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath6kl_recovery_hb_event(ar,cookie);
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
