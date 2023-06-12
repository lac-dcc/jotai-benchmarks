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
       3            linked\n\
       4            empty\n\
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
struct rockchip_cpuclk_rate_table {unsigned long prate; } ;
struct rockchip_cpuclk {int rate_count; struct rockchip_cpuclk_rate_table* rate_table; } ;

/* Variables and functions */

__attribute__((used)) static const struct rockchip_cpuclk_rate_table *rockchip_get_cpuclk_settings(
			    struct rockchip_cpuclk *cpuclk, unsigned long rate)
{
	const struct rockchip_cpuclk_rate_table *rate_table =
							cpuclk->rate_table;
	int i;

	for (i = 0; i < cpuclk->rate_count; i++) {
		if (rate == rate_table[i].prate)
			return &rate_table[i];
	}

	return NULL;
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
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long rate = 100;
        
          int _len_cpuclk0 = 1;
          struct rockchip_cpuclk * cpuclk = (struct rockchip_cpuclk *) malloc(_len_cpuclk0*sizeof(struct rockchip_cpuclk));
          for(int _i0 = 0; _i0 < _len_cpuclk0; _i0++) {
              cpuclk[_i0].rate_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpuclk__i0__rate_table0 = 1;
          cpuclk[_i0].rate_table = (struct rockchip_cpuclk_rate_table *) malloc(_len_cpuclk__i0__rate_table0*sizeof(struct rockchip_cpuclk_rate_table));
          for(int _j0 = 0; _j0 < _len_cpuclk__i0__rate_table0; _j0++) {
              cpuclk[_i0].rate_table->prate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rockchip_cpuclk_rate_table * benchRet = rockchip_get_cpuclk_settings(cpuclk,rate);
          for(int _aux = 0; _aux < _len_cpuclk0; _aux++) {
          free(cpuclk[_aux].rate_table);
          }
          free(cpuclk);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long rate = 255;
        
          int _len_cpuclk0 = 65025;
          struct rockchip_cpuclk * cpuclk = (struct rockchip_cpuclk *) malloc(_len_cpuclk0*sizeof(struct rockchip_cpuclk));
          for(int _i0 = 0; _i0 < _len_cpuclk0; _i0++) {
              cpuclk[_i0].rate_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpuclk__i0__rate_table0 = 1;
          cpuclk[_i0].rate_table = (struct rockchip_cpuclk_rate_table *) malloc(_len_cpuclk__i0__rate_table0*sizeof(struct rockchip_cpuclk_rate_table));
          for(int _j0 = 0; _j0 < _len_cpuclk__i0__rate_table0; _j0++) {
              cpuclk[_i0].rate_table->prate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rockchip_cpuclk_rate_table * benchRet = rockchip_get_cpuclk_settings(cpuclk,rate);
          for(int _aux = 0; _aux < _len_cpuclk0; _aux++) {
          free(cpuclk[_aux].rate_table);
          }
          free(cpuclk);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long rate = 10;
        
          int _len_cpuclk0 = 100;
          struct rockchip_cpuclk * cpuclk = (struct rockchip_cpuclk *) malloc(_len_cpuclk0*sizeof(struct rockchip_cpuclk));
          for(int _i0 = 0; _i0 < _len_cpuclk0; _i0++) {
              cpuclk[_i0].rate_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpuclk__i0__rate_table0 = 1;
          cpuclk[_i0].rate_table = (struct rockchip_cpuclk_rate_table *) malloc(_len_cpuclk__i0__rate_table0*sizeof(struct rockchip_cpuclk_rate_table));
          for(int _j0 = 0; _j0 < _len_cpuclk__i0__rate_table0; _j0++) {
              cpuclk[_i0].rate_table->prate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rockchip_cpuclk_rate_table * benchRet = rockchip_get_cpuclk_settings(cpuclk,rate);
          for(int _aux = 0; _aux < _len_cpuclk0; _aux++) {
          free(cpuclk[_aux].rate_table);
          }
          free(cpuclk);
        
        break;
    }


    // linked
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cpuclk0 = 1;
          struct rockchip_cpuclk * cpuclk = (struct rockchip_cpuclk *) malloc(_len_cpuclk0*sizeof(struct rockchip_cpuclk));
          for(int _i0 = 0; _i0 < _len_cpuclk0; _i0++) {
              cpuclk[_i0].rate_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpuclk__i0__rate_table0 = 1;
          cpuclk[_i0].rate_table = (struct rockchip_cpuclk_rate_table *) malloc(_len_cpuclk__i0__rate_table0*sizeof(struct rockchip_cpuclk_rate_table));
          for(int _j0 = 0; _j0 < _len_cpuclk__i0__rate_table0; _j0++) {
              cpuclk[_i0].rate_table->prate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rockchip_cpuclk_rate_table * benchRet = rockchip_get_cpuclk_settings(cpuclk,rate);
          for(int _aux = 0; _aux < _len_cpuclk0; _aux++) {
          free(cpuclk[_aux].rate_table);
          }
          free(cpuclk);
        
        break;
    }


    // empty
    case 4:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cpuclk0 = 1;
          struct rockchip_cpuclk * cpuclk = (struct rockchip_cpuclk *) malloc(_len_cpuclk0*sizeof(struct rockchip_cpuclk));
          for(int _i0 = 0; _i0 < _len_cpuclk0; _i0++) {
              cpuclk[_i0].rate_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpuclk__i0__rate_table0 = 1;
          cpuclk[_i0].rate_table = (struct rockchip_cpuclk_rate_table *) malloc(_len_cpuclk__i0__rate_table0*sizeof(struct rockchip_cpuclk_rate_table));
          for(int _j0 = 0; _j0 < _len_cpuclk__i0__rate_table0; _j0++) {
              cpuclk[_i0].rate_table->prate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          const struct rockchip_cpuclk_rate_table * benchRet = rockchip_get_cpuclk_settings(cpuclk,rate);
          for(int _aux = 0; _aux < _len_cpuclk0; _aux++) {
          free(cpuclk[_aux].rate_table);
          }
          free(cpuclk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
