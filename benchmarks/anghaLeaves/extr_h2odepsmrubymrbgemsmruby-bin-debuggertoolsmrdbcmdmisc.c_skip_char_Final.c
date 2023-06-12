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
typedef  int /*<<< orphan*/  mrb_bool ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static mrb_bool
skip_char(char **sp, char c)
{
  if (*sp != NULL && **sp == c) {
    ++*sp;
    return TRUE;
  }
  return FALSE;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          char c = 100;
        
          int _len_sp0 = 1;
          char ** sp = (char **) malloc(_len_sp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            int _len_sp1 = 1;
            sp[_i0] = (char *) malloc(_len_sp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sp1; _i1++) {
              sp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int benchRet = skip_char(sp,c);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sp0; i1++) {
              free(sp[i1]);
          }
          free(sp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          char c = 255;
        
          int _len_sp0 = 65025;
          char ** sp = (char **) malloc(_len_sp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            int _len_sp1 = 1;
            sp[_i0] = (char *) malloc(_len_sp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sp1; _i1++) {
              sp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int benchRet = skip_char(sp,c);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sp0; i1++) {
              free(sp[i1]);
          }
          free(sp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          char c = 10;
        
          int _len_sp0 = 100;
          char ** sp = (char **) malloc(_len_sp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            int _len_sp1 = 1;
            sp[_i0] = (char *) malloc(_len_sp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_sp1; _i1++) {
              sp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int benchRet = skip_char(sp,c);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sp0; i1++) {
              free(sp[i1]);
          }
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
