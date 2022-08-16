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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct snd_soc_dai {int dummy; } ;
struct TYPE_2__ {int master; int /*<<< orphan*/  fmt; } ;

/* Variables and functions */
 int /*<<< orphan*/  SACR1_AMSL ; 
#define  SND_SOC_DAIFMT_CBM_CFS 131 
#define  SND_SOC_DAIFMT_CBS_CFS 130 
 unsigned int SND_SOC_DAIFMT_FORMAT_MASK ; 
#define  SND_SOC_DAIFMT_I2S 129 
#define  SND_SOC_DAIFMT_LEFT_J 128 
 unsigned int SND_SOC_DAIFMT_MASTER_MASK ; 
 TYPE_1__ pxa_i2s ; 

__attribute__((used)) static int pxa2xx_i2s_set_dai_fmt(struct snd_soc_dai *cpu_dai,
		unsigned int fmt)
{
	/* interface format */
	switch (fmt & SND_SOC_DAIFMT_FORMAT_MASK) {
	case SND_SOC_DAIFMT_I2S:
		pxa_i2s.fmt = 0;
		break;
	case SND_SOC_DAIFMT_LEFT_J:
		pxa_i2s.fmt = SACR1_AMSL;
		break;
	}

	switch (fmt & SND_SOC_DAIFMT_MASTER_MASK) {
	case SND_SOC_DAIFMT_CBS_CFS:
		pxa_i2s.master = 1;
		break;
	case SND_SOC_DAIFMT_CBM_CFS:
		pxa_i2s.master = 0;
		break;
	default:
		break;
	}
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
          unsigned int fmt = 100;
          int _len_cpu_dai0 = 1;
          struct snd_soc_dai * cpu_dai = (struct snd_soc_dai *) malloc(_len_cpu_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_cpu_dai0; _i0++) {
            cpu_dai[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pxa2xx_i2s_set_dai_fmt(cpu_dai,fmt);
          printf("%d\n", benchRet); 
          free(cpu_dai);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int fmt = 10;
          int _len_cpu_dai0 = 100;
          struct snd_soc_dai * cpu_dai = (struct snd_soc_dai *) malloc(_len_cpu_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_cpu_dai0; _i0++) {
            cpu_dai[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pxa2xx_i2s_set_dai_fmt(cpu_dai,fmt);
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
