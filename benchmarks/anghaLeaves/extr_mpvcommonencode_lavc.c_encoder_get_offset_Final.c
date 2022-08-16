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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct encoder_context {TYPE_2__* options; TYPE_1__* encoder; } ;
struct TYPE_4__ {double voffset; double aoffset; } ;
struct TYPE_3__ {int codec_type; } ;

/* Variables and functions */
#define  AVMEDIA_TYPE_AUDIO 129 
#define  AVMEDIA_TYPE_VIDEO 128 

double encoder_get_offset(struct encoder_context *p)
{
    switch (p->encoder->codec_type) {
    case AVMEDIA_TYPE_VIDEO: return p->options->voffset;
    case AVMEDIA_TYPE_AUDIO: return p->options->aoffset;
    default:                 return 0;
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
          int _len_p0 = 1;
          struct encoder_context * p = (struct encoder_context *) malloc(_len_p0*sizeof(struct encoder_context));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__options0 = 1;
          p[_i0].options = (struct TYPE_4__ *) malloc(_len_p__i0__options0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__options0; _j0++) {
            p[_i0].options->voffset = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        p[_i0].options->aoffset = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p__i0__encoder0 = 1;
          p[_i0].encoder = (struct TYPE_3__ *) malloc(_len_p__i0__encoder0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_p__i0__encoder0; _j0++) {
            p[_i0].encoder->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          double benchRet = encoder_get_offset(p);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].options);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].encoder);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
