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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct r820t_priv {int* regs; } ;

/* Variables and functions */
 int EINVAL ; 
 int NUM_REGS ; 
 scalar_t__ REG_SHADOW_START ; 

__attribute__((used)) static int r820t_read_cache_reg(struct r820t_priv *priv, int reg)
{
	reg -= REG_SHADOW_START;

	if (reg >= 0 && reg < NUM_REGS)
		return priv->regs[reg];
	else
		return -EINVAL;
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
          int reg = 100;
          int _len_priv0 = 1;
          struct r820t_priv * priv = (struct r820t_priv *) malloc(_len_priv0*sizeof(struct r820t_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__regs0 = 1;
          priv[_i0].regs = (int *) malloc(_len_priv__i0__regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__regs0; _j0++) {
            priv[_i0].regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = r820t_read_cache_reg(priv,reg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].regs);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg = 255;
          int _len_priv0 = 65025;
          struct r820t_priv * priv = (struct r820t_priv *) malloc(_len_priv0*sizeof(struct r820t_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__regs0 = 1;
          priv[_i0].regs = (int *) malloc(_len_priv__i0__regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__regs0; _j0++) {
            priv[_i0].regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = r820t_read_cache_reg(priv,reg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].regs);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg = 10;
          int _len_priv0 = 100;
          struct r820t_priv * priv = (struct r820t_priv *) malloc(_len_priv0*sizeof(struct r820t_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__regs0 = 1;
          priv[_i0].regs = (int *) malloc(_len_priv__i0__regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__regs0; _j0++) {
            priv[_i0].regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = r820t_read_cache_reg(priv,reg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].regs);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
