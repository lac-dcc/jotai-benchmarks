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
typedef  scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ memid; } ;
struct TYPE_6__ {TYPE_1__ funcdesc; } ;
typedef  TYPE_2__ TLBFuncDesc ;
typedef  scalar_t__ MEMBERID ;

/* Variables and functions */

__attribute__((used)) static inline TLBFuncDesc *TLB_get_funcdesc_by_memberid(TLBFuncDesc *funcdescs,
        UINT n, MEMBERID memid)
{
    while(n){
        if(funcdescs->funcdesc.memid == memid)
            return funcdescs;
        ++funcdescs;
        --n;
    }
    return NULL;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 3326
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 1284
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 1284
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 1284
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 1284
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 1283
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1793
          // ------------------------------- 

          long n = 255;
        
          long memid = 255;
        
          int _len_funcdescs0 = 65025;
          struct TYPE_6__ * funcdescs = (struct TYPE_6__ *) malloc(_len_funcdescs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_funcdescs0; _i0++) {
              funcdescs[_i0].funcdesc.memid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct TYPE_6__ * benchRet = TLB_get_funcdesc_by_memberid(funcdescs,n,memid);
          free(funcdescs);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 141
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 59
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 58
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 78
          // ------------------------------- 

          long n = 10;
        
          long memid = 10;
        
          int _len_funcdescs0 = 100;
          struct TYPE_6__ * funcdescs = (struct TYPE_6__ *) malloc(_len_funcdescs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_funcdescs0; _i0++) {
              funcdescs[_i0].funcdesc.memid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct TYPE_6__ * benchRet = TLB_get_funcdesc_by_memberid(funcdescs,n,memid);
          free(funcdescs);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          long n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long memid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_funcdescs0 = 1;
          struct TYPE_6__ * funcdescs = (struct TYPE_6__ *) malloc(_len_funcdescs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_funcdescs0; _i0++) {
              funcdescs[_i0].funcdesc.memid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct TYPE_6__ * benchRet = TLB_get_funcdesc_by_memberid(funcdescs,n,memid);
          free(funcdescs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
