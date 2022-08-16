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

/* Variables and functions */
 int free_mem_addr ; 

uint32_t kmalloc(size_t size, int align, uint32_t *phys_addr) {
    /* Pages are aligned to 4K, or 0x1000 */
    if (align == 1 && (free_mem_addr & 0xFFFFF000)) {
        free_mem_addr &= 0xFFFFF000;
        free_mem_addr += 0x1000;
    }
    /* Save also the physical address */
    if (phys_addr) *phys_addr = free_mem_addr;

    uint32_t ret = free_mem_addr;
    free_mem_addr += size; /* Remember to increment the pointer */
    return ret;
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
          unsigned long size = 100;
          int align = 100;
          int _len_phys_addr0 = 1;
          int * phys_addr = (int *) malloc(_len_phys_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_addr0; _i0++) {
            phys_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kmalloc(size,align,phys_addr);
          printf("%d\n", benchRet); 
          free(phys_addr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long size = 10;
          int align = 10;
          int _len_phys_addr0 = 100;
          int * phys_addr = (int *) malloc(_len_phys_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phys_addr0; _i0++) {
            phys_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kmalloc(size,align,phys_addr);
          printf("%d\n", benchRet); 
          free(phys_addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
