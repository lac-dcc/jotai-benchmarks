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
typedef  int /*<<< orphan*/  uint32_t ;
struct ttm_mem_reg {scalar_t__ mem_type; } ;
struct ttm_buffer_object {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  handle; } ;
struct nouveau_channel {TYPE_1__ vram; } ;

/* Variables and functions */
 int /*<<< orphan*/  NvDmaTT ; 
 scalar_t__ TTM_PL_TT ; 

__attribute__((used)) static inline uint32_t
nouveau_bo_mem_ctxdma(struct ttm_buffer_object *bo,
		      struct nouveau_channel *chan, struct ttm_mem_reg *reg)
{
	if (reg->mem_type == TTM_PL_TT)
		return NvDmaTT;
	return chan->vram.handle;
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
          int _len_bo0 = 1;
          struct ttm_buffer_object * bo = (struct ttm_buffer_object *) malloc(_len_bo0*sizeof(struct ttm_buffer_object));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 1;
          struct nouveau_channel * chan = (struct nouveau_channel *) malloc(_len_chan0*sizeof(struct nouveau_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].vram.handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 1;
          struct ttm_mem_reg * reg = (struct ttm_mem_reg *) malloc(_len_reg0*sizeof(struct ttm_mem_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].mem_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nouveau_bo_mem_ctxdma(bo,chan,reg);
          printf("%d\n", benchRet); 
          free(bo);
          free(chan);
          free(reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
