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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ cr_flavor; } ;
struct svc_rqst {TYPE_1__ rq_cred; } ;
struct svc_export {int ex_nflavors; int ex_flags; struct exp_flavor_info* ex_flavors; } ;
struct exp_flavor_info {scalar_t__ pseudoflavor; int flags; } ;

/* Variables and functions */

int nfsexp_flags(struct svc_rqst *rqstp, struct svc_export *exp)
{
	struct exp_flavor_info *f;
	struct exp_flavor_info *end = exp->ex_flavors + exp->ex_nflavors;

	for (f = exp->ex_flavors; f < end; f++) {
		if (f->pseudoflavor == rqstp->rq_cred.cr_flavor)
			return f->flags;
	}
	return exp->ex_flags;

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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
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
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_rqstp0 = 65025;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              rqstp[_i0].rq_cred.cr_flavor = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_exp0 = 65025;
          struct svc_export * exp = (struct svc_export *) malloc(_len_exp0*sizeof(struct svc_export));
          for(int _i0 = 0; _i0 < _len_exp0; _i0++) {
              exp[_i0].ex_nflavors = ((-2 * (next_i()%2)) + 1) * next_i();
          exp[_i0].ex_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_exp__i0__ex_flavors0 = 1;
          exp[_i0].ex_flavors = (struct exp_flavor_info *) malloc(_len_exp__i0__ex_flavors0*sizeof(struct exp_flavor_info));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_flavors0; _j0++) {
              exp[_i0].ex_flavors->pseudoflavor = ((-2 * (next_i()%2)) + 1) * next_i();
          exp[_i0].ex_flavors->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = nfsexp_flags(rqstp,exp);
          printf("%d\n", benchRet); 
          free(rqstp);
          for(int _aux = 0; _aux < _len_exp0; _aux++) {
          free(exp[_aux].ex_flavors);
          }
          free(exp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
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
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_rqstp0 = 100;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              rqstp[_i0].rq_cred.cr_flavor = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_exp0 = 100;
          struct svc_export * exp = (struct svc_export *) malloc(_len_exp0*sizeof(struct svc_export));
          for(int _i0 = 0; _i0 < _len_exp0; _i0++) {
              exp[_i0].ex_nflavors = ((-2 * (next_i()%2)) + 1) * next_i();
          exp[_i0].ex_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_exp__i0__ex_flavors0 = 1;
          exp[_i0].ex_flavors = (struct exp_flavor_info *) malloc(_len_exp__i0__ex_flavors0*sizeof(struct exp_flavor_info));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_flavors0; _j0++) {
              exp[_i0].ex_flavors->pseudoflavor = ((-2 * (next_i()%2)) + 1) * next_i();
          exp[_i0].ex_flavors->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = nfsexp_flags(rqstp,exp);
          printf("%d\n", benchRet); 
          free(rqstp);
          for(int _aux = 0; _aux < _len_exp0; _aux++) {
          free(exp[_aux].ex_flavors);
          }
          free(exp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
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
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_rqstp0 = 1;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              rqstp[_i0].rq_cred.cr_flavor = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_exp0 = 1;
          struct svc_export * exp = (struct svc_export *) malloc(_len_exp0*sizeof(struct svc_export));
          for(int _i0 = 0; _i0 < _len_exp0; _i0++) {
              exp[_i0].ex_nflavors = ((-2 * (next_i()%2)) + 1) * next_i();
          exp[_i0].ex_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_exp__i0__ex_flavors0 = 1;
          exp[_i0].ex_flavors = (struct exp_flavor_info *) malloc(_len_exp__i0__ex_flavors0*sizeof(struct exp_flavor_info));
          for(int _j0 = 0; _j0 < _len_exp__i0__ex_flavors0; _j0++) {
              exp[_i0].ex_flavors->pseudoflavor = ((-2 * (next_i()%2)) + 1) * next_i();
          exp[_i0].ex_flavors->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = nfsexp_flags(rqstp,exp);
          printf("%d\n", benchRet); 
          free(rqstp);
          for(int _aux = 0; _aux < _len_exp0; _aux++) {
          free(exp[_aux].ex_flavors);
          }
          free(exp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
