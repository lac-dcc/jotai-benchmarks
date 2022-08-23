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
typedef  scalar_t__ u8 ;
struct TYPE_3__ {int nArg; scalar_t__ xFunc; scalar_t__ xStep; scalar_t__ iPrefEnc; } ;
typedef  TYPE_1__ FuncDef ;

/* Variables and functions */
 scalar_t__ SQLITE_UTF16BE ; 
 scalar_t__ SQLITE_UTF16LE ; 

__attribute__((used)) static int matchQuality(FuncDef *p, int nArg, u8 enc){
  int match = 0;
  if( p->nArg==-1 || p->nArg==nArg 
   || (nArg==-1 && (p->xFunc!=0 || p->xStep!=0))
  ){
    match = 1;
    if( p->nArg==nArg || nArg==-1 ){
      match = 4;
    }
    if( enc==p->iPrefEnc ){
      match += 2;
    }
    else if( (enc==SQLITE_UTF16LE && p->iPrefEnc==SQLITE_UTF16BE) ||
             (enc==SQLITE_UTF16BE && p->iPrefEnc==SQLITE_UTF16LE) ){
      match += 1;
    }
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
          long enc = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].nArg = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].xFunc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].xStep = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].iPrefEnc = ((-2 * (next_i()%2)) + 1) * next_i();
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