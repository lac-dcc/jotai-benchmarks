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
typedef  int u8 ;
struct TYPE_3__ {scalar_t__ xSFunc; int nArg; int funcFlags; } ;
typedef  TYPE_1__ FuncDef ;

/* Variables and functions */
 int FUNC_PERFECT_MATCH ; 
 int SQLITE_FUNC_ENCMASK ; 

__attribute__((used)) static int matchQuality(
  FuncDef *p,     /* The function we are evaluating for match quality */
  int nArg,       /* Desired number of arguments.  (-1)==any */
  u8 enc          /* Desired text encoding */
){
  int match;

  /* nArg of -2 is a special case */
  if( nArg==(-2) ) return (p->xSFunc==0) ? 0 : FUNC_PERFECT_MATCH;

  /* Wrong number of arguments means "no match" */
  if( p->nArg!=nArg && p->nArg>=0 ) return 0;

  /* Give a better score to a function with a specific number of arguments
  ** than to function that accepts any number of arguments. */
  if( p->nArg==nArg ){
    match = 4;
  }else{
    match = 1;
  }

  /* Bonus points if the text encoding matches */
  if( enc==(p->funcFlags & SQLITE_FUNC_ENCMASK) ){
    match += 2;  /* Exact encoding match */
  }else if( (enc & p->funcFlags & 2)!=0 ){
    match += 1;  /* Both are UTF16, but with different byte orders */
  }

  return match;
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
          int nArg = 100;
          int enc = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].xSFunc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].nArg = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].funcFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = matchQuality(p,nArg,enc);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
