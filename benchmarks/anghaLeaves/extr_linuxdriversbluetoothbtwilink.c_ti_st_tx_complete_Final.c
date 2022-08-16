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
struct ti_st {struct hci_dev* hdev; } ;
struct TYPE_2__ {int /*<<< orphan*/  sco_tx; int /*<<< orphan*/  acl_tx; int /*<<< orphan*/  cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; } ;

/* Variables and functions */
#define  HCI_ACLDATA_PKT 130 
#define  HCI_COMMAND_PKT 129 
#define  HCI_SCODATA_PKT 128 

__attribute__((used)) static inline void ti_st_tx_complete(struct ti_st *hst, int pkt_type)
{
	struct hci_dev *hdev = hst->hdev;

	/* Update HCI stat counters */
	switch (pkt_type) {
	case HCI_COMMAND_PKT:
		hdev->stat.cmd_tx++;
		break;

	case HCI_ACLDATA_PKT:
		hdev->stat.acl_tx++;
		break;

	case HCI_SCODATA_PKT:
		hdev->stat.sco_tx++;
		break;
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
          int pkt_type = 100;
          int _len_hst0 = 1;
          struct ti_st * hst = (struct ti_st *) malloc(_len_hst0*sizeof(struct ti_st));
          for(int _i0 = 0; _i0 < _len_hst0; _i0++) {
              int _len_hst__i0__hdev0 = 1;
          hst[_i0].hdev = (struct hci_dev *) malloc(_len_hst__i0__hdev0*sizeof(struct hci_dev));
          for(int _j0 = 0; _j0 < _len_hst__i0__hdev0; _j0++) {
            hst[_i0].hdev->stat.sco_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        hst[_i0].hdev->stat.acl_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        hst[_i0].hdev->stat.cmd_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ti_st_tx_complete(hst,pkt_type);
          for(int _aux = 0; _aux < _len_hst0; _aux++) {
          free(hst[_aux].hdev);
          }
          free(hst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
