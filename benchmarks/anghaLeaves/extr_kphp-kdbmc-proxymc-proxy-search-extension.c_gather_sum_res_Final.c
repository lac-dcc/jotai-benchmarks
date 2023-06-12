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
struct gather_entry {int res_read; int* data; } ;

/* Variables and functions */
 int /*<<< orphan*/ * R ; 

__attribute__((used)) static void gather_sum_res (struct gather_entry *GE, int limit) {
  int cnt = (GE->res_read >> 2) - 1;
  int *ptr = GE->data;
  int i;

  if (cnt > limit) { cnt = limit; }
  for (i = 0; i < cnt; i++) {
    R[i] += *ptr++;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
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
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int limit = 100;
        
          int _len_GE0 = 1;
          struct gather_entry * GE = (struct gather_entry *) malloc(_len_GE0*sizeof(struct gather_entry));
          for(int _i0 = 0; _i0 < _len_GE0; _i0++) {
              GE[_i0].res_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_GE__i0__data0 = 1;
          GE[_i0].data = (int *) malloc(_len_GE__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_GE__i0__data0; _j0++) {
            GE[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          gather_sum_res(GE,limit);
          for(int _aux = 0; _aux < _len_GE0; _aux++) {
          free(GE[_aux].data);
          }
          free(GE);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
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
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int limit = 255;
        
          int _len_GE0 = 65025;
          struct gather_entry * GE = (struct gather_entry *) malloc(_len_GE0*sizeof(struct gather_entry));
          for(int _i0 = 0; _i0 < _len_GE0; _i0++) {
              GE[_i0].res_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_GE__i0__data0 = 1;
          GE[_i0].data = (int *) malloc(_len_GE__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_GE__i0__data0; _j0++) {
            GE[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          gather_sum_res(GE,limit);
          for(int _aux = 0; _aux < _len_GE0; _aux++) {
          free(GE[_aux].data);
          }
          free(GE);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
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
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int limit = 10;
        
          int _len_GE0 = 100;
          struct gather_entry * GE = (struct gather_entry *) malloc(_len_GE0*sizeof(struct gather_entry));
          for(int _i0 = 0; _i0 < _len_GE0; _i0++) {
              GE[_i0].res_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_GE__i0__data0 = 1;
          GE[_i0].data = (int *) malloc(_len_GE__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_GE__i0__data0; _j0++) {
            GE[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          gather_sum_res(GE,limit);
          for(int _aux = 0; _aux < _len_GE0; _aux++) {
          free(GE[_aux].data);
          }
          free(GE);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
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
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_GE0 = 1;
          struct gather_entry * GE = (struct gather_entry *) malloc(_len_GE0*sizeof(struct gather_entry));
          for(int _i0 = 0; _i0 < _len_GE0; _i0++) {
              GE[_i0].res_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_GE__i0__data0 = 1;
          GE[_i0].data = (int *) malloc(_len_GE__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_GE__i0__data0; _j0++) {
            GE[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          gather_sum_res(GE,limit);
          for(int _aux = 0; _aux < _len_GE0; _aux++) {
          free(GE[_aux].data);
          }
          free(GE);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
