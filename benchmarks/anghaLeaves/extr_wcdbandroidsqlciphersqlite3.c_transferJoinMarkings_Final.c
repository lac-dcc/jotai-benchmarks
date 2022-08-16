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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int flags; int /*<<< orphan*/  iRightJoinTable; } ;
typedef  TYPE_1__ Expr ;

/* Variables and functions */
 int EP_FromJoin ; 

__attribute__((used)) static void transferJoinMarkings(Expr *pDerived, Expr *pBase){
  if( pDerived ){
    pDerived->flags |= pBase->flags & EP_FromJoin;
    pDerived->iRightJoinTable = pBase->iRightJoinTable;
  }
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
          int _len_pDerived0 = 1;
          struct TYPE_4__ * pDerived = (struct TYPE_4__ *) malloc(_len_pDerived0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_pDerived0; _i0++) {
            pDerived[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pDerived[_i0].iRightJoinTable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBase0 = 1;
          struct TYPE_4__ * pBase = (struct TYPE_4__ *) malloc(_len_pBase0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_pBase0; _i0++) {
            pBase[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pBase[_i0].iRightJoinTable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          transferJoinMarkings(pDerived,pBase);
          free(pDerived);
          free(pBase);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
