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
struct onenand_chip {int density_mask; } ;

/* Variables and functions */
 int ONENAND_DDP_CHIP0 ; 
 int ONENAND_DDP_CHIP1 ; 

__attribute__((used)) static int onenand_bufferram_address(struct onenand_chip *this, int block)
{
	/* Device BufferRAM Select */
	if (block & this->density_mask)
		return ONENAND_DDP_CHIP1;

	return ONENAND_DDP_CHIP0;
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
          int block = 100;
          int _len_this0 = 1;
          struct onenand_chip * this = (struct onenand_chip *) malloc(_len_this0*sizeof(struct onenand_chip));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].density_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = onenand_bufferram_address(this,block);
          printf("%d\n", benchRet); 
          free(this);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int block = 10;
          int _len_this0 = 100;
          struct onenand_chip * this = (struct onenand_chip *) malloc(_len_this0*sizeof(struct onenand_chip));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].density_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = onenand_bufferram_address(this,block);
          printf("%d\n", benchRet); 
          free(this);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
