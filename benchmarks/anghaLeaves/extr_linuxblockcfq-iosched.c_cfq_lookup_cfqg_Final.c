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

/* Type definitions */
struct cfq_group {int dummy; } ;
struct cfq_data {struct cfq_group* root_group; } ;
struct blkcg {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct cfq_group *cfq_lookup_cfqg(struct cfq_data *cfqd,
					 struct blkcg *blkcg)
{
	return cfqd->root_group;
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
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
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

          int _len_cfqd0 = 65025;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
              int _len_cfqd__i0__root_group0 = 1;
          cfqd[_i0].root_group = (struct cfq_group *) malloc(_len_cfqd__i0__root_group0*sizeof(struct cfq_group));
          for(int _j0 = 0; _j0 < _len_cfqd__i0__root_group0; _j0++) {
              cfqd[_i0].root_group->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_blkcg0 = 65025;
          struct blkcg * blkcg = (struct blkcg *) malloc(_len_blkcg0*sizeof(struct blkcg));
          for(int _i0 = 0; _i0 < _len_blkcg0; _i0++) {
              blkcg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct cfq_group * benchRet = cfq_lookup_cfqg(cfqd,blkcg);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cfqd0; _aux++) {
          free(cfqd[_aux].root_group);
          }
          free(cfqd);
          free(blkcg);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
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

          int _len_cfqd0 = 100;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
              int _len_cfqd__i0__root_group0 = 1;
          cfqd[_i0].root_group = (struct cfq_group *) malloc(_len_cfqd__i0__root_group0*sizeof(struct cfq_group));
          for(int _j0 = 0; _j0 < _len_cfqd__i0__root_group0; _j0++) {
              cfqd[_i0].root_group->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_blkcg0 = 100;
          struct blkcg * blkcg = (struct blkcg *) malloc(_len_blkcg0*sizeof(struct blkcg));
          for(int _i0 = 0; _i0 < _len_blkcg0; _i0++) {
              blkcg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct cfq_group * benchRet = cfq_lookup_cfqg(cfqd,blkcg);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cfqd0; _aux++) {
          free(cfqd[_aux].root_group);
          }
          free(cfqd);
          free(blkcg);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
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

          int _len_cfqd0 = 1;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
              int _len_cfqd__i0__root_group0 = 1;
          cfqd[_i0].root_group = (struct cfq_group *) malloc(_len_cfqd__i0__root_group0*sizeof(struct cfq_group));
          for(int _j0 = 0; _j0 < _len_cfqd__i0__root_group0; _j0++) {
              cfqd[_i0].root_group->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_blkcg0 = 1;
          struct blkcg * blkcg = (struct blkcg *) malloc(_len_blkcg0*sizeof(struct blkcg));
          for(int _i0 = 0; _i0 < _len_blkcg0; _i0++) {
              blkcg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct cfq_group * benchRet = cfq_lookup_cfqg(cfqd,blkcg);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cfqd0; _aux++) {
          free(cfqd[_aux].root_group);
          }
          free(cfqd);
          free(blkcg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
