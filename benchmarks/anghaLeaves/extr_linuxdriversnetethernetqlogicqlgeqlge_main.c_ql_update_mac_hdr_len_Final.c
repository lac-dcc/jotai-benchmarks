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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  scalar_t__ u16 ;
struct ql_adapter {TYPE_1__* ndev; } ;
struct ib_mac_iocb_rsp {int flags2; } ;
struct TYPE_2__ {int features; } ;

/* Variables and functions */
 scalar_t__ ETH_P_8021Q ; 
 int IB_MAC_IOCB_RSP_V ; 
 int NETIF_F_HW_VLAN_CTAG_RX ; 
 int VLAN_HLEN ; 

__attribute__((used)) static void ql_update_mac_hdr_len(struct ql_adapter *qdev,
				  struct ib_mac_iocb_rsp *ib_mac_rsp,
				  void *page, size_t *len)
{
	u16 *tags;

	if (qdev->ndev->features & NETIF_F_HW_VLAN_CTAG_RX)
		return;
	if (ib_mac_rsp->flags2 & IB_MAC_IOCB_RSP_V) {
		tags = (u16 *)page;
		/* Look for stacked vlan tags in ethertype field */
		if (tags[6] == ETH_P_8021Q &&
		    tags[8] == ETH_P_8021Q)
			*len += 2 * VLAN_HLEN;
		else
			*len += VLAN_HLEN;
	}
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
          struct ql_adapter * qdev = (struct ql_adapter *) malloc(_len_qdev0*sizeof(struct ql_adapter));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
              int _len_qdev__i0__ndev0 = 1;
          qdev[_i0].ndev = (struct TYPE_2__ *) malloc(_len_qdev__i0__ndev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qdev__i0__ndev0; _j0++) {
            qdev[_i0].ndev->features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ib_mac_rsp0 = 1;
          struct ib_mac_iocb_rsp * ib_mac_rsp = (struct ib_mac_iocb_rsp *) malloc(_len_ib_mac_rsp0*sizeof(struct ib_mac_iocb_rsp));
          for(int _i0 = 0; _i0 < _len_ib_mac_rsp0; _i0++) {
            ib_mac_rsp[_i0].flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * page;
          int _len_len0 = 1;
          unsigned long * len = (unsigned long *) malloc(_len_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ql_update_mac_hdr_len(qdev,ib_mac_rsp,page,len);
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].ndev);
          }
          free(qdev);
          free(ib_mac_rsp);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qdev0 = 65025;
          struct ql_adapter * qdev = (struct ql_adapter *) malloc(_len_qdev0*sizeof(struct ql_adapter));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
              int _len_qdev__i0__ndev0 = 1;
          qdev[_i0].ndev = (struct TYPE_2__ *) malloc(_len_qdev__i0__ndev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qdev__i0__ndev0; _j0++) {
            qdev[_i0].ndev->features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ib_mac_rsp0 = 65025;
          struct ib_mac_iocb_rsp * ib_mac_rsp = (struct ib_mac_iocb_rsp *) malloc(_len_ib_mac_rsp0*sizeof(struct ib_mac_iocb_rsp));
          for(int _i0 = 0; _i0 < _len_ib_mac_rsp0; _i0++) {
            ib_mac_rsp[_i0].flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * page;
          int _len_len0 = 65025;
          unsigned long * len = (unsigned long *) malloc(_len_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ql_update_mac_hdr_len(qdev,ib_mac_rsp,page,len);
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].ndev);
          }
          free(qdev);
          free(ib_mac_rsp);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qdev0 = 100;
          struct ql_adapter * qdev = (struct ql_adapter *) malloc(_len_qdev0*sizeof(struct ql_adapter));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
              int _len_qdev__i0__ndev0 = 1;
          qdev[_i0].ndev = (struct TYPE_2__ *) malloc(_len_qdev__i0__ndev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qdev__i0__ndev0; _j0++) {
            qdev[_i0].ndev->features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ib_mac_rsp0 = 100;
          struct ib_mac_iocb_rsp * ib_mac_rsp = (struct ib_mac_iocb_rsp *) malloc(_len_ib_mac_rsp0*sizeof(struct ib_mac_iocb_rsp));
          for(int _i0 = 0; _i0 < _len_ib_mac_rsp0; _i0++) {
            ib_mac_rsp[_i0].flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * page;
          int _len_len0 = 100;
          unsigned long * len = (unsigned long *) malloc(_len_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ql_update_mac_hdr_len(qdev,ib_mac_rsp,page,len);
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].ndev);
          }
          free(qdev);
          free(ib_mac_rsp);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
