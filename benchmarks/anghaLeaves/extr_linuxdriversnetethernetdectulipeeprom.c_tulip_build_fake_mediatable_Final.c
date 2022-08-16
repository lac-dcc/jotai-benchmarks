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
       1            big-arr-10x\n\
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
struct tulip_private {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void tulip_build_fake_mediatable(struct tulip_private *tp)
{
#ifdef CONFIG_GSC
	if (tp->flags & NEEDS_FAKE_MEDIA_TABLE) {
		static unsigned char leafdata[] =
			{ 0x01,       /* phy number */
			  0x02,       /* gpr setup sequence length */
			  0x02, 0x00, /* gpr setup sequence */
			  0x02,       /* phy reset sequence length */
			  0x01, 0x00, /* phy reset sequence */
			  0x00, 0x78, /* media capabilities */
			  0x00, 0xe0, /* nway advertisement */
			  0x00, 0x05, /* fdx bit map */
			  0x00, 0x06  /* ttm bit map */
			};

		tp->mtable = kmalloc(sizeof(struct mediatable) +
				     sizeof(struct medialeaf), GFP_KERNEL);

		if (tp->mtable == NULL)
			return; /* Horrible, impossible failure. */

		tp->mtable->defaultmedia = 0x800;
		tp->mtable->leafcount = 1;
		tp->mtable->csr12dir = 0x3f; /* inputs on bit7 for hsc-pci, bit6 for pci-fx */
		tp->mtable->has_nonmii = 0;
		tp->mtable->has_reset = 0;
		tp->mtable->has_mii = 1;
		tp->mtable->csr15dir = tp->mtable->csr15val = 0;
		tp->mtable->mleaf[0].type = 1;
		tp->mtable->mleaf[0].media = 11;
		tp->mtable->mleaf[0].leafdata = &leafdata[0];
		tp->flags |= HAS_PHY_IRQ;
		tp->csr12_shadow = -1;
	}
#endif
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
          int _len_tp0 = 1;
          struct tulip_private * tp = (struct tulip_private *) malloc(_len_tp0*sizeof(struct tulip_private));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tulip_build_fake_mediatable(tp);
          free(tp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_tp0 = 100;
          struct tulip_private * tp = (struct tulip_private *) malloc(_len_tp0*sizeof(struct tulip_private));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tulip_build_fake_mediatable(tp);
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
