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
struct sk_buff {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int brcmf_msgbuf_hdrpull(struct brcmf_pub *drvr, bool do_fws,
				struct sk_buff *skb, struct brcmf_if **ifp)
{
	return -ENODEV;
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
          int do_fws = 100;
          int _len_drvr0 = 1;
          struct brcmf_pub * drvr = (struct brcmf_pub *) malloc(_len_drvr0*sizeof(struct brcmf_pub));
          for(int _i0 = 0; _i0 < _len_drvr0; _i0++) {
            drvr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ifp0 = 1;
          struct brcmf_if ** ifp = (struct brcmf_if **) malloc(_len_ifp0*sizeof(struct brcmf_if *));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            int _len_ifp1 = 1;
            ifp[_i0] = (struct brcmf_if *) malloc(_len_ifp1*sizeof(struct brcmf_if));
            for(int _i1 = 0; _i1 < _len_ifp1; _i1++) {
              ifp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = brcmf_msgbuf_hdrpull(drvr,do_fws,skb,ifp);
          printf("%d\n", benchRet); 
          free(drvr);
          free(skb);
          for(int i1 = 0; i1 < _len_ifp0; i1++) {
            int _len_ifp1 = 1;
              free(ifp[i1]);
          }
          free(ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
