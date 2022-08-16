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
typedef  int uint32_t ;
struct fsi_master_acf {int last_addr; } ;
typedef  int int32_t ;

/* Variables and functions */
 int LAST_ADDR_INVALID ; 

__attribute__((used)) static bool check_relative_address(struct fsi_master_acf *master, int id,
				   uint32_t addr, uint32_t *rel_addrp)
{
	uint32_t last_addr = master->last_addr;
	int32_t rel_addr;

	if (last_addr == LAST_ADDR_INVALID)
		return false;

	/* We may be in 23-bit addressing mode, which uses the id as the
	 * top two address bits. So, if we're referencing a different ID,
	 * use absolute addresses.
	 */
	if (((last_addr >> 21) & 0x3) != id)
		return false;

	/* remove the top two bits from any 23-bit addressing */
	last_addr &= (1 << 21) - 1;

	/* We know that the addresses are limited to 21 bits, so this won't
	 * overflow the signed rel_addr */
	rel_addr = addr - last_addr;
	if (rel_addr > 255 || rel_addr < -256)
		return false;

	*rel_addrp = (uint32_t)rel_addr;

	return true;
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
          int id = 100;
          int addr = 100;
          int _len_master0 = 1;
          struct fsi_master_acf * master = (struct fsi_master_acf *) malloc(_len_master0*sizeof(struct fsi_master_acf));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
            master[_i0].last_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rel_addrp0 = 1;
          int * rel_addrp = (int *) malloc(_len_rel_addrp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rel_addrp0; _i0++) {
            rel_addrp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_relative_address(master,id,addr,rel_addrp);
          printf("%d\n", benchRet); 
          free(master);
          free(rel_addrp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
