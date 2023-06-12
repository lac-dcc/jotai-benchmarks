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
       0            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
struct TYPE_5__ {size_t bpnum; TYPE_1__* bp; } ;
typedef  TYPE_2__ mrb_debug_context ;
typedef  size_t int32_t ;
struct TYPE_4__ {size_t bpno; } ;

/* Variables and functions */
 char FALSE ; 
 size_t MRB_DEBUG_BREAK_INVALID_NO ; 
 char TRUE ; 

__attribute__((used)) static int32_t
get_break_index(mrb_debug_context *dbg, uint32_t bpno)
{
  uint32_t i;
  int32_t index;
  char hit = FALSE;

  for(i = 0 ; i < dbg->bpnum; i++) {
    if (dbg->bp[i].bpno == bpno) {
      hit = TRUE;
      index = i;
      break;
    }
  }

  if (hit == FALSE) {
    return MRB_DEBUG_BREAK_INVALID_NO;
  }

  return index;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          unsigned long bpno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dbg0 = 1;
          struct TYPE_5__ * dbg = (struct TYPE_5__ *) malloc(_len_dbg0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
              dbg[_i0].bpnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dbg__i0__bp0 = 1;
          dbg[_i0].bp = (struct TYPE_4__ *) malloc(_len_dbg__i0__bp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dbg__i0__bp0; _j0++) {
              dbg[_i0].bp->bpno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = get_break_index(dbg,bpno);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dbg0; _aux++) {
          free(dbg[_aux].bp);
          }
          free(dbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
