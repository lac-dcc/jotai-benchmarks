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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int zero_weight; int till_rescale; int total_weight; int upd_val; unsigned int zero_freq; unsigned int total_freq; } ;
typedef  TYPE_1__ Model2 ;

/* Variables and functions */

__attribute__((used)) static void model2_update(Model2 *m, int bit)
{
    unsigned scale;

    if (!bit)
        m->zero_weight++;
    m->till_rescale--;
    if (m->till_rescale)
        return;

    m->total_weight += m->upd_val;
    if (m->total_weight > 0x2000) {
        m->total_weight = (m->total_weight + 1) >> 1;
        m->zero_weight  = (m->zero_weight  + 1) >> 1;
        if (m->total_weight == m->zero_weight)
            m->total_weight = m->zero_weight + 1;
    }
    m->upd_val = m->upd_val * 5 >> 2;
    if (m->upd_val > 64)
        m->upd_val = 64;
    scale = 0x80000000u / m->total_weight;
    m->zero_freq    = m->zero_weight  * scale >> 18;
    m->total_freq   = m->total_weight * scale >> 18;
    m->till_rescale = m->upd_val;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int bit = 100;
        
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].zero_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].zero_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          model2_update(m,bit);
          free(m);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int bit = 255;
        
          int _len_m0 = 65025;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].zero_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].zero_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          model2_update(m,bit);
          free(m);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int bit = 10;
        
          int _len_m0 = 100;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].zero_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].zero_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          model2_update(m,bit);
          free(m);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].zero_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].zero_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          model2_update(m,bit);
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
