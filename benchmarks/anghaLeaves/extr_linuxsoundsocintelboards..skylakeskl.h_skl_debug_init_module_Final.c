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
struct snd_soc_dapm_widget {int dummy; } ;
struct skl_module_cfg {int dummy; } ;
struct skl_debug {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void skl_debug_init_module(struct skl_debug *d,
					 struct snd_soc_dapm_widget *w,
					 struct skl_module_cfg *mconfig)
{}


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
          int _len_d0 = 1;
          struct skl_debug * d = (struct skl_debug *) malloc(_len_d0*sizeof(struct skl_debug));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_w0 = 1;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mconfig0 = 1;
          struct skl_module_cfg * mconfig = (struct skl_module_cfg *) malloc(_len_mconfig0*sizeof(struct skl_module_cfg));
          for(int _i0 = 0; _i0 < _len_mconfig0; _i0++) {
            mconfig[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          skl_debug_init_module(d,w,mconfig);
          free(d);
          free(w);
          free(mconfig);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
