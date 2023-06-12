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
struct TYPE_5__ {scalar_t__ cfFormat; } ;
struct TYPE_6__ {TYPE_1__ fmtetc; } ;
typedef  TYPE_2__ ole_priv_data_entry ;
typedef  scalar_t__ UINT ;
typedef  size_t DWORD ;

/* Variables and functions */

__attribute__((used)) static inline ole_priv_data_entry *find_format_in_list(ole_priv_data_entry *entries, DWORD num, UINT cf)
{
    DWORD i;
    for(i = 0; i < num; i++)
        if(entries[i].fmtetc.cfFormat == cf)
            return &entries[i];

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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 3328
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

          unsigned long num = 255;
        
          long cf = 255;
        
          int _len_entries0 = 65025;
          struct TYPE_6__ * entries = (struct TYPE_6__ *) malloc(_len_entries0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
              entries[_i0].fmtetc.cfFormat = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct TYPE_6__ * benchRet = find_format_in_list(entries,num,cf);
          free(entries);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 143
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

          unsigned long num = 10;
        
          long cf = 10;
        
          int _len_entries0 = 100;
          struct TYPE_6__ * entries = (struct TYPE_6__ *) malloc(_len_entries0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
              entries[_i0].fmtetc.cfFormat = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct TYPE_6__ * benchRet = find_format_in_list(entries,num,cf);
          free(entries);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long cf = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_entries0 = 1;
          struct TYPE_6__ * entries = (struct TYPE_6__ *) malloc(_len_entries0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
              entries[_i0].fmtetc.cfFormat = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct TYPE_6__ * benchRet = find_format_in_list(entries,num,cf);
          free(entries);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
