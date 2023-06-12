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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int /*<<< orphan*/  u16 ;
struct consistent_dma_area {void* vaddr; } ;

/* Variables and functions */

__attribute__((used)) static inline u16 hpios_locked_mem_get_virt_addr(struct consistent_dma_area
	*locked_mem_handle, void **pp_virtual_addr)
{
	*pp_virtual_addr = locked_mem_handle->vaddr;
	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_locked_mem_handle0 = 65025;
          struct consistent_dma_area * locked_mem_handle = (struct consistent_dma_area *) malloc(_len_locked_mem_handle0*sizeof(struct consistent_dma_area));
          for(int _i0 = 0; _i0 < _len_locked_mem_handle0; _i0++) {
            
          }
        
          int _len_pp_virtual_addr0 = 65025;
          void ** pp_virtual_addr = (void **) malloc(_len_pp_virtual_addr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_pp_virtual_addr0; _i0++) {
          }
        
          int benchRet = hpios_locked_mem_get_virt_addr(locked_mem_handle,pp_virtual_addr);
          printf("%d\n", benchRet); 
          free(locked_mem_handle);
          for(int i1 = 0; i1 < _len_pp_virtual_addr0; i1++) {
              }
          free(pp_virtual_addr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_locked_mem_handle0 = 100;
          struct consistent_dma_area * locked_mem_handle = (struct consistent_dma_area *) malloc(_len_locked_mem_handle0*sizeof(struct consistent_dma_area));
          for(int _i0 = 0; _i0 < _len_locked_mem_handle0; _i0++) {
            
          }
        
          int _len_pp_virtual_addr0 = 100;
          void ** pp_virtual_addr = (void **) malloc(_len_pp_virtual_addr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_pp_virtual_addr0; _i0++) {
          }
        
          int benchRet = hpios_locked_mem_get_virt_addr(locked_mem_handle,pp_virtual_addr);
          printf("%d\n", benchRet); 
          free(locked_mem_handle);
          for(int i1 = 0; i1 < _len_pp_virtual_addr0; i1++) {
              }
          free(pp_virtual_addr);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_locked_mem_handle0 = 1;
          struct consistent_dma_area * locked_mem_handle = (struct consistent_dma_area *) malloc(_len_locked_mem_handle0*sizeof(struct consistent_dma_area));
          for(int _i0 = 0; _i0 < _len_locked_mem_handle0; _i0++) {
            
          }
        
          int _len_pp_virtual_addr0 = 1;
          void ** pp_virtual_addr = (void **) malloc(_len_pp_virtual_addr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_pp_virtual_addr0; _i0++) {
          }
        
          int benchRet = hpios_locked_mem_get_virt_addr(locked_mem_handle,pp_virtual_addr);
          printf("%d\n", benchRet); 
          free(locked_mem_handle);
          for(int i1 = 0; i1 < _len_pp_virtual_addr0; i1++) {
              }
          free(pp_virtual_addr);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
