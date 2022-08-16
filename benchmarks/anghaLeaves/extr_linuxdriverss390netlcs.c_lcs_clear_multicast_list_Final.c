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
struct lcs_card {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void lcs_clear_multicast_list(struct lcs_card *card)
{
#ifdef	CONFIG_IP_MULTICAST
	struct lcs_ipm_list *ipm;
	unsigned long flags;

	/* Free multicast list. */
	LCS_DBF_TEXT(3, setup, "clmclist");
	spin_lock_irqsave(&card->ipm_lock, flags);
	while (!list_empty(&card->ipm_list)){
		ipm = list_entry(card->ipm_list.next,
				 struct lcs_ipm_list, list);
		list_del(&ipm->list);
		if (ipm->ipm_state != LCS_IPM_STATE_SET_REQUIRED){
			spin_unlock_irqrestore(&card->ipm_lock, flags);
			lcs_send_delipm(card, ipm);
			spin_lock_irqsave(&card->ipm_lock, flags);
		}
		kfree(ipm);
	}
	spin_unlock_irqrestore(&card->ipm_lock, flags);
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
          int _len_card0 = 1;
          struct lcs_card * card = (struct lcs_card *) malloc(_len_card0*sizeof(struct lcs_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lcs_clear_multicast_list(card);
          free(card);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_card0 = 100;
          struct lcs_card * card = (struct lcs_card *) malloc(_len_card0*sizeof(struct lcs_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lcs_clear_multicast_list(card);
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
