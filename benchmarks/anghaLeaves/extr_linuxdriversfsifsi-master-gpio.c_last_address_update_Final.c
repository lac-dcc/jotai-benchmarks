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
typedef  int uint32_t ;
struct fsi_master_gpio {int last_addr; } ;

/* Variables and functions */
 int LAST_ADDR_INVALID ; 

__attribute__((used)) static void last_address_update(struct fsi_master_gpio *master,
		int id, bool valid, uint32_t addr)
{
	if (!valid)
		master->last_addr = LAST_ADDR_INVALID;
	else
		master->last_addr = ((id & 0x3) << 21) | (addr & ~0x3);
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
          int valid = 100;
          int addr = 100;
          int _len_master0 = 1;
          struct fsi_master_gpio * master = (struct fsi_master_gpio *) malloc(_len_master0*sizeof(struct fsi_master_gpio));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
            master[_i0].last_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          last_address_update(master,id,valid,addr);
          free(master);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int id = 10;
          int valid = 10;
          int addr = 10;
          int _len_master0 = 100;
          struct fsi_master_gpio * master = (struct fsi_master_gpio *) malloc(_len_master0*sizeof(struct fsi_master_gpio));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
            master[_i0].last_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          last_address_update(master,id,valid,addr);
          free(master);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
