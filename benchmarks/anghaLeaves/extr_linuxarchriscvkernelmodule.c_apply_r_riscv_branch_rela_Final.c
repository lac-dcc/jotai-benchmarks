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
typedef  int u32 ;
struct module {int dummy; } ;
typedef  int ptrdiff_t ;
typedef  scalar_t__ Elf_Addr ;

/* Variables and functions */

__attribute__((used)) static int apply_r_riscv_branch_rela(struct module *me, u32 *location,
				     Elf_Addr v)
{
	ptrdiff_t offset = (void *)v - (void *)location;
	u32 imm12 = (offset & 0x1000) << (31 - 12);
	u32 imm11 = (offset & 0x800) >> (11 - 7);
	u32 imm10_5 = (offset & 0x7e0) << (30 - 10);
	u32 imm4_1 = (offset & 0x1e) << (11 - 4);

	*location = (*location & 0x1fff07f) | imm12 | imm11 | imm10_5 | imm4_1;
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

    // int-bounds
    case 0:
    {
          long v = 100;
        
          int _len_me0 = 1;
          struct module * me = (struct module *) malloc(_len_me0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
              me[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_location0 = 1;
          int * location = (int *) malloc(_len_location0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_location0; _i0++) {
            location[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = apply_r_riscv_branch_rela(me,location,v);
          printf("%d\n", benchRet); 
          free(me);
          free(location);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
