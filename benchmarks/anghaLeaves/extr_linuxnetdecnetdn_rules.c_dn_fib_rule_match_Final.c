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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct flowidn {int daddr; int saddr; } ;
struct TYPE_2__ {struct flowidn dn; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_rule {int dummy; } ;
struct dn_fib_rule {int src; int srcmask; int dst; int dstmask; } ;
typedef  int __le16 ;

/* Variables and functions */

__attribute__((used)) static int dn_fib_rule_match(struct fib_rule *rule, struct flowi *fl, int flags)
{
	struct dn_fib_rule *r = (struct dn_fib_rule *)rule;
	struct flowidn *fld = &fl->u.dn;
	__le16 daddr = fld->daddr;
	__le16 saddr = fld->saddr;

	if (((saddr ^ r->src) & r->srcmask) ||
	    ((daddr ^ r->dst) & r->dstmask))
		return 0;

	return 1;
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int flags = 255;
        
          int _len_rule0 = 65025;
          struct fib_rule * rule = (struct fib_rule *) malloc(_len_rule0*sizeof(struct fib_rule));
          for(int _i0 = 0; _i0 < _len_rule0; _i0++) {
              rule[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fl0 = 65025;
          struct flowi * fl = (struct flowi *) malloc(_len_fl0*sizeof(struct flowi));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
              fl[_i0].u.dn.daddr = ((-2 * (next_i()%2)) + 1) * next_i();
          fl[_i0].u.dn.saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = dn_fib_rule_match(rule,fl,flags);
          printf("%d\n", benchRet); 
          free(rule);
          free(fl);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int flags = 10;
        
          int _len_rule0 = 100;
          struct fib_rule * rule = (struct fib_rule *) malloc(_len_rule0*sizeof(struct fib_rule));
          for(int _i0 = 0; _i0 < _len_rule0; _i0++) {
              rule[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fl0 = 100;
          struct flowi * fl = (struct flowi *) malloc(_len_fl0*sizeof(struct flowi));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
              fl[_i0].u.dn.daddr = ((-2 * (next_i()%2)) + 1) * next_i();
          fl[_i0].u.dn.saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = dn_fib_rule_match(rule,fl,flags);
          printf("%d\n", benchRet); 
          free(rule);
          free(fl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
