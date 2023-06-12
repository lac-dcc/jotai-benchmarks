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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct sk_buff {int len; int* data; } ;
struct TYPE_5__ {TYPE_1__* fax; } ;
typedef  TYPE_2__ modem_info ;
typedef  int __u8 ;
struct TYPE_4__ {int /*<<< orphan*/  bor; } ;

/* Variables and functions */

void
isdn_tty_fax_bitorder(modem_info *info, struct sk_buff *skb)
{
	__u8 LeftMask;
	__u8 RightMask;
	__u8 fBit;
	__u8 Data;
	int i;

	if (!info->fax->bor) {
		for (i = 0; i < skb->len; i++) {
			Data = skb->data[i];
			for (
				LeftMask = 0x80, RightMask = 0x01;
				LeftMask > RightMask;
				LeftMask >>= 1, RightMask <<= 1
				) {
				fBit = (Data & LeftMask);
				if (Data & RightMask)
					Data |= LeftMask;
				else
					Data &= ~LeftMask;
				if (fBit)
					Data |= RightMask;
				else
					Data &= ~RightMask;

			}
			skb->data[i] = Data;
		}
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_info0 = 65025;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__fax0 = 1;
          info[_i0].fax = (struct TYPE_4__ *) malloc(_len_info__i0__fax0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_info__i0__fax0; _j0++) {
              info[_i0].fax->bor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              skb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_skb__i0__data0 = 1;
          skb[_i0].data = (int *) malloc(_len_skb__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          isdn_tty_fax_bitorder(info,skb);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].fax);
          }
          free(info);
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_info0 = 100;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__fax0 = 1;
          info[_i0].fax = (struct TYPE_4__ *) malloc(_len_info__i0__fax0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_info__i0__fax0; _j0++) {
              info[_i0].fax->bor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              skb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_skb__i0__data0 = 1;
          skb[_i0].data = (int *) malloc(_len_skb__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          isdn_tty_fax_bitorder(info,skb);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].fax);
          }
          free(info);
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_info0 = 1;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__fax0 = 1;
          info[_i0].fax = (struct TYPE_4__ *) malloc(_len_info__i0__fax0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_info__i0__fax0; _j0++) {
              info[_i0].fax->bor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              skb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_skb__i0__data0 = 1;
          skb[_i0].data = (int *) malloc(_len_skb__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          isdn_tty_fax_bitorder(info,skb);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].fax);
          }
          free(info);
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
