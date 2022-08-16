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
typedef  int utf8proc_bool ;

/* Variables and functions */
 int UTF8PROC_BOUNDCLASS_CONTROL ; 
 int UTF8PROC_BOUNDCLASS_CR ; 
 int UTF8PROC_BOUNDCLASS_EXTEND ; 
 int UTF8PROC_BOUNDCLASS_E_BASE ; 
 int UTF8PROC_BOUNDCLASS_E_BASE_GAZ ; 
 int UTF8PROC_BOUNDCLASS_E_MODIFIER ; 
 int UTF8PROC_BOUNDCLASS_GLUE_AFTER_ZWJ ; 
 int UTF8PROC_BOUNDCLASS_L ; 
 int UTF8PROC_BOUNDCLASS_LF ; 
 int UTF8PROC_BOUNDCLASS_LV ; 
 int UTF8PROC_BOUNDCLASS_LVT ; 
 int UTF8PROC_BOUNDCLASS_PREPEND ; 
 int UTF8PROC_BOUNDCLASS_REGIONAL_INDICATOR ; 
 int UTF8PROC_BOUNDCLASS_SPACINGMARK ; 
 int UTF8PROC_BOUNDCLASS_START ; 
 int UTF8PROC_BOUNDCLASS_T ; 
 int UTF8PROC_BOUNDCLASS_V ; 
 int UTF8PROC_BOUNDCLASS_ZWJ ; 

__attribute__((used)) static utf8proc_bool grapheme_break_simple(int lbc, int tbc) {
  return
    (lbc == UTF8PROC_BOUNDCLASS_START) ? true :       // GB1
    (lbc == UTF8PROC_BOUNDCLASS_CR &&                 // GB3
     tbc == UTF8PROC_BOUNDCLASS_LF) ? false :         // ---
    (lbc >= UTF8PROC_BOUNDCLASS_CR && lbc <= UTF8PROC_BOUNDCLASS_CONTROL) ? true :  // GB4
    (tbc >= UTF8PROC_BOUNDCLASS_CR && tbc <= UTF8PROC_BOUNDCLASS_CONTROL) ? true :  // GB5
    (lbc == UTF8PROC_BOUNDCLASS_L &&                  // GB6
     (tbc == UTF8PROC_BOUNDCLASS_L ||                 // ---
      tbc == UTF8PROC_BOUNDCLASS_V ||                 // ---
      tbc == UTF8PROC_BOUNDCLASS_LV ||                // ---
      tbc == UTF8PROC_BOUNDCLASS_LVT)) ? false :      // ---
    ((lbc == UTF8PROC_BOUNDCLASS_LV ||                // GB7
      lbc == UTF8PROC_BOUNDCLASS_V) &&                // ---
     (tbc == UTF8PROC_BOUNDCLASS_V ||                 // ---
      tbc == UTF8PROC_BOUNDCLASS_T)) ? false :        // ---
    ((lbc == UTF8PROC_BOUNDCLASS_LVT ||               // GB8
      lbc == UTF8PROC_BOUNDCLASS_T) &&                // ---
     tbc == UTF8PROC_BOUNDCLASS_T) ? false :          // ---
    (tbc == UTF8PROC_BOUNDCLASS_EXTEND ||             // GB9
     tbc == UTF8PROC_BOUNDCLASS_ZWJ ||                // ---
     tbc == UTF8PROC_BOUNDCLASS_SPACINGMARK ||        // GB9a
     lbc == UTF8PROC_BOUNDCLASS_PREPEND) ? false :    // GB9b
    ((lbc == UTF8PROC_BOUNDCLASS_E_BASE ||            // GB10 (requires additional handling below)
      lbc == UTF8PROC_BOUNDCLASS_E_BASE_GAZ) &&       // ----
     tbc == UTF8PROC_BOUNDCLASS_E_MODIFIER) ? false : // ----
    (lbc == UTF8PROC_BOUNDCLASS_ZWJ &&                         // GB11
     (tbc == UTF8PROC_BOUNDCLASS_GLUE_AFTER_ZWJ ||             // ----
      tbc == UTF8PROC_BOUNDCLASS_E_BASE_GAZ)) ? false :        // ----
    (lbc == UTF8PROC_BOUNDCLASS_REGIONAL_INDICATOR &&          // GB12/13 (requires additional handling below)
     tbc == UTF8PROC_BOUNDCLASS_REGIONAL_INDICATOR) ? false :  // ----
    true; // GB999
}


// ------------------------------------------------------------------------- //




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
          int lbc = 100;
          int tbc = 100;
          int benchRet = grapheme_break_simple(lbc,tbc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int lbc = 255;
          int tbc = 255;
          int benchRet = grapheme_break_simple(lbc,tbc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lbc = 10;
          int tbc = 10;
          int benchRet = grapheme_break_simple(lbc,tbc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
