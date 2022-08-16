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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int ch_count; int bps; scalar_t__* ch; scalar_t__ planar; } ;
typedef  TYPE_1__ AudioData ;

/* Variables and functions */

__attribute__((used)) static void buf_set(AudioData *out, AudioData *in, int count){
    int ch;
    if(in->planar){
        for(ch=0; ch<out->ch_count; ch++)
            out->ch[ch]= in->ch[ch] + count*out->bps;
    }else{
        for(ch=out->ch_count-1; ch>=0; ch--)
            out->ch[ch]= in->ch[0] + (ch + count*out->ch_count) * out->bps;
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
          int count = 100;
          int _len_out0 = 1;
          struct TYPE_4__ * out = (struct TYPE_4__ *) malloc(_len_out0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0].ch_count = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].bps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_out__i0__ch0 = 1;
          out[_i0].ch = (long *) malloc(_len_out__i0__ch0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_out__i0__ch0; _j0++) {
            out[_i0].ch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        out[_i0].planar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          struct TYPE_4__ * in = (struct TYPE_4__ *) malloc(_len_in0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0].ch_count = ((-2 * (next_i()%2)) + 1) * next_i();
        in[_i0].bps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_in__i0__ch0 = 1;
          in[_i0].ch = (long *) malloc(_len_in__i0__ch0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_in__i0__ch0; _j0++) {
            in[_i0].ch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        in[_i0].planar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          buf_set(out,in,count);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].ch);
          }
          free(out);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].ch);
          }
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
