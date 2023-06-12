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
struct tape390_kekl {scalar_t__ type; scalar_t__ type_on_tape; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ TAPE390_KEKL_TYPE_HASH ; 
 scalar_t__ TAPE390_KEKL_TYPE_LABEL ; 
 scalar_t__ TAPE390_KEKL_TYPE_NONE ; 

__attribute__((used)) static int check_ext_kekl(struct tape390_kekl *kekl)
{
	if (kekl->type == TAPE390_KEKL_TYPE_NONE)
		goto invalid;
	if (kekl->type > TAPE390_KEKL_TYPE_HASH)
		goto invalid;
	if (kekl->type_on_tape == TAPE390_KEKL_TYPE_NONE)
		goto invalid;
	if (kekl->type_on_tape > TAPE390_KEKL_TYPE_HASH)
		goto invalid;
	if ((kekl->type == TAPE390_KEKL_TYPE_HASH) &&
	    (kekl->type_on_tape == TAPE390_KEKL_TYPE_LABEL))
		goto invalid;

	return 0;
invalid:
	return -EINVAL;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_kekl0 = 65025;
          struct tape390_kekl * kekl = (struct tape390_kekl *) malloc(_len_kekl0*sizeof(struct tape390_kekl));
          for(int _i0 = 0; _i0 < _len_kekl0; _i0++) {
              kekl[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          kekl[_i0].type_on_tape = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_ext_kekl(kekl);
          printf("%d\n", benchRet); 
          free(kekl);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_kekl0 = 100;
          struct tape390_kekl * kekl = (struct tape390_kekl *) malloc(_len_kekl0*sizeof(struct tape390_kekl));
          for(int _i0 = 0; _i0 < _len_kekl0; _i0++) {
              kekl[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          kekl[_i0].type_on_tape = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_ext_kekl(kekl);
          printf("%d\n", benchRet); 
          free(kekl);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_kekl0 = 1;
          struct tape390_kekl * kekl = (struct tape390_kekl *) malloc(_len_kekl0*sizeof(struct tape390_kekl));
          for(int _i0 = 0; _i0 < _len_kekl0; _i0++) {
              kekl[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          kekl[_i0].type_on_tape = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_ext_kekl(kekl);
          printf("%d\n", benchRet); 
          free(kekl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
