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
struct dso {char* long_name; scalar_t__ kernel; } ;

/* Variables and functions */

__attribute__((used)) static inline bool dso__is_kallsyms(struct dso *dso)
{
	return dso->kernel && dso->long_name[0] != '/';
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_dso0 = 65025;
          struct dso * dso = (struct dso *) malloc(_len_dso0*sizeof(struct dso));
          for(int _i0 = 0; _i0 < _len_dso0; _i0++) {
              int _len_dso__i0__long_name0 = 1;
          dso[_i0].long_name = (char *) malloc(_len_dso__i0__long_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_dso__i0__long_name0; _j0++) {
            dso[_i0].long_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dso[_i0].kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = dso__is_kallsyms(dso);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dso0; _aux++) {
          free(dso[_aux].long_name);
          }
          free(dso);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_dso0 = 100;
          struct dso * dso = (struct dso *) malloc(_len_dso0*sizeof(struct dso));
          for(int _i0 = 0; _i0 < _len_dso0; _i0++) {
              int _len_dso__i0__long_name0 = 1;
          dso[_i0].long_name = (char *) malloc(_len_dso__i0__long_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_dso__i0__long_name0; _j0++) {
            dso[_i0].long_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dso[_i0].kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = dso__is_kallsyms(dso);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dso0; _aux++) {
          free(dso[_aux].long_name);
          }
          free(dso);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_dso0 = 1;
          struct dso * dso = (struct dso *) malloc(_len_dso0*sizeof(struct dso));
          for(int _i0 = 0; _i0 < _len_dso0; _i0++) {
              int _len_dso__i0__long_name0 = 1;
          dso[_i0].long_name = (char *) malloc(_len_dso__i0__long_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_dso__i0__long_name0; _j0++) {
            dso[_i0].long_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dso[_i0].kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = dso__is_kallsyms(dso);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dso0; _aux++) {
          free(dso[_aux].long_name);
          }
          free(dso);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
