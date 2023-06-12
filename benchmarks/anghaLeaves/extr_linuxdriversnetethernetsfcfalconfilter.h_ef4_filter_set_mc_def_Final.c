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
struct ef4_filter_spec {int* loc_mac; int /*<<< orphan*/  match_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  EF4_FILTER_MATCH_LOC_MAC_IG ; 

__attribute__((used)) static inline int ef4_filter_set_mc_def(struct ef4_filter_spec *spec)
{
	spec->match_flags |= EF4_FILTER_MATCH_LOC_MAC_IG;
	spec->loc_mac[0] = 1;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_spec0 = 65025;
          struct ef4_filter_spec * spec = (struct ef4_filter_spec *) malloc(_len_spec0*sizeof(struct ef4_filter_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
              int _len_spec__i0__loc_mac0 = 1;
          spec[_i0].loc_mac = (int *) malloc(_len_spec__i0__loc_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spec__i0__loc_mac0; _j0++) {
            spec[_i0].loc_mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          spec[_i0].match_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ef4_filter_set_mc_def(spec);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spec0; _aux++) {
          free(spec[_aux].loc_mac);
          }
          free(spec);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_spec0 = 100;
          struct ef4_filter_spec * spec = (struct ef4_filter_spec *) malloc(_len_spec0*sizeof(struct ef4_filter_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
              int _len_spec__i0__loc_mac0 = 1;
          spec[_i0].loc_mac = (int *) malloc(_len_spec__i0__loc_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spec__i0__loc_mac0; _j0++) {
            spec[_i0].loc_mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          spec[_i0].match_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ef4_filter_set_mc_def(spec);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spec0; _aux++) {
          free(spec[_aux].loc_mac);
          }
          free(spec);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_spec0 = 1;
          struct ef4_filter_spec * spec = (struct ef4_filter_spec *) malloc(_len_spec0*sizeof(struct ef4_filter_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
              int _len_spec__i0__loc_mac0 = 1;
          spec[_i0].loc_mac = (int *) malloc(_len_spec__i0__loc_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_spec__i0__loc_mac0; _j0++) {
            spec[_i0].loc_mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          spec[_i0].match_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ef4_filter_set_mc_def(spec);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spec0; _aux++) {
          free(spec[_aux].loc_mac);
          }
          free(spec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
