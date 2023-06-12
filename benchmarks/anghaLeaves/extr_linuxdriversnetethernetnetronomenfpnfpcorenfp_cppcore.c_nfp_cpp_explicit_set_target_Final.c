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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  void* u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {void* byte_mask; void* len; int /*<<< orphan*/  cpp_id; } ;
struct nfp_cpp_explicit {TYPE_1__ cmd; } ;

/* Variables and functions */

int nfp_cpp_explicit_set_target(struct nfp_cpp_explicit *expl,
				u32 cpp_id, u8 len, u8 mask)
{
	expl->cmd.cpp_id = cpp_id;
	expl->cmd.len = len;
	expl->cmd.byte_mask = mask;

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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int cpp_id = 100;
        
          int _len_expl0 = 1;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.cpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * len;
        
          void * mask;
        
          int benchRet = nfp_cpp_explicit_set_target(expl,cpp_id,len,mask);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int cpp_id = 255;
        
          int _len_expl0 = 65025;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.cpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * len;
        
          void * mask;
        
          int benchRet = nfp_cpp_explicit_set_target(expl,cpp_id,len,mask);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int cpp_id = 10;
        
          int _len_expl0 = 100;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.cpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * len;
        
          void * mask;
        
          int benchRet = nfp_cpp_explicit_set_target(expl,cpp_id,len,mask);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int cpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_expl0 = 1;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
              expl[_i0].cmd.cpp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          void * len;
        
          void * mask;
        
          int benchRet = nfp_cpp_explicit_set_target(expl,cpp_id,len,mask);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
