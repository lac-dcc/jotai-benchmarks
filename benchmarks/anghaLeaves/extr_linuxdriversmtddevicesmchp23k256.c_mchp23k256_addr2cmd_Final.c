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
typedef  unsigned int u8 ;
struct mchp23k256_flash {TYPE_1__* caps; } ;
struct TYPE_2__ {int addr_width; } ;

/* Variables and functions */

__attribute__((used)) static void mchp23k256_addr2cmd(struct mchp23k256_flash *flash,
				unsigned int addr, u8 *cmd)
{
	int i;

	/*
	 * Address is sent in big endian (MSB first) and we skip
	 * the first entry of the cmd array which contains the cmd
	 * opcode.
	 */
	for (i = flash->caps->addr_width; i > 0; i--, addr >>= 8)
		cmd[i] = addr;
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
          unsigned int addr = 100;
          int _len_flash0 = 1;
          struct mchp23k256_flash * flash = (struct mchp23k256_flash *) malloc(_len_flash0*sizeof(struct mchp23k256_flash));
          for(int _i0 = 0; _i0 < _len_flash0; _i0++) {
              int _len_flash__i0__caps0 = 1;
          flash[_i0].caps = (struct TYPE_2__ *) malloc(_len_flash__i0__caps0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_flash__i0__caps0; _j0++) {
            flash[_i0].caps->addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd0 = 1;
          unsigned int * cmd = (unsigned int *) malloc(_len_cmd0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mchp23k256_addr2cmd(flash,addr,cmd);
          for(int _aux = 0; _aux < _len_flash0; _aux++) {
          free(flash[_aux].caps);
          }
          free(flash);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
