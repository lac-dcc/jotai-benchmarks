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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct amdtp_stream {struct amdtp_dot* protocol; } ;
struct TYPE_2__ {int carry; int idx; scalar_t__ off; } ;
struct amdtp_dot {TYPE_1__ state; } ;

/* Variables and functions */

void amdtp_dot_reset(struct amdtp_stream *s)
{
	struct amdtp_dot *p = s->protocol;

	p->state.carry = 0x00;
	p->state.idx = 0x00;
	p->state.off = 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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

          int _len_s0 = 65025;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__protocol0 = 1;
          s[_i0].protocol = (struct amdtp_dot *) malloc(_len_s__i0__protocol0*sizeof(struct amdtp_dot));
          for(int _j0 = 0; _j0 < _len_s__i0__protocol0; _j0++) {
              s[_i0].protocol->state.carry = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].protocol->state.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].protocol->state.off = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          amdtp_dot_reset(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].protocol);
          }
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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

          int _len_s0 = 100;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__protocol0 = 1;
          s[_i0].protocol = (struct amdtp_dot *) malloc(_len_s__i0__protocol0*sizeof(struct amdtp_dot));
          for(int _j0 = 0; _j0 < _len_s__i0__protocol0; _j0++) {
              s[_i0].protocol->state.carry = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].protocol->state.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].protocol->state.off = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          amdtp_dot_reset(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].protocol);
          }
          free(s);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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

          int _len_s0 = 1;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__protocol0 = 1;
          s[_i0].protocol = (struct amdtp_dot *) malloc(_len_s__i0__protocol0*sizeof(struct amdtp_dot));
          for(int _j0 = 0; _j0 < _len_s__i0__protocol0; _j0++) {
              s[_i0].protocol->state.carry = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].protocol->state.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].protocol->state.off = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          amdtp_dot_reset(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].protocol);
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
