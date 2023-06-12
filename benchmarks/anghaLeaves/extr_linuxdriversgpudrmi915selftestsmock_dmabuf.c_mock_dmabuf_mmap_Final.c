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
struct vm_area_struct {int dummy; } ;
struct dma_buf {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int mock_dmabuf_mmap(struct dma_buf *dma_buf, struct vm_area_struct *vma)
{
	return -ENODEV;
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
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_dma_buf0 = 65025;
          struct dma_buf * dma_buf = (struct dma_buf *) malloc(_len_dma_buf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dma_buf0; _i0++) {
              dma_buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vma0 = 65025;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              vma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mock_dmabuf_mmap(dma_buf,vma);
          printf("%d\n", benchRet); 
          free(dma_buf);
          free(vma);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_dma_buf0 = 100;
          struct dma_buf * dma_buf = (struct dma_buf *) malloc(_len_dma_buf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dma_buf0; _i0++) {
              dma_buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vma0 = 100;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              vma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mock_dmabuf_mmap(dma_buf,vma);
          printf("%d\n", benchRet); 
          free(dma_buf);
          free(vma);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_dma_buf0 = 1;
          struct dma_buf * dma_buf = (struct dma_buf *) malloc(_len_dma_buf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dma_buf0; _i0++) {
              dma_buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
              vma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mock_dmabuf_mmap(dma_buf,vma);
          printf("%d\n", benchRet); 
          free(dma_buf);
          free(vma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
