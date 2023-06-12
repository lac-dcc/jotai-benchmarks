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
struct bufdesc_prop {int dsize; struct bufdesc* base; struct bufdesc* last; } ;
struct bufdesc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct bufdesc *fec_enet_get_nextdesc(struct bufdesc *bdp,
					     struct bufdesc_prop *bd)
{
	return (bdp >= bd->last) ? bd->base
			: (struct bufdesc *)(((void *)bdp) + bd->dsize);
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int _len_bdp0 = 65025;
          struct bufdesc * bdp = (struct bufdesc *) malloc(_len_bdp0*sizeof(struct bufdesc));
          for(int _i0 = 0; _i0 < _len_bdp0; _i0++) {
              bdp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_bd0 = 65025;
          struct bufdesc_prop * bd = (struct bufdesc_prop *) malloc(_len_bd0*sizeof(struct bufdesc_prop));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
              bd[_i0].dsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bd__i0__base0 = 1;
          bd[_i0].base = (struct bufdesc *) malloc(_len_bd__i0__base0*sizeof(struct bufdesc));
          for(int _j0 = 0; _j0 < _len_bd__i0__base0; _j0++) {
              bd[_i0].base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_bd__i0__last0 = 1;
          bd[_i0].last = (struct bufdesc *) malloc(_len_bd__i0__last0*sizeof(struct bufdesc));
          for(int _j0 = 0; _j0 < _len_bd__i0__last0; _j0++) {
              bd[_i0].last->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct bufdesc * benchRet = fec_enet_get_nextdesc(bdp,bd);
          printf("%d\n", (*benchRet).dummy);
          free(bdp);
          for(int _aux = 0; _aux < _len_bd0; _aux++) {
          free(bd[_aux].base);
          }
          for(int _aux = 0; _aux < _len_bd0; _aux++) {
          free(bd[_aux].last);
          }
          free(bd);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_bdp0 = 100;
          struct bufdesc * bdp = (struct bufdesc *) malloc(_len_bdp0*sizeof(struct bufdesc));
          for(int _i0 = 0; _i0 < _len_bdp0; _i0++) {
              bdp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_bd0 = 100;
          struct bufdesc_prop * bd = (struct bufdesc_prop *) malloc(_len_bd0*sizeof(struct bufdesc_prop));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
              bd[_i0].dsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bd__i0__base0 = 1;
          bd[_i0].base = (struct bufdesc *) malloc(_len_bd__i0__base0*sizeof(struct bufdesc));
          for(int _j0 = 0; _j0 < _len_bd__i0__base0; _j0++) {
              bd[_i0].base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_bd__i0__last0 = 1;
          bd[_i0].last = (struct bufdesc *) malloc(_len_bd__i0__last0*sizeof(struct bufdesc));
          for(int _j0 = 0; _j0 < _len_bd__i0__last0; _j0++) {
              bd[_i0].last->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct bufdesc * benchRet = fec_enet_get_nextdesc(bdp,bd);
          printf("%d\n", (*benchRet).dummy);
          free(bdp);
          for(int _aux = 0; _aux < _len_bd0; _aux++) {
          free(bd[_aux].base);
          }
          for(int _aux = 0; _aux < _len_bd0; _aux++) {
          free(bd[_aux].last);
          }
          free(bd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
