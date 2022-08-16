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
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ dsp_dram_offset; scalar_t__ dram_offset; scalar_t__ dsp_iram_offset; scalar_t__ iram_offset; } ;
struct sst_dsp {TYPE_1__ addr; } ;
typedef  enum sst_mem_type { ____Placeholder_sst_mem_type } sst_mem_type ;

/* Variables and functions */
#define  SST_MEM_DRAM 129 
#define  SST_MEM_IRAM 128 

u32 sst_dsp_get_offset(struct sst_dsp *dsp, u32 offset,
	enum sst_mem_type type)
{
	switch (type) {
	case SST_MEM_IRAM:
		return offset - dsp->addr.iram_offset +
			dsp->addr.dsp_iram_offset;
	case SST_MEM_DRAM:
		return offset - dsp->addr.dram_offset +
			dsp->addr.dsp_dram_offset;
	default:
		return 0;
	}
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
          long offset = 100;
          enum sst_mem_type type = 0;
          int _len_dsp0 = 1;
          struct sst_dsp * dsp = (struct sst_dsp *) malloc(_len_dsp0*sizeof(struct sst_dsp));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
            dsp[_i0].addr.dsp_dram_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp[_i0].addr.dram_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp[_i0].addr.dsp_iram_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp[_i0].addr.iram_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = sst_dsp_get_offset(dsp,offset,type);
          printf("%ld\n", benchRet); 
          free(dsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
