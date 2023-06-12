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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void i810_calc_dclk(u32 freq, u32 *m, u32 *n, u32 *p)
{
	u32 m_reg, n_reg, p_divisor, n_target_max;
	u32 m_target, n_target, p_target, n_best, m_best, mod;
	u32 f_out, target_freq, diff = 0, mod_min, diff_min;

	diff_min = mod_min = 0xFFFFFFFF;
	n_best = m_best = m_target = f_out = 0;

	target_freq =  freq;
	n_target_max = 30;

	/*
	 * find P such that target freq is 16x reference freq (Hz). 
	 */
	p_divisor = 1;
	p_target = 0;
	while(!((1000000 * p_divisor)/(16 * 24 * target_freq)) && 
	      p_divisor <= 32) {
		p_divisor <<= 1;
		p_target++;
	}

	n_reg = m_reg = n_target = 3;	
	while (diff_min && mod_min && (n_target < n_target_max)) {
		f_out = (p_divisor * n_reg * 1000000)/(4 * 24 * m_reg);
		mod = (p_divisor * n_reg * 1000000) % (4 * 24 * m_reg);
		m_target = m_reg;
		n_target = n_reg;
		if (f_out <= target_freq) {
			n_reg++;
			diff = target_freq - f_out;
		} else {
			m_reg++;
			diff = f_out - target_freq;
		}

		if (diff_min > diff) {
			diff_min = diff;
			n_best = n_target;
			m_best = m_target;
		}		 

		if (!diff && mod_min > mod) {
			mod_min = mod;
			n_best = n_target;
			m_best = m_target;
		}
	} 
	if (m) *m = (m_best - 2) & 0x3FF;
	if (n) *n = (n_best - 2) & 0x3FF;
	if (p) *p = (p_target << 4);
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
          // static_instructions_O0 : 115
          // dynamic_instructions_O0 : 144948
          // ------------------------------- 
          // static_instructions_O1 : 87
          // dynamic_instructions_O1 : 105612
          // ------------------------------- 
          // static_instructions_O2 : 88
          // dynamic_instructions_O2 : 105613
          // ------------------------------- 
          // static_instructions_O3 : 88
          // dynamic_instructions_O3 : 105613
          // ------------------------------- 
          // static_instructions_Ofast : 88
          // dynamic_instructions_Ofast : 105613
          // ------------------------------- 
          // static_instructions_Os : 86
          // dynamic_instructions_Os : 105611
          // ------------------------------- 
          // static_instructions_Oz : 88
          // dynamic_instructions_Oz : 105615
          // ------------------------------- 

          int freq = 100;
        
          int _len_m0 = 1;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_n0 = 1;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          i810_calc_dclk(freq,m,n,p);
          free(m);
          free(n);
          free(p);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 115
          // dynamic_instructions_O0 : 58065
          // ------------------------------- 
          // static_instructions_O1 : 87
          // dynamic_instructions_O1 : 42262
          // ------------------------------- 
          // static_instructions_O2 : 88
          // dynamic_instructions_O2 : 42263
          // ------------------------------- 
          // static_instructions_O3 : 88
          // dynamic_instructions_O3 : 42263
          // ------------------------------- 
          // static_instructions_Ofast : 88
          // dynamic_instructions_Ofast : 42263
          // ------------------------------- 
          // static_instructions_Os : 86
          // dynamic_instructions_Os : 42261
          // ------------------------------- 
          // static_instructions_Oz : 88
          // dynamic_instructions_Oz : 42265
          // ------------------------------- 

          int freq = 255;
        
          int _len_m0 = 65025;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_n0 = 65025;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          i810_calc_dclk(freq,m,n,p);
          free(m);
          free(n);
          free(p);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 115
          // dynamic_instructions_O0 : 1319604
          // ------------------------------- 
          // static_instructions_O1 : 87
          // dynamic_instructions_O1 : 962132
          // ------------------------------- 
          // static_instructions_O2 : 88
          // dynamic_instructions_O2 : 962133
          // ------------------------------- 
          // static_instructions_O3 : 88
          // dynamic_instructions_O3 : 962133
          // ------------------------------- 
          // static_instructions_Ofast : 88
          // dynamic_instructions_Ofast : 962133
          // ------------------------------- 
          // static_instructions_Os : 86
          // dynamic_instructions_Os : 962131
          // ------------------------------- 
          // static_instructions_Oz : 88
          // dynamic_instructions_Oz : 962135
          // ------------------------------- 

          int freq = 10;
        
          int _len_m0 = 100;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_n0 = 100;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          i810_calc_dclk(freq,m,n,p);
          free(m);
          free(n);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
