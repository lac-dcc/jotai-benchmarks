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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_2__ {int fw_query_complete; int /*<<< orphan*/  max_rit_size; int /*<<< orphan*/  num_mcmac; int /*<<< orphan*/  num_ucmac; int /*<<< orphan*/  num_rxp; int /*<<< orphan*/  num_txq; } ;
struct bna_ioceth {TYPE_1__ attr; } ;

/* Variables and functions */
 int /*<<< orphan*/  BFI_ENET_DEF_RITSZ ; 
 int /*<<< orphan*/  BFI_ENET_DEF_RXP ; 
 int /*<<< orphan*/  BFI_ENET_DEF_TXQ ; 
 int /*<<< orphan*/  BFI_ENET_DEF_UCAM ; 
 int /*<<< orphan*/  BFI_ENET_MAX_MCAM ; 

__attribute__((used)) static void bna_attr_init(struct bna_ioceth *ioceth)
{
	ioceth->attr.num_txq = BFI_ENET_DEF_TXQ;
	ioceth->attr.num_rxp = BFI_ENET_DEF_RXP;
	ioceth->attr.num_ucmac = BFI_ENET_DEF_UCAM;
	ioceth->attr.num_mcmac = BFI_ENET_MAX_MCAM;
	ioceth->attr.max_rit_size = BFI_ENET_DEF_RITSZ;
	ioceth->attr.fw_query_complete = false;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_ioceth0 = 65025;
          struct bna_ioceth * ioceth = (struct bna_ioceth *) malloc(_len_ioceth0*sizeof(struct bna_ioceth));
          for(int _i0 = 0; _i0 < _len_ioceth0; _i0++) {
              ioceth[_i0].attr.fw_query_complete = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.max_rit_size = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_mcmac = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_ucmac = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_rxp = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_txq = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          bna_attr_init(ioceth);
          free(ioceth);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ioceth0 = 100;
          struct bna_ioceth * ioceth = (struct bna_ioceth *) malloc(_len_ioceth0*sizeof(struct bna_ioceth));
          for(int _i0 = 0; _i0 < _len_ioceth0; _i0++) {
              ioceth[_i0].attr.fw_query_complete = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.max_rit_size = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_mcmac = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_ucmac = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_rxp = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_txq = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          bna_attr_init(ioceth);
          free(ioceth);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ioceth0 = 1;
          struct bna_ioceth * ioceth = (struct bna_ioceth *) malloc(_len_ioceth0*sizeof(struct bna_ioceth));
          for(int _i0 = 0; _i0 < _len_ioceth0; _i0++) {
              ioceth[_i0].attr.fw_query_complete = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.max_rit_size = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_mcmac = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_ucmac = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_rxp = ((-2 * (next_i()%2)) + 1) * next_i();
          ioceth[_i0].attr.num_txq = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          bna_attr_init(ioceth);
          free(ioceth);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
