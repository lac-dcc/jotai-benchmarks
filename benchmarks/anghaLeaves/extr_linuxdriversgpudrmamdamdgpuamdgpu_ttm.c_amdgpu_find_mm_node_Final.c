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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct ttm_mem_reg {struct drm_mm_node* mm_node; } ;
struct drm_mm_node {unsigned long size; } ;

/* Variables and functions */
 unsigned long PAGE_SHIFT ; 

__attribute__((used)) static struct drm_mm_node *amdgpu_find_mm_node(struct ttm_mem_reg *mem,
					       unsigned long *offset)
{
	struct drm_mm_node *mm_node = mem->mm_node;

	while (*offset >= (mm_node->size << PAGE_SHIFT)) {
		*offset -= (mm_node->size << PAGE_SHIFT);
		++mm_node;
	}
	return mm_node;
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
          int _len_mem0 = 1;
          struct ttm_mem_reg * mem = (struct ttm_mem_reg *) malloc(_len_mem0*sizeof(struct ttm_mem_reg));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
              int _len_mem__i0__mm_node0 = 1;
          mem[_i0].mm_node = (struct drm_mm_node *) malloc(_len_mem__i0__mm_node0*sizeof(struct drm_mm_node));
          for(int _j0 = 0; _j0 < _len_mem__i0__mm_node0; _j0++) {
            mem[_i0].mm_node->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_offset0 = 1;
          unsigned long * offset = (unsigned long *) malloc(_len_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct drm_mm_node * benchRet = amdgpu_find_mm_node(mem,offset);
          printf("%lu\n", (*benchRet).size);
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(mem[_aux].mm_node);
          }
          free(mem);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
