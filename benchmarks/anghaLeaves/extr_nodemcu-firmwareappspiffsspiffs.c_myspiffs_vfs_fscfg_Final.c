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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  sint32_t ;
struct TYPE_3__ {int /*<<< orphan*/  phys_size; int /*<<< orphan*/  phys_addr; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;

/* Variables and functions */
 int /*<<< orphan*/  VFS_RES_OK ; 
 TYPE_2__ fs ; 

__attribute__((used)) static sint32_t myspiffs_vfs_fscfg( uint32_t *phys_addr, uint32_t *phys_size ) {
  *phys_addr = fs.cfg.phys_addr;
  *phys_size = fs.cfg.phys_size;
  return VFS_RES_OK;
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
          int _len_phys_addr0 = 1;
          int * phys_addr = (int *) malloc(_len_phys_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_addr0; _i0++) {
            phys_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phys_size0 = 1;
          int * phys_size = (int *) malloc(_len_phys_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_size0; _i0++) {
            phys_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = myspiffs_vfs_fscfg(phys_addr,phys_size);
          printf("%d\n", benchRet); 
          free(phys_addr);
          free(phys_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
