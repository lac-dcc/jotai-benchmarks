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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct fbtft_par {int dummy; } ;
struct TYPE_2__ {int xs; int ys_page; int xe; int ye_page; } ;

/* Variables and functions */
 TYPE_1__ addr_win ; 

__attribute__((used)) static void set_addr_win(struct fbtft_par *par, int xs, int ys, int xe, int ye)
{
	addr_win.xs = xs;
	addr_win.ys_page = ys / 8;
	addr_win.xe = xe;
	addr_win.ye_page = ye / 8;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int xs = 100;
        
          int ys = 100;
        
          int xe = 100;
        
          int ye = 100;
        
          int _len_par0 = 1;
          struct fbtft_par * par = (struct fbtft_par *) malloc(_len_par0*sizeof(struct fbtft_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              par[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_addr_win(par,xs,ys,xe,ye);
          free(par);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int xs = 255;
        
          int ys = 255;
        
          int xe = 255;
        
          int ye = 255;
        
          int _len_par0 = 65025;
          struct fbtft_par * par = (struct fbtft_par *) malloc(_len_par0*sizeof(struct fbtft_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              par[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_addr_win(par,xs,ys,xe,ye);
          free(par);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int xs = 10;
        
          int ys = 10;
        
          int xe = 10;
        
          int ye = 10;
        
          int _len_par0 = 100;
          struct fbtft_par * par = (struct fbtft_par *) malloc(_len_par0*sizeof(struct fbtft_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              par[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_addr_win(par,xs,ys,xe,ye);
          free(par);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int xs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int ys = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int xe = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int ye = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_par0 = 1;
          struct fbtft_par * par = (struct fbtft_par *) malloc(_len_par0*sizeof(struct fbtft_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              par[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_addr_win(par,xs,ys,xe,ye);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
