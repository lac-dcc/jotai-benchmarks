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
struct b43_wl {int if_type; scalar_t__ operating; } ;

/* Variables and functions */

__attribute__((used)) static inline int b43_is_mode(struct b43_wl *wl, int type)
{
	return (wl->operating && wl->if_type == type);
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 100;
        
          int _len_wl0 = 1;
          struct b43_wl * wl = (struct b43_wl *) malloc(_len_wl0*sizeof(struct b43_wl));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              wl[_i0].if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          wl[_i0].operating = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = b43_is_mode(wl,type);
          printf("%d\n", benchRet); 
          free(wl);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 255;
        
          int _len_wl0 = 65025;
          struct b43_wl * wl = (struct b43_wl *) malloc(_len_wl0*sizeof(struct b43_wl));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              wl[_i0].if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          wl[_i0].operating = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = b43_is_mode(wl,type);
          printf("%d\n", benchRet); 
          free(wl);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 10;
        
          int _len_wl0 = 100;
          struct b43_wl * wl = (struct b43_wl *) malloc(_len_wl0*sizeof(struct b43_wl));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              wl[_i0].if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          wl[_i0].operating = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = b43_is_mode(wl,type);
          printf("%d\n", benchRet); 
          free(wl);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_wl0 = 1;
          struct b43_wl * wl = (struct b43_wl *) malloc(_len_wl0*sizeof(struct b43_wl));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              wl[_i0].if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          wl[_i0].operating = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = b43_is_mode(wl,type);
          printf("%d\n", benchRet); 
          free(wl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
