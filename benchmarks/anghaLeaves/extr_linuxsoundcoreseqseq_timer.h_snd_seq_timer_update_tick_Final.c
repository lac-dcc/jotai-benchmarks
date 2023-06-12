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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct snd_seq_timer_tick {int resolution; unsigned long fraction; unsigned int cur_tick; } ;

/* Variables and functions */

__attribute__((used)) static inline void snd_seq_timer_update_tick(struct snd_seq_timer_tick *tick,
					     unsigned long resolution)
{
	if (tick->resolution > 0) {
		tick->fraction += resolution;
		tick->cur_tick += (unsigned int)(tick->fraction / tick->resolution);
		tick->fraction %= tick->resolution;
	}
}

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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned long resolution = 100;
        
          int _len_tick0 = 1;
          struct snd_seq_timer_tick * tick = (struct snd_seq_timer_tick *) malloc(_len_tick0*sizeof(struct snd_seq_timer_tick));
          for(int _i0 = 0; _i0 < _len_tick0; _i0++) {
              tick[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].fraction = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].cur_tick = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_timer_update_tick(tick,resolution);
          free(tick);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned long resolution = 255;
        
          int _len_tick0 = 65025;
          struct snd_seq_timer_tick * tick = (struct snd_seq_timer_tick *) malloc(_len_tick0*sizeof(struct snd_seq_timer_tick));
          for(int _i0 = 0; _i0 < _len_tick0; _i0++) {
              tick[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].fraction = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].cur_tick = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_timer_update_tick(tick,resolution);
          free(tick);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned long resolution = 10;
        
          int _len_tick0 = 100;
          struct snd_seq_timer_tick * tick = (struct snd_seq_timer_tick *) malloc(_len_tick0*sizeof(struct snd_seq_timer_tick));
          for(int _i0 = 0; _i0 < _len_tick0; _i0++) {
              tick[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].fraction = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].cur_tick = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_timer_update_tick(tick,resolution);
          free(tick);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned long resolution = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_tick0 = 1;
          struct snd_seq_timer_tick * tick = (struct snd_seq_timer_tick *) malloc(_len_tick0*sizeof(struct snd_seq_timer_tick));
          for(int _i0 = 0; _i0 < _len_tick0; _i0++) {
              tick[_i0].resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].fraction = ((-2 * (next_i()%2)) + 1) * next_i();
          tick[_i0].cur_tick = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          snd_seq_timer_update_tick(tick,resolution);
          free(tick);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
