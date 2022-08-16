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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct TYPE_5__ {int total_pkt_len; } ;
struct TYPE_6__ {TYPE_1__ pkt_len; } ;
struct TYPE_8__ {int buf1_size; int /*<<< orphan*/  cksum_ctl; TYPE_2__ tx_pkt_len; int /*<<< orphan*/  first_desc; } ;
struct TYPE_7__ {TYPE_4__ tx_rd_des23; } ;
struct sxgbe_tx_norm_desc {TYPE_3__ tdes23; } ;

/* Variables and functions */
 int /*<<< orphan*/  cic_full ; 

__attribute__((used)) static void sxgbe_prepare_tx_desc(struct sxgbe_tx_norm_desc *p, u8 is_fd,
				  int buf1_len, int pkt_len, int cksum)
{
	p->tdes23.tx_rd_des23.first_desc = is_fd;
	p->tdes23.tx_rd_des23.buf1_size = buf1_len;

	p->tdes23.tx_rd_des23.tx_pkt_len.pkt_len.total_pkt_len = pkt_len;

	if (cksum)
		p->tdes23.tx_rd_des23.cksum_ctl = cic_full;
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
          int is_fd = 100;
          int buf1_len = 100;
          int pkt_len = 100;
          int cksum = 100;
          int _len_p0 = 1;
          struct sxgbe_tx_norm_desc * p = (struct sxgbe_tx_norm_desc *) malloc(_len_p0*sizeof(struct sxgbe_tx_norm_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].tdes23.tx_rd_des23.buf1_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tdes23.tx_rd_des23.cksum_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tdes23.tx_rd_des23.tx_pkt_len.pkt_len.total_pkt_len = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tdes23.tx_rd_des23.first_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sxgbe_prepare_tx_desc(p,is_fd,buf1_len,pkt_len,cksum);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
