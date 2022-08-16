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
struct ql_rcv_buf_cb {int /*<<< orphan*/  buf_phy_addr_low; int /*<<< orphan*/  buf_phy_addr_high; } ;
struct ql3_adapter {int num_large_buffers; scalar_t__ lrg_buf_skb_check; scalar_t__ lrg_buf_index; struct ql_rcv_buf_cb* lrg_buf; struct bufq_addr_element* lrg_buf_q_virt_addr; } ;
struct bufq_addr_element {int /*<<< orphan*/  addr_low; int /*<<< orphan*/  addr_high; } ;

/* Variables and functions */

__attribute__((used)) static void ql_init_large_buffers(struct ql3_adapter *qdev)
{
	int i;
	struct ql_rcv_buf_cb *lrg_buf_cb;
	struct bufq_addr_element *buf_addr_ele = qdev->lrg_buf_q_virt_addr;

	for (i = 0; i < qdev->num_large_buffers; i++) {
		lrg_buf_cb = &qdev->lrg_buf[i];
		buf_addr_ele->addr_high = lrg_buf_cb->buf_phy_addr_high;
		buf_addr_ele->addr_low = lrg_buf_cb->buf_phy_addr_low;
		buf_addr_ele++;
	}
	qdev->lrg_buf_index = 0;
	qdev->lrg_buf_skb_check = 0;
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
          int _len_qdev0 = 1;
          struct ql3_adapter * qdev = (struct ql3_adapter *) malloc(_len_qdev0*sizeof(struct ql3_adapter));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
            qdev[_i0].num_large_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].lrg_buf_skb_check = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].lrg_buf_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qdev__i0__lrg_buf0 = 1;
          qdev[_i0].lrg_buf = (struct ql_rcv_buf_cb *) malloc(_len_qdev__i0__lrg_buf0*sizeof(struct ql_rcv_buf_cb));
          for(int _j0 = 0; _j0 < _len_qdev__i0__lrg_buf0; _j0++) {
            qdev[_i0].lrg_buf->buf_phy_addr_low = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].lrg_buf->buf_phy_addr_high = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qdev__i0__lrg_buf_q_virt_addr0 = 1;
          qdev[_i0].lrg_buf_q_virt_addr = (struct bufq_addr_element *) malloc(_len_qdev__i0__lrg_buf_q_virt_addr0*sizeof(struct bufq_addr_element));
          for(int _j0 = 0; _j0 < _len_qdev__i0__lrg_buf_q_virt_addr0; _j0++) {
            qdev[_i0].lrg_buf_q_virt_addr->addr_low = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].lrg_buf_q_virt_addr->addr_high = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ql_init_large_buffers(qdev);
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].lrg_buf);
          }
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].lrg_buf_q_virt_addr);
          }
          free(qdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
