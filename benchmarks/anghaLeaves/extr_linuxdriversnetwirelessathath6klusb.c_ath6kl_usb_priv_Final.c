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
       1            linked\n\
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
struct ath6kl_usb {int dummy; } ;
struct ath6kl {struct ath6kl_usb* hif_priv; } ;

/* Variables and functions */

__attribute__((used)) static inline struct ath6kl_usb *ath6kl_usb_priv(struct ath6kl *ar)
{
	return ar->hif_priv;
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
          int _len_ar0 = 1;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__hif_priv0 = 1;
          ar[_i0].hif_priv = (struct ath6kl_usb *) malloc(_len_ar__i0__hif_priv0*sizeof(struct ath6kl_usb));
          for(int _j0 = 0; _j0 < _len_ar__i0__hif_priv0; _j0++) {
            ar[_i0].hif_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ath6kl_usb * benchRet = ath6kl_usb_priv(ar);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].hif_priv);
          }
          free(ar);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_ar0 = 1;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__hif_priv0 = 1;
          ar[_i0].hif_priv = (struct ath6kl_usb *) malloc(_len_ar__i0__hif_priv0*sizeof(struct ath6kl_usb));
          for(int _j0 = 0; _j0 < _len_ar__i0__hif_priv0; _j0++) {
            ar[_i0].hif_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ath6kl_usb * benchRet = ath6kl_usb_priv(ar);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].hif_priv);
          }
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
