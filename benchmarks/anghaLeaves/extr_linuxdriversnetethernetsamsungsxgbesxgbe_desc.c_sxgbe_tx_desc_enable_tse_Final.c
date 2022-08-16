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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;
struct TYPE_4__ {int tcp_payload_len; } ;
struct TYPE_6__ {int buf1_size; int tcp_hdr_len; TYPE_1__ tx_pkt_len; int /*<<< orphan*/  tse_bit; } ;
struct TYPE_5__ {TYPE_3__ tx_rd_des23; } ;
struct sxgbe_tx_norm_desc {TYPE_2__ tdes23; } ;

/* Variables and functions */

__attribute__((used)) static void sxgbe_tx_desc_enable_tse(struct sxgbe_tx_norm_desc *p, u8 is_tse,
				     u32 total_hdr_len, u32 tcp_hdr_len,
				     u32 tcp_payload_len)
{
	p->tdes23.tx_rd_des23.tse_bit = is_tse;
	p->tdes23.tx_rd_des23.buf1_size = total_hdr_len;
	p->tdes23.tx_rd_des23.tcp_hdr_len = tcp_hdr_len / 4;
	p->tdes23.tx_rd_des23.tx_pkt_len.tcp_payload_len  = tcp_payload_len;
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
          int is_tse = 100;
          int total_hdr_len = 100;
          int tcp_hdr_len = 100;
          int tcp_payload_len = 100;
          int _len_p0 = 1;
          struct sxgbe_tx_norm_desc * p = (struct sxgbe_tx_norm_desc *) malloc(_len_p0*sizeof(struct sxgbe_tx_norm_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].tdes23.tx_rd_des23.buf1_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tdes23.tx_rd_des23.tcp_hdr_len = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tdes23.tx_rd_des23.tx_pkt_len.tcp_payload_len = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tdes23.tx_rd_des23.tse_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sxgbe_tx_desc_enable_tse(p,is_tse,total_hdr_len,tcp_hdr_len,tcp_payload_len);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
