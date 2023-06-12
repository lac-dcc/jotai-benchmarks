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
       0            big-arr-10x\n\
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
struct TYPE_3__ {int key_defined; unsigned int key_r; unsigned int key_g; unsigned int key_b; } ;
typedef  TYPE_1__ LodePNGColorMode ;

/* Variables and functions */

__attribute__((used)) static void setColorKeyFrom16bit(LodePNGColorMode* mode_out, unsigned r, unsigned g, unsigned b, unsigned bitdepth)
{
  unsigned mask = (1 << bitdepth) - 1;
  mode_out->key_defined = 1;
  mode_out->key_r = r & mask;
  mode_out->key_g = g & mask;
  mode_out->key_b = b & mask;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          unsigned int r = 10;
        
          unsigned int g = 10;
        
          unsigned int b = 10;
        
          unsigned int bitdepth = 10;
        
          int _len_mode_out0 = 100;
          struct TYPE_3__ * mode_out = (struct TYPE_3__ *) malloc(_len_mode_out0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mode_out0; _i0++) {
              mode_out[_i0].key_defined = ((-2 * (next_i()%2)) + 1) * next_i();
          mode_out[_i0].key_r = ((-2 * (next_i()%2)) + 1) * next_i();
          mode_out[_i0].key_g = ((-2 * (next_i()%2)) + 1) * next_i();
          mode_out[_i0].key_b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          setColorKeyFrom16bit(mode_out,r,g,b,bitdepth);
          free(mode_out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
