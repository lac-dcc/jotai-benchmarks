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
struct t10_pr_registration {int pr_res_type; } ;

/* Variables and functions */
 int PR_TYPE_EXCLUSIVE_ACCESS_ALLREG ; 
 int PR_TYPE_WRITE_EXCLUSIVE_ALLREG ; 

__attribute__((used)) static int is_reservation_holder(
	struct t10_pr_registration *pr_res_holder,
	struct t10_pr_registration *pr_reg)
{
	int pr_res_type;

	if (pr_res_holder) {
		pr_res_type = pr_res_holder->pr_res_type;

		return pr_res_holder == pr_reg ||
		       pr_res_type == PR_TYPE_WRITE_EXCLUSIVE_ALLREG ||
		       pr_res_type == PR_TYPE_EXCLUSIVE_ACCESS_ALLREG;
	}
	return 0;
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
          int _len_pr_res_holder0 = 1;
          struct t10_pr_registration * pr_res_holder = (struct t10_pr_registration *) malloc(_len_pr_res_holder0*sizeof(struct t10_pr_registration));
          for(int _i0 = 0; _i0 < _len_pr_res_holder0; _i0++) {
            pr_res_holder[_i0].pr_res_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pr_reg0 = 1;
          struct t10_pr_registration * pr_reg = (struct t10_pr_registration *) malloc(_len_pr_reg0*sizeof(struct t10_pr_registration));
          for(int _i0 = 0; _i0 < _len_pr_reg0; _i0++) {
            pr_reg[_i0].pr_res_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_reservation_holder(pr_res_holder,pr_reg);
          printf("%d\n", benchRet); 
          free(pr_res_holder);
          free(pr_reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
