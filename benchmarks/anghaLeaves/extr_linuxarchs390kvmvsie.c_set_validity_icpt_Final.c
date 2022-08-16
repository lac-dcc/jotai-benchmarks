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
struct kvm_s390_sie_block {int ipa; int ipb; int /*<<< orphan*/  icptcode; } ;
typedef  int __u32 ;
typedef  scalar_t__ __u16 ;

/* Variables and functions */
 int /*<<< orphan*/  ICPT_VALIDITY ; 

__attribute__((used)) static int set_validity_icpt(struct kvm_s390_sie_block *scb,
			     __u16 reason_code)
{
	scb->ipa = 0x1000;
	scb->ipb = ((__u32) reason_code) << 16;
	scb->icptcode = ICPT_VALIDITY;
	return 1;
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
          long reason_code = 100;
          int _len_scb0 = 1;
          struct kvm_s390_sie_block * scb = (struct kvm_s390_sie_block *) malloc(_len_scb0*sizeof(struct kvm_s390_sie_block));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
            scb[_i0].ipa = ((-2 * (next_i()%2)) + 1) * next_i();
        scb[_i0].ipb = ((-2 * (next_i()%2)) + 1) * next_i();
        scb[_i0].icptcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_validity_icpt(scb,reason_code);
          printf("%d\n", benchRet); 
          free(scb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
