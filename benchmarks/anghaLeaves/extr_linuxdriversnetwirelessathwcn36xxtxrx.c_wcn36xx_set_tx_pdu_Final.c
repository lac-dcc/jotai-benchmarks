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
typedef  void* u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_2__ {int mpdu_header_off; int /*<<< orphan*/  bd_ssn; int /*<<< orphan*/  tid; void* mpdu_len; void* mpdu_header_len; void* mpdu_data_off; } ;
struct wcn36xx_tx_bd {TYPE_1__ pdu; } ;

/* Variables and functions */
 int /*<<< orphan*/  WCN36XX_TXBD_SSN_FILL_DPU_QOS ; 

__attribute__((used)) static void wcn36xx_set_tx_pdu(struct wcn36xx_tx_bd *bd,
			       u32 mpdu_header_len,
			       u32 len,
			       u16 tid)
{
	bd->pdu.mpdu_header_len = mpdu_header_len;
	bd->pdu.mpdu_header_off = sizeof(*bd);
	bd->pdu.mpdu_data_off = bd->pdu.mpdu_header_len +
		bd->pdu.mpdu_header_off;
	bd->pdu.mpdu_len = len;
	bd->pdu.tid = tid;
	bd->pdu.bd_ssn = WCN36XX_TXBD_SSN_FILL_DPU_QOS;
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
          int tid = 100;
          int _len_bd0 = 1;
          struct wcn36xx_tx_bd * bd = (struct wcn36xx_tx_bd *) malloc(_len_bd0*sizeof(struct wcn36xx_tx_bd));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
            bd[_i0].pdu.mpdu_header_off = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].pdu.bd_ssn = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].pdu.tid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * mpdu_header_len;
          void * len;
          wcn36xx_set_tx_pdu(bd,mpdu_header_len,len,tid);
          free(bd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tid = 255;
          int _len_bd0 = 65025;
          struct wcn36xx_tx_bd * bd = (struct wcn36xx_tx_bd *) malloc(_len_bd0*sizeof(struct wcn36xx_tx_bd));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
            bd[_i0].pdu.mpdu_header_off = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].pdu.bd_ssn = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].pdu.tid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * mpdu_header_len;
          void * len;
          wcn36xx_set_tx_pdu(bd,mpdu_header_len,len,tid);
          free(bd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tid = 10;
          int _len_bd0 = 100;
          struct wcn36xx_tx_bd * bd = (struct wcn36xx_tx_bd *) malloc(_len_bd0*sizeof(struct wcn36xx_tx_bd));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
            bd[_i0].pdu.mpdu_header_off = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].pdu.bd_ssn = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].pdu.tid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * mpdu_header_len;
          void * len;
          wcn36xx_set_tx_pdu(bd,mpdu_header_len,len,tid);
          free(bd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
