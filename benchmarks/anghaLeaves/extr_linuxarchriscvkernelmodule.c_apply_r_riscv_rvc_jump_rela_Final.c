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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u16 ;
struct module {int dummy; } ;
typedef  int ptrdiff_t ;
typedef  scalar_t__ Elf_Addr ;

/* Variables and functions */

__attribute__((used)) static int apply_r_riscv_rvc_jump_rela(struct module *me, u32 *location,
				       Elf_Addr v)
{
	ptrdiff_t offset = (void *)v - (void *)location;
	u16 imm11 = (offset & 0x800) << (12 - 11);
	u16 imm10 = (offset & 0x400) >> (10 - 8);
	u16 imm9_8 = (offset & 0x300) << (12 - 11);
	u16 imm7 = (offset & 0x80) >> (7 - 6);
	u16 imm6 = (offset & 0x40) << (12 - 11);
	u16 imm5 = (offset & 0x20) >> (5 - 2);
	u16 imm4 = (offset & 0x10) << (12 - 5);
	u16 imm3_1 = (offset & 0xe) << (12 - 10);

	*(u16 *)location = (*(u16 *)location & 0xe003) |
		    imm11 | imm10 | imm9_8 | imm7 | imm6 | imm5 | imm4 | imm3_1;
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
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 37
          // dynamic_instructions_Os : 37
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

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
        
          int benchRet = apply_r_riscv_rvc_jump_rela(me,location,v);
          printf("%d\n", benchRet); 
          free(me);
          free(location);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 37
          // dynamic_instructions_Os : 37
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          long v = 255;
        
          int _len_me0 = 65025;
          struct module * me = (struct module *) malloc(_len_me0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
              me[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_location0 = 65025;
          int * location = (int *) malloc(_len_location0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_location0; _i0++) {
            location[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = apply_r_riscv_rvc_jump_rela(me,location,v);
          printf("%d\n", benchRet); 
          free(me);
          free(location);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 37
          // dynamic_instructions_Os : 37
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          long v = 10;
        
          int _len_me0 = 100;
          struct module * me = (struct module *) malloc(_len_me0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
              me[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_location0 = 100;
          int * location = (int *) malloc(_len_location0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_location0; _i0++) {
            location[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = apply_r_riscv_rvc_jump_rela(me,location,v);
          printf("%d\n", benchRet); 
          free(me);
          free(location);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 37
          // dynamic_instructions_Os : 37
          // ------------------------------- 
          // static_instructions_Oz : 37
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          long v = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
        
          int benchRet = apply_r_riscv_rvc_jump_rela(me,location,v);
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
