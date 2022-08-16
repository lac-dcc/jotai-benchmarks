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
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct consistent_dma_area {int /*<<< orphan*/  dma_handle; } ;

/* Variables and functions */

__attribute__((used)) static inline u16 hpios_locked_mem_get_phys_addr(struct consistent_dma_area
	*locked_mem_handle, u32 *p_physical_addr)
{
	*p_physical_addr = locked_mem_handle->dma_handle;
	return 0;
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
          int _len_locked_mem_handle0 = 1;
          struct consistent_dma_area * locked_mem_handle = (struct consistent_dma_area *) malloc(_len_locked_mem_handle0*sizeof(struct consistent_dma_area));
          for(int _i0 = 0; _i0 < _len_locked_mem_handle0; _i0++) {
            locked_mem_handle[_i0].dma_handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_physical_addr0 = 1;
          int * p_physical_addr = (int *) malloc(_len_p_physical_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_physical_addr0; _i0++) {
            p_physical_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hpios_locked_mem_get_phys_addr(locked_mem_handle,p_physical_addr);
          printf("%d\n", benchRet); 
          free(locked_mem_handle);
          free(p_physical_addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
