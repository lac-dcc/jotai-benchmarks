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
typedef  int u32 ;
struct iudma_ch {int n_bds_used; struct bcm_enet_desc* read_bd; struct bcm_enet_desc* bd_ring; struct bcm_enet_desc* end_bd; } ;
struct bcm_enet_desc {int len_stat; } ;
struct bcm63xx_udc {int dummy; } ;

/* Variables and functions */
 int DMADESC_LENGTH_MASK ; 
 int DMADESC_LENGTH_SHIFT ; 
 int DMADESC_OWNER_MASK ; 
 int EBUSY ; 
 int EINVAL ; 

__attribute__((used)) static int iudma_read(struct bcm63xx_udc *udc, struct iudma_ch *iudma)
{
	int i, actual_len = 0;
	struct bcm_enet_desc *d = iudma->read_bd;

	if (!iudma->n_bds_used)
		return -EINVAL;

	for (i = 0; i < iudma->n_bds_used; i++) {
		u32 dmaflags;

		dmaflags = d->len_stat;

		if (dmaflags & DMADESC_OWNER_MASK)
			return -EBUSY;

		actual_len += (dmaflags & DMADESC_LENGTH_MASK) >>
			      DMADESC_LENGTH_SHIFT;
		if (d == iudma->end_bd)
			d = iudma->bd_ring;
		else
			d++;
	}

	iudma->read_bd = d;
	iudma->n_bds_used = 0;
	return actual_len;
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
          int _len_udc0 = 1;
          struct bcm63xx_udc * udc = (struct bcm63xx_udc *) malloc(_len_udc0*sizeof(struct bcm63xx_udc));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
            udc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iudma0 = 1;
          struct iudma_ch * iudma = (struct iudma_ch *) malloc(_len_iudma0*sizeof(struct iudma_ch));
          for(int _i0 = 0; _i0 < _len_iudma0; _i0++) {
            iudma[_i0].n_bds_used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iudma__i0__read_bd0 = 1;
          iudma[_i0].read_bd = (struct bcm_enet_desc *) malloc(_len_iudma__i0__read_bd0*sizeof(struct bcm_enet_desc));
          for(int _j0 = 0; _j0 < _len_iudma__i0__read_bd0; _j0++) {
            iudma[_i0].read_bd->len_stat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iudma__i0__bd_ring0 = 1;
          iudma[_i0].bd_ring = (struct bcm_enet_desc *) malloc(_len_iudma__i0__bd_ring0*sizeof(struct bcm_enet_desc));
          for(int _j0 = 0; _j0 < _len_iudma__i0__bd_ring0; _j0++) {
            iudma[_i0].bd_ring->len_stat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iudma__i0__end_bd0 = 1;
          iudma[_i0].end_bd = (struct bcm_enet_desc *) malloc(_len_iudma__i0__end_bd0*sizeof(struct bcm_enet_desc));
          for(int _j0 = 0; _j0 < _len_iudma__i0__end_bd0; _j0++) {
            iudma[_i0].end_bd->len_stat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iudma_read(udc,iudma);
          printf("%d\n", benchRet); 
          free(udc);
          for(int _aux = 0; _aux < _len_iudma0; _aux++) {
          free(iudma[_aux].read_bd);
          }
          for(int _aux = 0; _aux < _len_iudma0; _aux++) {
          free(iudma[_aux].bd_ring);
          }
          for(int _aux = 0; _aux < _len_iudma0; _aux++) {
          free(iudma[_aux].end_bd);
          }
          free(iudma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
