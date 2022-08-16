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
typedef  int u16 ;
struct brcmf_sdio {int roundup; int blocksize; int head_align; } ;

/* Variables and functions */
 scalar_t__ BRCMF_FIRSTREAD ; 
 scalar_t__ MAX_RX_DATASZ ; 

__attribute__((used)) static void brcmf_sdio_pad(struct brcmf_sdio *bus, u16 *pad, u16 *rdlen)
{
	if (bus->roundup && bus->blocksize && *rdlen > bus->blocksize) {
		*pad = bus->blocksize - (*rdlen % bus->blocksize);
		if (*pad <= bus->roundup && *pad < bus->blocksize &&
		    *rdlen + *pad + BRCMF_FIRSTREAD < MAX_RX_DATASZ)
			*rdlen += *pad;
	} else if (*rdlen % bus->head_align) {
		*rdlen += bus->head_align - (*rdlen % bus->head_align);
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
          int _len_bus0 = 1;
          struct brcmf_sdio * bus = (struct brcmf_sdio *) malloc(_len_bus0*sizeof(struct brcmf_sdio));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].roundup = ((-2 * (next_i()%2)) + 1) * next_i();
        bus[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
        bus[_i0].head_align = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pad0 = 1;
          int * pad = (int *) malloc(_len_pad0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pad0; _i0++) {
            pad[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdlen0 = 1;
          int * rdlen = (int *) malloc(_len_rdlen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rdlen0; _i0++) {
            rdlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmf_sdio_pad(bus,pad,rdlen);
          free(bus);
          free(pad);
          free(rdlen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
