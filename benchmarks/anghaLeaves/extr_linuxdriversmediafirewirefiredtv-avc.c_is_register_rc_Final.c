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
struct avc_response_frame {scalar_t__ opcode; scalar_t__* operand; } ;

/* Variables and functions */
 scalar_t__ AVC_OPCODE_VENDOR ; 
 scalar_t__ SFE_VENDOR_DE_COMPANYID_0 ; 
 scalar_t__ SFE_VENDOR_DE_COMPANYID_1 ; 
 scalar_t__ SFE_VENDOR_DE_COMPANYID_2 ; 
 scalar_t__ SFE_VENDOR_OPCODE_REGISTER_REMOTE_CONTROL ; 

__attribute__((used)) static bool is_register_rc(struct avc_response_frame *r)
{
	return r->opcode     == AVC_OPCODE_VENDOR &&
	       r->operand[0] == SFE_VENDOR_DE_COMPANYID_0 &&
	       r->operand[1] == SFE_VENDOR_DE_COMPANYID_1 &&
	       r->operand[2] == SFE_VENDOR_DE_COMPANYID_2 &&
	       r->operand[3] == SFE_VENDOR_OPCODE_REGISTER_REMOTE_CONTROL;
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
          int _len_r0 = 1;
          struct avc_response_frame * r = (struct avc_response_frame *) malloc(_len_r0*sizeof(struct avc_response_frame));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__operand0 = 1;
          r[_i0].operand = (long *) malloc(_len_r__i0__operand0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__operand0; _j0++) {
            r[_i0].operand[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_register_rc(r);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].operand);
          }
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
