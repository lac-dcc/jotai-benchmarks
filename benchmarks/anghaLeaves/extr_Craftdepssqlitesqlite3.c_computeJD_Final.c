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
typedef  scalar_t__ sqlite3_int64 ;
struct TYPE_3__ {int validJD; int Y; int M; int D; int h; int m; int s; int tz; scalar_t__ validTZ; scalar_t__ validHMS; scalar_t__ validYMD; scalar_t__ iJD; } ;
typedef  TYPE_1__ DateTime ;

/* Variables and functions */

__attribute__((used)) static void computeJD(DateTime *p){
  int Y, M, D, A, B, X1, X2;

  if( p->validJD ) return;
  if( p->validYMD ){
    Y = p->Y;
    M = p->M;
    D = p->D;
  }else{
    Y = 2000;  /* If no YMD specified, assume 2000-Jan-01 */
    M = 1;
    D = 1;
  }
  if( M<=2 ){
    Y--;
    M += 12;
  }
  A = Y/100;
  B = 2 - A + (A/4);
  X1 = 36525*(Y+4716)/100;
  X2 = 306001*(M+1)/10000;
  p->iJD = (sqlite3_int64)((X1 + X2 + D + B - 1524.5 ) * 86400000);
  p->validJD = 1;
  if( p->validHMS ){
    p->iJD += p->h*3600000 + p->m*60000 + (sqlite3_int64)(p->s*1000);
    if( p->validTZ ){
      p->iJD -= p->tz*60000;
      p->validYMD = 0;
      p->validHMS = 0;
      p->validTZ = 0;
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].validJD = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].Y = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].M = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].D = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].m = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tz = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].validTZ = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].validHMS = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].validYMD = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].iJD = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          computeJD(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
