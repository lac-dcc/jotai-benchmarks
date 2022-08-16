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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct yColCache {int iReg; scalar_t__ tempReg; } ;
struct TYPE_3__ {int nColCache; struct yColCache* aColCache; } ;
typedef  TYPE_1__ Parse ;

/* Variables and functions */

__attribute__((used)) static void sqlite3ExprCachePinRegister(Parse *pParse, int iReg){
  int i;
  struct yColCache *p;
  for(i=0, p=pParse->aColCache; i<pParse->nColCache; i++, p++){
    if( p->iReg==iReg ){
      p->tempReg = 0;
    }
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
          int iReg = 100;
          int _len_pParse0 = 1;
          struct TYPE_3__ * pParse = (struct TYPE_3__ *) malloc(_len_pParse0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pParse0; _i0++) {
            pParse[_i0].nColCache = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pParse__i0__aColCache0 = 1;
          pParse[_i0].aColCache = (struct yColCache *) malloc(_len_pParse__i0__aColCache0*sizeof(struct yColCache));
          for(int _j0 = 0; _j0 < _len_pParse__i0__aColCache0; _j0++) {
            pParse[_i0].aColCache->iReg = ((-2 * (next_i()%2)) + 1) * next_i();
        pParse[_i0].aColCache->tempReg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sqlite3ExprCachePinRegister(pParse,iReg);
          for(int _aux = 0; _aux < _len_pParse0; _aux++) {
          free(pParse[_aux].aColCache);
          }
          free(pParse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
