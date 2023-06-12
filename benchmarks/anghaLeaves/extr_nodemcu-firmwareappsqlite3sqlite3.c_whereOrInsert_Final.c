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
typedef  size_t u16 ;
struct TYPE_4__ {size_t n; TYPE_2__* a; } ;
typedef  TYPE_1__ WhereOrSet ;
struct TYPE_5__ {scalar_t__ rRun; int prereq; scalar_t__ nOut; } ;
typedef  TYPE_2__ WhereOrCost ;
typedef  scalar_t__ LogEst ;
typedef  int Bitmask ;

/* Variables and functions */
 size_t N_OR_COST ; 

__attribute__((used)) static int whereOrInsert(
  WhereOrSet *pSet,      /* The WhereOrSet to be updated */
  Bitmask prereq,        /* Prerequisites of the new entry */
  LogEst rRun,           /* Run-cost of the new entry */
  LogEst nOut            /* Number of outputs for the new entry */
){
  u16 i;
  WhereOrCost *p;
  for(i=pSet->n, p=pSet->a; i>0; i--, p++){
    if( rRun<=p->rRun && (prereq & p->prereq)==prereq ){
      goto whereOrInsert_done;
    }
    if( p->rRun<=rRun && (p->prereq & prereq)==p->prereq ){
      return 0;
    }
  }
  if( pSet->n<N_OR_COST ){
    p = &pSet->a[pSet->n++];
    p->nOut = nOut;
  }else{
    p = pSet->a;
    for(i=1; i<pSet->n; i++){
      if( p->rRun>pSet->a[i].rRun ) p = pSet->a + i;
    }
    if( p->rRun<=rRun ) return 0;
  }
whereOrInsert_done:
  p->prereq = prereq;
  p->rRun = rRun;
  if( p->nOut>nOut ) p->nOut = nOut;
  return 1;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int prereq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long rRun = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long nOut = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pSet0 = 1;
          struct TYPE_4__ * pSet = (struct TYPE_4__ *) malloc(_len_pSet0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_pSet0; _i0++) {
              pSet[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pSet__i0__a0 = 1;
          pSet[_i0].a = (struct TYPE_5__ *) malloc(_len_pSet__i0__a0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pSet__i0__a0; _j0++) {
              pSet[_i0].a->rRun = ((-2 * (next_i()%2)) + 1) * next_i();
          pSet[_i0].a->prereq = ((-2 * (next_i()%2)) + 1) * next_i();
          pSet[_i0].a->nOut = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = whereOrInsert(pSet,prereq,rRun,nOut);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pSet0; _aux++) {
          free(pSet[_aux].a);
          }
          free(pSet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
