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
struct mvpp2_prs_entry {int* tcam; } ;

/* Variables and functions */
 int MVPP2_PRS_AI_MASK ; 
 size_t MVPP2_PRS_TCAM_AI_WORD ; 

__attribute__((used)) static int mvpp2_prs_tcam_ai_get(struct mvpp2_prs_entry *pe)
{
	return pe->tcam[MVPP2_PRS_TCAM_AI_WORD] & MVPP2_PRS_AI_MASK;
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
          int _len_pe0 = 1;
          struct mvpp2_prs_entry * pe = (struct mvpp2_prs_entry *) malloc(_len_pe0*sizeof(struct mvpp2_prs_entry));
          for(int _i0 = 0; _i0 < _len_pe0; _i0++) {
              int _len_pe__i0__tcam0 = 1;
          pe[_i0].tcam = (int *) malloc(_len_pe__i0__tcam0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pe__i0__tcam0; _j0++) {
            pe[_i0].tcam[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mvpp2_prs_tcam_ai_get(pe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pe0; _aux++) {
          free(pe[_aux].tcam);
          }
          free(pe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
