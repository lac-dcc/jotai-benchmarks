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
struct persistent_gnt {int last_used; } ;

/* Variables and functions */
 int HZ ; 
 int jiffies ; 
 int xen_blkif_pgrant_timeout ; 

__attribute__((used)) static inline bool persistent_gnt_timeout(struct persistent_gnt *persistent_gnt)
{
	return xen_blkif_pgrant_timeout &&
	       (jiffies - persistent_gnt->last_used >=
		HZ * xen_blkif_pgrant_timeout);
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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

          int _len_persistent_gnt0 = 65025;
          struct persistent_gnt * persistent_gnt = (struct persistent_gnt *) malloc(_len_persistent_gnt0*sizeof(struct persistent_gnt));
          for(int _i0 = 0; _i0 < _len_persistent_gnt0; _i0++) {
              persistent_gnt[_i0].last_used = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = persistent_gnt_timeout(persistent_gnt);
          printf("%d\n", benchRet); 
          free(persistent_gnt);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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

          int _len_persistent_gnt0 = 100;
          struct persistent_gnt * persistent_gnt = (struct persistent_gnt *) malloc(_len_persistent_gnt0*sizeof(struct persistent_gnt));
          for(int _i0 = 0; _i0 < _len_persistent_gnt0; _i0++) {
              persistent_gnt[_i0].last_used = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = persistent_gnt_timeout(persistent_gnt);
          printf("%d\n", benchRet); 
          free(persistent_gnt);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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

          int _len_persistent_gnt0 = 1;
          struct persistent_gnt * persistent_gnt = (struct persistent_gnt *) malloc(_len_persistent_gnt0*sizeof(struct persistent_gnt));
          for(int _i0 = 0; _i0 < _len_persistent_gnt0; _i0++) {
              persistent_gnt[_i0].last_used = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = persistent_gnt_timeout(persistent_gnt);
          printf("%d\n", benchRet); 
          free(persistent_gnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
