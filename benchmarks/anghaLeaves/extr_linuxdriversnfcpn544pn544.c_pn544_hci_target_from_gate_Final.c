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
typedef  int u8 ;
struct nfc_target {int sens_res; int /*<<< orphan*/  supported_protocols; } ;
struct nfc_hci_dev {int dummy; } ;

/* Variables and functions */
 int EPROTO ; 
 int /*<<< orphan*/  NFC_PROTO_FELICA_MASK ; 
 int /*<<< orphan*/  NFC_PROTO_JEWEL_MASK ; 
 int /*<<< orphan*/  NFC_PROTO_NFC_DEP_MASK ; 
#define  PN544_RF_READER_F_GATE 130 
#define  PN544_RF_READER_JEWEL_GATE 129 
#define  PN544_RF_READER_NFCIP1_INITIATOR_GATE 128 

__attribute__((used)) static int pn544_hci_target_from_gate(struct nfc_hci_dev *hdev, u8 gate,
				      struct nfc_target *target)
{
	switch (gate) {
	case PN544_RF_READER_F_GATE:
		target->supported_protocols = NFC_PROTO_FELICA_MASK;
		break;
	case PN544_RF_READER_JEWEL_GATE:
		target->supported_protocols = NFC_PROTO_JEWEL_MASK;
		target->sens_res = 0x0c00;
		break;
	case PN544_RF_READER_NFCIP1_INITIATOR_GATE:
		target->supported_protocols = NFC_PROTO_NFC_DEP_MASK;
		break;
	default:
		return -EPROTO;
	}

	return 0;
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
          int gate = 100;
          int _len_hdev0 = 1;
          struct nfc_hci_dev * hdev = (struct nfc_hci_dev *) malloc(_len_hdev0*sizeof(struct nfc_hci_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target0 = 1;
          struct nfc_target * target = (struct nfc_target *) malloc(_len_target0*sizeof(struct nfc_target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].sens_res = ((-2 * (next_i()%2)) + 1) * next_i();
        target[_i0].supported_protocols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pn544_hci_target_from_gate(hdev,gate,target);
          printf("%d\n", benchRet); 
          free(hdev);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
