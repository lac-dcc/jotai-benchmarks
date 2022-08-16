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
typedef  unsigned int UInt32 ;
struct TYPE_3__ {int level; int dictSize; int reduceSize; int lc; scalar_t__ lp; int pb; int algo; int fb; int btMode; int numHashBytes; int mc; int numThreads; } ;
typedef  TYPE_1__ CLzmaEncProps ;

/* Variables and functions */

void LzmaEncProps_Normalize(CLzmaEncProps *p)
{
  int level = p->level;
  if (level < 0) level = 5;
  p->level = level;
  if (p->dictSize == 0) p->dictSize = (level <= 5 ? (1 << (level * 2 + 14)) : (level == 6 ? (1 << 25) : (1 << 26)));
  if (p->dictSize > p->reduceSize)
  {
    unsigned i;
    for (i = 11; i <= 30; i++)
    {
      if ((UInt32)p->reduceSize <= ((UInt32)2 << i)) { p->dictSize = ((UInt32)2 << i); break; }
      if ((UInt32)p->reduceSize <= ((UInt32)3 << i)) { p->dictSize = ((UInt32)3 << i); break; }
    }
  }
  if (p->lc < 0) p->lc = 3;
  if (p->lp < 0) p->lp = 0;
  if (p->pb < 0) p->pb = 2;
  if (p->algo < 0) p->algo = (level < 5 ? 0 : 1);
  if (p->fb < 0) p->fb = (level < 7 ? 32 : 64);
  if (p->btMode < 0) p->btMode = (p->algo == 0 ? 0 : 1);
  if (p->numHashBytes < 0) p->numHashBytes = 4;
  if (p->mc == 0)  p->mc = (16 + (p->fb >> 1)) >> (p->btMode ? 0 : 1);
  if (p->numThreads < 0)
    p->numThreads =
      #ifndef _7ZIP_ST
      ((p->btMode && p->algo) ? 2 : 1);
      #else
      1;
      #endif
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
            p[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dictSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].reduceSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].lc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].lp = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].pb = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].algo = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].fb = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].btMode = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numHashBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].mc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numThreads = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LzmaEncProps_Normalize(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
