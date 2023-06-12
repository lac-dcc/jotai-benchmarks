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
struct pblk {int sec_per_write; } ;

/* Variables and functions */

void pblk_set_sec_per_write(struct pblk *pblk, int sec_per_write)
{
	pblk->sec_per_write = sec_per_write;
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
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int sec_per_write = 100;
        
          int _len_pblk0 = 1;
          struct pblk * pblk = (struct pblk *) malloc(_len_pblk0*sizeof(struct pblk));
          for(int _i0 = 0; _i0 < _len_pblk0; _i0++) {
              pblk[_i0].sec_per_write = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          pblk_set_sec_per_write(pblk,sec_per_write);
          free(pblk);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int sec_per_write = 255;
        
          int _len_pblk0 = 65025;
          struct pblk * pblk = (struct pblk *) malloc(_len_pblk0*sizeof(struct pblk));
          for(int _i0 = 0; _i0 < _len_pblk0; _i0++) {
              pblk[_i0].sec_per_write = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          pblk_set_sec_per_write(pblk,sec_per_write);
          free(pblk);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int sec_per_write = 10;
        
          int _len_pblk0 = 100;
          struct pblk * pblk = (struct pblk *) malloc(_len_pblk0*sizeof(struct pblk));
          for(int _i0 = 0; _i0 < _len_pblk0; _i0++) {
              pblk[_i0].sec_per_write = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          pblk_set_sec_per_write(pblk,sec_per_write);
          free(pblk);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int sec_per_write = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pblk0 = 1;
          struct pblk * pblk = (struct pblk *) malloc(_len_pblk0*sizeof(struct pblk));
          for(int _i0 = 0; _i0 < _len_pblk0; _i0++) {
              pblk[_i0].sec_per_write = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          pblk_set_sec_per_write(pblk,sec_per_write);
          free(pblk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
