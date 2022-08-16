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
struct snd_soc_dapm_widget {int id; } ;

/* Variables and functions */
#define  snd_soc_dapm_aif_in 133 
#define  snd_soc_dapm_aif_out 132 
#define  snd_soc_dapm_input 131 
#define  snd_soc_dapm_mixer 130 
#define  snd_soc_dapm_output 129 
#define  snd_soc_dapm_pga 128 

__attribute__((used)) static bool is_sst_dapm_widget(struct snd_soc_dapm_widget *w)
{
	switch (w->id) {
	case snd_soc_dapm_pga:
	case snd_soc_dapm_aif_in:
	case snd_soc_dapm_aif_out:
	case snd_soc_dapm_input:
	case snd_soc_dapm_output:
	case snd_soc_dapm_mixer:
		return true;
	default:
		return false;
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
          int _len_w0 = 1;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_sst_dapm_widget(w);
          printf("%d\n", benchRet); 
          free(w);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_w0 = 100;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_sst_dapm_widget(w);
          printf("%d\n", benchRet); 
          free(w);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
