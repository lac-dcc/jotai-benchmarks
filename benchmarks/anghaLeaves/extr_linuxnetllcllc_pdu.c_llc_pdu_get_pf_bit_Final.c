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
struct llc_pdu_sn {int ctrl_1; int ctrl_2; } ;

/* Variables and functions */
#define  LLC_PDU_TYPE_I 130 
#define  LLC_PDU_TYPE_S 129 
#define  LLC_PDU_TYPE_U 128 
 int LLC_S_PF_BIT_MASK ; 
 int LLC_U_PF_BIT_MASK ; 

__attribute__((used)) static u8 llc_pdu_get_pf_bit(struct llc_pdu_sn *pdu)
{
	u8 pdu_type;
	u8 pf_bit = 0;

	if (pdu->ctrl_1 & 1) {
		if ((pdu->ctrl_1 & LLC_PDU_TYPE_U) == LLC_PDU_TYPE_U)
			pdu_type = LLC_PDU_TYPE_U;
		else
			pdu_type = LLC_PDU_TYPE_S;
	} else
		pdu_type = LLC_PDU_TYPE_I;
	switch (pdu_type) {
	case LLC_PDU_TYPE_I:
	case LLC_PDU_TYPE_S:
		pf_bit = pdu->ctrl_2 & LLC_S_PF_BIT_MASK;
		break;
	case LLC_PDU_TYPE_U:
		pf_bit = (pdu->ctrl_1 & LLC_U_PF_BIT_MASK) >> 4;
		break;
	}
	return pf_bit;
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
          int _len_pdu0 = 1;
          struct llc_pdu_sn * pdu = (struct llc_pdu_sn *) malloc(_len_pdu0*sizeof(struct llc_pdu_sn));
          for(int _i0 = 0; _i0 < _len_pdu0; _i0++) {
            pdu[_i0].ctrl_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pdu[_i0].ctrl_2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = llc_pdu_get_pf_bit(pdu);
          printf("%d\n", benchRet); 
          free(pdu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
