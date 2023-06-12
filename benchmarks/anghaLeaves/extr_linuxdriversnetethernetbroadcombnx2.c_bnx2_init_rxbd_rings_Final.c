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
       0            empty\n\
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
typedef  int u64 ;
typedef  int /*<<< orphan*/  u32 ;
struct bnx2_rx_bd {int rx_bd_flags; int rx_bd_haddr_hi; int rx_bd_haddr_lo; int /*<<< orphan*/  rx_bd_len; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */
 int BNX2_MAX_RX_DESC_CNT ; 
 int RX_BD_FLAGS_END ; 
 int RX_BD_FLAGS_START ; 

__attribute__((used)) static void
bnx2_init_rxbd_rings(struct bnx2_rx_bd *rx_ring[], dma_addr_t dma[],
		     u32 buf_size, int num_rings)
{
	int i;
	struct bnx2_rx_bd *rxbd;

	for (i = 0; i < num_rings; i++) {
		int j;

		rxbd = &rx_ring[i][0];
		for (j = 0; j < BNX2_MAX_RX_DESC_CNT; j++, rxbd++) {
			rxbd->rx_bd_len = buf_size;
			rxbd->rx_bd_flags = RX_BD_FLAGS_START | RX_BD_FLAGS_END;
		}
		if (i == (num_rings - 1))
			j = 0;
		else
			j = i + 1;
		rxbd->rx_bd_haddr_hi = (u64) dma[j] >> 32;
		rxbd->rx_bd_haddr_lo = (u64) dma[j] & 0xffffffff;
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int num_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rx_ring0 = 1;
          struct bnx2_rx_bd ** rx_ring = (struct bnx2_rx_bd **) malloc(_len_rx_ring0*sizeof(struct bnx2_rx_bd *));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            int _len_rx_ring1 = 1;
            rx_ring[_i0] = (struct bnx2_rx_bd *) malloc(_len_rx_ring1*sizeof(struct bnx2_rx_bd));
            for(int _i1 = 0; _i1 < _len_rx_ring1; _i1++) {
                rx_ring[_i0][_i1].rx_bd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          rx_ring[_i0][_i1].rx_bd_haddr_hi = ((-2 * (next_i()%2)) + 1) * next_i();
          rx_ring[_i0][_i1].rx_bd_haddr_lo = ((-2 * (next_i()%2)) + 1) * next_i();
          rx_ring[_i0][_i1].rx_bd_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int _len_dma0 = 1;
          long * dma = (long *) malloc(_len_dma0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bnx2_init_rxbd_rings(rx_ring,dma,buf_size,num_rings);
          for(int i1 = 0; i1 < _len_rx_ring0; i1++) {
              free(rx_ring[i1]);
          }
          free(rx_ring);
          free(dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
