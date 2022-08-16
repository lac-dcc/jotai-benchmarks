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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int hashval_t ;

/* Variables and functions */

__attribute__((used)) static inline hashval_t
htab_mod_1 (hashval_t x, hashval_t y, hashval_t inv, int shift)
{
  /* The multiplicative inverses computed above are for 32-bit types, and
     requires that we be able to compute a highpart multiply.  */
#ifdef UNSIGNED_64BIT_TYPE
  __extension__ typedef UNSIGNED_64BIT_TYPE ull;
  if (sizeof (hashval_t) * CHAR_BIT <= 32)
    {
      hashval_t t1, t2, t3, t4, q, r;

      t1 = ((ull)x * inv) >> 32;
      t2 = x - t1;
      t3 = t2 >> 1;
      t4 = t1 + t3;
      q  = t4 >> shift;
      r  = x - (q * y);

      return r;
    }
#endif

  /* Otherwise just use the native division routines.  */
  return x % y;
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
          int x = 100;
          int y = 100;
          int inv = 100;
          int shift = 100;
          int benchRet = htab_mod_1(x,y,inv,shift);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int inv = 255;
          int shift = 255;
          int benchRet = htab_mod_1(x,y,inv,shift);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int inv = 10;
          int shift = 10;
          int benchRet = htab_mod_1(x,y,inv,shift);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
