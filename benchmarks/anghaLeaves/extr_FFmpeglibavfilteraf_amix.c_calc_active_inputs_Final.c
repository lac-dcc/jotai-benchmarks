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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int nb_inputs; int* input_state; int active_inputs; scalar_t__ duration_mode; } ;
typedef  TYPE_1__ MixContext ;

/* Variables and functions */
 int AVERROR_EOF ; 
 scalar_t__ DURATION_FIRST ; 
 scalar_t__ DURATION_SHORTEST ; 
 int INPUT_ON ; 

__attribute__((used)) static int calc_active_inputs(MixContext *s)
{
    int i;
    int active_inputs = 0;
    for (i = 0; i < s->nb_inputs; i++)
        active_inputs += !!(s->input_state[i] & INPUT_ON);
    s->active_inputs = active_inputs;

    if (!active_inputs ||
        (s->duration_mode == DURATION_FIRST && !(s->input_state[0] & INPUT_ON)) ||
        (s->duration_mode == DURATION_SHORTEST && active_inputs != s->nb_inputs))
        return AVERROR_EOF;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__input_state0 = 1;
          s[_i0].input_state = (int *) malloc(_len_s__i0__input_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__input_state0; _j0++) {
            s[_i0].input_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].active_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].duration_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calc_active_inputs(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].input_state);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
