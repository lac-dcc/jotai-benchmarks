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
typedef  scalar_t__ u8 ;
struct nfc_hci_dev {TYPE_1__* pipes; } ;
struct TYPE_2__ {scalar_t__ dest_host; int /*<<< orphan*/  gate; } ;

/* Variables and functions */
 int /*<<< orphan*/  NFC_HCI_INVALID_GATE ; 
 scalar_t__ NFC_HCI_INVALID_HOST ; 
 int NFC_HCI_MAX_PIPES ; 

void nfc_hci_reset_pipes_per_host(struct nfc_hci_dev *hdev, u8 host)
{
	int i = 0;

	for (i = 0; i < NFC_HCI_MAX_PIPES; i++) {
		if (hdev->pipes[i].dest_host != host)
			continue;

		hdev->pipes[i].gate = NFC_HCI_INVALID_GATE;
		hdev->pipes[i].dest_host = NFC_HCI_INVALID_HOST;
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
          long host = 100;
          int _len_hdev0 = 1;
          struct nfc_hci_dev * hdev = (struct nfc_hci_dev *) malloc(_len_hdev0*sizeof(struct nfc_hci_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
              int _len_hdev__i0__pipes0 = 1;
          hdev[_i0].pipes = (struct TYPE_2__ *) malloc(_len_hdev__i0__pipes0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdev__i0__pipes0; _j0++) {
            hdev[_i0].pipes->dest_host = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].pipes->gate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nfc_hci_reset_pipes_per_host(hdev,host);
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].pipes);
          }
          free(hdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
