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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int nb_inputs; int nb_outputs; TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ in_channel_layouts; scalar_t__ in_samplerates; int /*<<< orphan*/  in_formats; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ out_channel_layouts; scalar_t__ out_samplerates; int /*<<< orphan*/  out_formats; } ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */
 scalar_t__ AVMEDIA_TYPE_AUDIO ; 

__attribute__((used)) static int formats_declared(AVFilterContext *f)
{
    int i;

    for (i = 0; i < f->nb_inputs; i++) {
        if (!f->inputs[i]->out_formats)
            return 0;
        if (f->inputs[i]->type == AVMEDIA_TYPE_AUDIO &&
            !(f->inputs[i]->out_samplerates &&
              f->inputs[i]->out_channel_layouts))
            return 0;
    }
    for (i = 0; i < f->nb_outputs; i++) {
        if (!f->outputs[i]->in_formats)
            return 0;
        if (f->outputs[i]->type == AVMEDIA_TYPE_AUDIO &&
            !(f->outputs[i]->in_samplerates &&
              f->outputs[i]->in_channel_layouts))
            return 0;
    }
    return 1;
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
          int _len_f0 = 1;
          struct TYPE_7__ * f = (struct TYPE_7__ *) malloc(_len_f0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].nb_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].nb_outputs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__outputs0 = 1;
          f[_i0].outputs = (struct TYPE_6__ **) malloc(_len_f__i0__outputs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_f__i0__outputs0; _j0++) {
            int _len_f__i0__outputs1 = 1;
            f[_i0].outputs[_j0] = (struct TYPE_6__ *) malloc(_len_f__i0__outputs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_f__i0__outputs1; _j1++) {
              f[_i0].outputs[_j0]->type = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].outputs[_j0]->in_channel_layouts = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].outputs[_j0]->in_samplerates = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].outputs[_j0]->in_formats = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_f__i0__inputs0 = 1;
          f[_i0].inputs = (struct TYPE_5__ **) malloc(_len_f__i0__inputs0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_f__i0__inputs0; _j0++) {
            int _len_f__i0__inputs1 = 1;
            f[_i0].inputs[_j0] = (struct TYPE_5__ *) malloc(_len_f__i0__inputs1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_f__i0__inputs1; _j1++) {
              f[_i0].inputs[_j0]->type = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].inputs[_j0]->out_channel_layouts = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].inputs[_j0]->out_samplerates = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].inputs[_j0]->out_formats = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = formats_declared(f);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(*(f[_aux].outputs));
        free(f[_aux].outputs);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(*(f[_aux].inputs));
        free(f[_aux].inputs);
          }
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
