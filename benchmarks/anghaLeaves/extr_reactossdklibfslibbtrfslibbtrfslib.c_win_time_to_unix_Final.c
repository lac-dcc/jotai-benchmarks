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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int ULONGLONG ;
struct TYPE_6__ {int seconds; int nanoseconds; } ;
struct TYPE_5__ {int QuadPart; } ;
typedef  TYPE_1__ LARGE_INTEGER ;
typedef  TYPE_2__ BTRFS_TIME ;

/* Variables and functions */

__attribute__((used)) static __inline void win_time_to_unix(LARGE_INTEGER t, BTRFS_TIME* out) {
    ULONGLONG l = t.QuadPart - 116444736000000000;

    out->seconds = l / 10000000;
    out->nanoseconds = (l % 10000000) * 100;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          struct TYPE_5__ t;
          t.QuadPart = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 65025;
          struct TYPE_6__ * out = (struct TYPE_6__ *) malloc(_len_out0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              out[_i0].seconds = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].nanoseconds = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          win_time_to_unix(t,out);
          free(out);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          struct TYPE_5__ t;
          t.QuadPart = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 100;
          struct TYPE_6__ * out = (struct TYPE_6__ *) malloc(_len_out0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              out[_i0].seconds = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].nanoseconds = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          win_time_to_unix(t,out);
          free(out);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          struct TYPE_5__ t;
          t.QuadPart = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 1;
          struct TYPE_6__ * out = (struct TYPE_6__ *) malloc(_len_out0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              out[_i0].seconds = ((-2 * (next_i()%2)) + 1) * next_i();
          out[_i0].nanoseconds = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          win_time_to_unix(t,out);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
