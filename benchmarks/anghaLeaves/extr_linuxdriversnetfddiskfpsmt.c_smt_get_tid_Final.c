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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u_long ;
struct TYPE_2__ {int smt_tid; } ;
struct s_smc {TYPE_1__ sm; } ;

/* Variables and functions */
 int SMT_TID_MAGIC ; 

u_long smt_get_tid(struct s_smc *smc)
{
	u_long	tid ;
	while ((tid = ++(smc->sm.smt_tid) ^ SMT_TID_MAGIC) == 0)
		;
	return tid & 0x3fffffffL;
}


// ------------------------------------------------------------------------- //




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
          int _len_smc0 = 1;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
            smc[_i0].sm.smt_tid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smt_get_tid(smc);
          printf("%d\n", benchRet); 
          free(smc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_smc0 = 100;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
            smc[_i0].sm.smt_tid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smt_get_tid(smc);
          printf("%d\n", benchRet); 
          free(smc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
