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
typedef  double LONGDOUBLE_TYPE ;

/* Variables and functions */

__attribute__((used)) static LONGDOUBLE_TYPE sqlite3Pow10(int E){
#if defined(_MSC_VER)
  static const LONGDOUBLE_TYPE x[] = {
    1.0e+001,
    1.0e+002,
    1.0e+004,
    1.0e+008,
    1.0e+016,
    1.0e+032,
    1.0e+064,
    1.0e+128,
    1.0e+256
  };
  LONGDOUBLE_TYPE r = 1.0;
  int i;
  assert( E>=0 && E<=307 );
  for(i=0; E!=0; i++, E >>=1){
    if( E & 1 ) r *= x[i];
  }
  return r;
#else
  LONGDOUBLE_TYPE x = 10.0;
  LONGDOUBLE_TYPE r = 1.0;
  while(1){
    if( E & 1 ) r *= x;
    E >>= 1;
    if( E==0 ) break;
    x *= x;
  }
  return r; 
#endif
}

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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 107
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 48
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 48
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 48
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 44
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 49
          // ------------------------------- 

          int E = 100;
        
          double benchRet = sqlite3Pow10(E);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 135
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 61
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 61
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 61
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 61
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 53
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          int E = 255;
        
          double benchRet = sqlite3Pow10(E);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 65
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 31
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int E = 10;
        
          double benchRet = sqlite3Pow10(E);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
