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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ n; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef  TYPE_2__ Walker ;
struct TYPE_8__ {scalar_t__ op; int /*<<< orphan*/  op2; } ;
typedef  TYPE_3__ Expr ;

/* Variables and functions */
 scalar_t__ TK_AGG_FUNCTION ; 
 int WRC_Continue ; 

__attribute__((used)) static int incrAggDepth(Walker *pWalker, Expr *pExpr){
  if( pExpr->op==TK_AGG_FUNCTION ) pExpr->op2 += pWalker->u.n;
  return WRC_Continue;
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
          int _len_pWalker0 = 1;
          struct TYPE_7__ * pWalker = (struct TYPE_7__ *) malloc(_len_pWalker0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pWalker0; _i0++) {
            pWalker[_i0].u.n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pExpr0 = 1;
          struct TYPE_8__ * pExpr = (struct TYPE_8__ *) malloc(_len_pExpr0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_pExpr0; _i0++) {
            pExpr[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
        pExpr[_i0].op2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = incrAggDepth(pWalker,pExpr);
          printf("%d\n", benchRet); 
          free(pWalker);
          free(pExpr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
