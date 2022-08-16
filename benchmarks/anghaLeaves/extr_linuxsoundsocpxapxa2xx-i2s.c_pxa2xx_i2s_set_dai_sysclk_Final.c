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
struct snd_soc_dai {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 
 int PXA2XX_I2S_SYSCLK ; 

__attribute__((used)) static int pxa2xx_i2s_set_dai_sysclk(struct snd_soc_dai *cpu_dai,
		int clk_id, unsigned int freq, int dir)
{
	if (clk_id != PXA2XX_I2S_SYSCLK)
		return -ENODEV;

	return 0;
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
          int clk_id = 100;
          unsigned int freq = 100;
          int dir = 100;
          int _len_cpu_dai0 = 1;
          struct snd_soc_dai * cpu_dai = (struct snd_soc_dai *) malloc(_len_cpu_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_cpu_dai0; _i0++) {
            cpu_dai[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pxa2xx_i2s_set_dai_sysclk(cpu_dai,clk_id,freq,dir);
          printf("%d\n", benchRet); 
          free(cpu_dai);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int clk_id = 10;
          unsigned int freq = 10;
          int dir = 10;
          int _len_cpu_dai0 = 100;
          struct snd_soc_dai * cpu_dai = (struct snd_soc_dai *) malloc(_len_cpu_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_cpu_dai0; _i0++) {
            cpu_dai[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pxa2xx_i2s_set_dai_sysclk(cpu_dai,clk_id,freq,dir);
          printf("%d\n", benchRet); 
          free(cpu_dai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
