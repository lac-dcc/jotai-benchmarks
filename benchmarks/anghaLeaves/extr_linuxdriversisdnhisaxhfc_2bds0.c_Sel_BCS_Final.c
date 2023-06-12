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

/* Type definitions */
struct IsdnCardState {struct BCState* bcs; } ;
struct BCState {int channel; scalar_t__ mode; } ;

/* Variables and functions */

__attribute__((used)) static
struct BCState *Sel_BCS(struct IsdnCardState *cs, int channel)
{
	if (cs->bcs[0].mode && (cs->bcs[0].channel == channel))
		return (&cs->bcs[0]);
	else if (cs->bcs[1].mode && (cs->bcs[1].channel == channel))
		return (&cs->bcs[1]);
	else
		return (NULL);
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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

          int channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cs0 = 1;
          struct IsdnCardState * cs = (struct IsdnCardState *) malloc(_len_cs0*sizeof(struct IsdnCardState));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__bcs0 = 1;
          cs[_i0].bcs = (struct BCState *) malloc(_len_cs__i0__bcs0*sizeof(struct BCState));
          for(int _j0 = 0; _j0 < _len_cs__i0__bcs0; _j0++) {
              cs[_i0].bcs->channel = ((-2 * (next_i()%2)) + 1) * next_i();
          cs[_i0].bcs->mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct BCState * benchRet = Sel_BCS(cs,channel);
          printf("%d\n", (*benchRet).channel);
          printf("%ld\n", (*benchRet).mode);
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].bcs);
          }
          free(cs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
