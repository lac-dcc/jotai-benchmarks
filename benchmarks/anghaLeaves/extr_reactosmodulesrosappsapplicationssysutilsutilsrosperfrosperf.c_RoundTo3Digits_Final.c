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

/* Type definitions */

/* Variables and functions */

__attribute__((used)) static double
RoundTo3Digits(double d)
{
  /* It's kind of silly to print out things like ``193658.4/sec'' so just
     junk all but 3 most significant digits. */

  double exponent, sign;

  exponent = 1.0;
  /* the code below won't work if d should happen to be non-positive. */
  if (d < 0.0)
    {
      d = -d;
      sign = -1.0;
    }
  else
    {
      sign = 1.0;
    }

  if (1000.0 <= d)
    {
      do
        {
          exponent *= 10.0;
        }
      while (1000.0 <= d / exponent);
      d = (double)((int)(d / exponent + 0.5));
      d *= exponent;
    }
  else
    {
      if (0.0 != d)
        {
          while (d * exponent < 100.0)
            {
              exponent *= 10.0;
            }
        }
      d = (double)((int)(d * exponent + 0.5));
      d /= exponent;
    }

  return d * sign;
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
          double d = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double benchRet = RoundTo3Digits(d);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
