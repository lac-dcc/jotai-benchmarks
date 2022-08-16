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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  l1hw; } ;
struct PStack {TYPE_1__ l1; } ;
struct IsdnCardState {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  HFCSX_l1hw ; 

__attribute__((used)) static void
setstack_hfcsx(struct PStack *st, struct IsdnCardState *cs)
{
	st->l1.l1hw = HFCSX_l1hw;
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
          int _len_st0 = 1;
          struct PStack * st = (struct PStack *) malloc(_len_st0*sizeof(struct PStack));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].l1.l1hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cs0 = 1;
          struct IsdnCardState * cs = (struct IsdnCardState *) malloc(_len_cs0*sizeof(struct IsdnCardState));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
            cs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setstack_hfcsx(st,cs);
          free(st);
          free(cs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
