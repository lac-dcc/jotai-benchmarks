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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t index_type ;
typedef  scalar_t__ char_type ;
struct TYPE_6__ {scalar_t__ ch; } ;
struct TYPE_5__ {int attrs; } ;
typedef  TYPE_1__ GPUCell ;
typedef  TYPE_2__ CPUCell ;

/* Variables and functions */

__attribute__((used)) static inline void
clear_chars_in_line(CPUCell *cpu_cells, GPUCell *gpu_cells, index_type xnum, char_type ch) {
    // Clear only the char part of each cell, the rest must have been cleared by a memset or similar
    if (ch) {
        for (index_type i = 0; i < xnum; i++) { cpu_cells[i].ch = ch; gpu_cells[i].attrs = 1; }
    }
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
          unsigned long xnum = 255;
        
          long ch = 255;
        
          int _len_cpu_cells0 = 65025;
          struct TYPE_6__ * cpu_cells = (struct TYPE_6__ *) malloc(_len_cpu_cells0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cpu_cells0; _i0++) {
              cpu_cells[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_gpu_cells0 = 65025;
          struct TYPE_5__ * gpu_cells = (struct TYPE_5__ *) malloc(_len_gpu_cells0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_gpu_cells0; _i0++) {
              gpu_cells[_i0].attrs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          clear_chars_in_line(cpu_cells,gpu_cells,xnum,ch);
          free(cpu_cells);
          free(gpu_cells);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long xnum = 10;
        
          long ch = 10;
        
          int _len_cpu_cells0 = 100;
          struct TYPE_6__ * cpu_cells = (struct TYPE_6__ *) malloc(_len_cpu_cells0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cpu_cells0; _i0++) {
              cpu_cells[_i0].ch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_gpu_cells0 = 100;
          struct TYPE_5__ * gpu_cells = (struct TYPE_5__ *) malloc(_len_gpu_cells0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_gpu_cells0; _i0++) {
              gpu_cells[_i0].attrs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          clear_chars_in_line(cpu_cells,gpu_cells,xnum,ch);
          free(cpu_cells);
          free(gpu_cells);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
