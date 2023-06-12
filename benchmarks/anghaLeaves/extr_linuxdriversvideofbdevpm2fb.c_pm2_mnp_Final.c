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
typedef  int u32 ;
typedef  scalar_t__ s32 ;

/* Variables and functions */
 unsigned char PM2_REFERENCE_CLOCK ; 

__attribute__((used)) static void pm2_mnp(u32 clk, unsigned char *mm, unsigned char *nn,
		    unsigned char *pp)
{
	unsigned char m;
	unsigned char n;
	unsigned char p;
	u32 f;
	s32 curr;
	s32 delta = 100000;

	*mm = *nn = *pp = 0;
	for (n = 2; n < 15; n++) {
		for (m = 2; m; m++) {
			f = PM2_REFERENCE_CLOCK * m / n;
			if (f >= 150000 && f <= 300000) {
				for (p = 0; p < 5; p++, f >>= 1) {
					curr = (clk > f) ? clk - f : f - clk;
					if (curr < delta) {
						delta = curr;
						*mm = m;
						*nn = n;
						*pp = p;
					}
				}
			}
		}
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 52994
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int clk = 100;
        
          int _len_mm0 = 1;
          unsigned char * mm = (unsigned char *) malloc(_len_mm0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_nn0 = 1;
          unsigned char * nn = (unsigned char *) malloc(_len_nn0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
            nn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pp0 = 1;
          unsigned char * pp = (unsigned char *) malloc(_len_pp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm2_mnp(clk,mm,nn,pp);
          free(mm);
          free(nn);
          free(pp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 52994
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int clk = 255;
        
          int _len_mm0 = 65025;
          unsigned char * mm = (unsigned char *) malloc(_len_mm0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_nn0 = 65025;
          unsigned char * nn = (unsigned char *) malloc(_len_nn0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
            nn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pp0 = 65025;
          unsigned char * pp = (unsigned char *) malloc(_len_pp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm2_mnp(clk,mm,nn,pp);
          free(mm);
          free(nn);
          free(pp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 52994
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int clk = 10;
        
          int _len_mm0 = 100;
          unsigned char * mm = (unsigned char *) malloc(_len_mm0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_nn0 = 100;
          unsigned char * nn = (unsigned char *) malloc(_len_nn0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
            nn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pp0 = 100;
          unsigned char * pp = (unsigned char *) malloc(_len_pp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm2_mnp(clk,mm,nn,pp);
          free(mm);
          free(nn);
          free(pp);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 52994
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int clk = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mm0 = 1;
          unsigned char * mm = (unsigned char *) malloc(_len_mm0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_nn0 = 1;
          unsigned char * nn = (unsigned char *) malloc(_len_nn0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
            nn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pp0 = 1;
          unsigned char * pp = (unsigned char *) malloc(_len_pp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm2_mnp(clk,mm,nn,pp);
          free(mm);
          free(nn);
          free(pp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
