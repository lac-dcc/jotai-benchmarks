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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  int u8 ;
typedef  int sint ;

/* Variables and functions */
 int /*<<< orphan*/  _func_enter_ ; 
 int /*<<< orphan*/  _func_exit_ ; 

__attribute__((used)) static void bitwise_xor(u8 *ina, u8 *inb, u8 *out)
{
    sint i;
_func_enter_;		
    for (i=0; i<16; i++)
    {
        out[i] = ina[i] ^ inb[i];
    }
_func_exit_;		
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_ina0 = 65025;
          int * ina = (int *) malloc(_len_ina0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ina0; _i0++) {
            ina[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_inb0 = 65025;
          int * inb = (int *) malloc(_len_inb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inb0; _i0++) {
            inb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bitwise_xor(ina,inb,out);
          free(ina);
          free(inb);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ina0 = 100;
          int * ina = (int *) malloc(_len_ina0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ina0; _i0++) {
            ina[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_inb0 = 100;
          int * inb = (int *) malloc(_len_inb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inb0; _i0++) {
            inb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bitwise_xor(ina,inb,out);
          free(ina);
          free(inb);
          free(out);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
