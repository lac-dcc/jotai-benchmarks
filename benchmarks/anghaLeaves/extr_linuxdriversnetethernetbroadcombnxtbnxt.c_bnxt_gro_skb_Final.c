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
struct rx_tpa_end_cmp_ext {int dummy; } ;
struct rx_tpa_end_cmp {int dummy; } ;
struct bnxt_tpa_info {int dummy; } ;
struct bnxt {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct sk_buff *bnxt_gro_skb(struct bnxt *bp,
					   struct bnxt_tpa_info *tpa_info,
					   struct rx_tpa_end_cmp *tpa_end,
					   struct rx_tpa_end_cmp_ext *tpa_end1,
					   struct sk_buff *skb)
{
#ifdef CONFIG_INET
	int payload_off;
	u16 segs;

	segs = TPA_END_TPA_SEGS(tpa_end);
	if (segs == 1)
		return skb;

	NAPI_GRO_CB(skb)->count = segs;
	skb_shinfo(skb)->gso_size =
		le32_to_cpu(tpa_end1->rx_tpa_end_cmp_seg_len);
	skb_shinfo(skb)->gso_type = tpa_info->gso_type;
	payload_off = (le32_to_cpu(tpa_end->rx_tpa_end_cmp_misc_v1) &
		       RX_TPA_END_CMP_PAYLOAD_OFFSET) >>
		      RX_TPA_END_CMP_PAYLOAD_OFFSET_SHIFT;
	skb = bp->gro_func(tpa_info, payload_off, TPA_END_GRO_TS(tpa_end), skb);
	if (likely(skb))
		tcp_gro_complete(skb);
#endif
	return skb;
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
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tpa_info0 = 1;
          struct bnxt_tpa_info * tpa_info = (struct bnxt_tpa_info *) malloc(_len_tpa_info0*sizeof(struct bnxt_tpa_info));
          for(int _i0 = 0; _i0 < _len_tpa_info0; _i0++) {
            tpa_info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tpa_end0 = 1;
          struct rx_tpa_end_cmp * tpa_end = (struct rx_tpa_end_cmp *) malloc(_len_tpa_end0*sizeof(struct rx_tpa_end_cmp));
          for(int _i0 = 0; _i0 < _len_tpa_end0; _i0++) {
            tpa_end[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tpa_end10 = 1;
          struct rx_tpa_end_cmp_ext * tpa_end1 = (struct rx_tpa_end_cmp_ext *) malloc(_len_tpa_end10*sizeof(struct rx_tpa_end_cmp_ext));
          for(int _i0 = 0; _i0 < _len_tpa_end10; _i0++) {
            tpa_end1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sk_buff * benchRet = bnxt_gro_skb(bp,tpa_info,tpa_end,tpa_end1,skb);
          printf("%d\n", (*benchRet).dummy);
          free(bp);
          free(tpa_info);
          free(tpa_end);
          free(tpa_end1);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
