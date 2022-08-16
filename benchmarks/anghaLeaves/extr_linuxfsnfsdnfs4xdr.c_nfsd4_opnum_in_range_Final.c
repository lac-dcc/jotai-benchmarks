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
struct nfsd4_op {scalar_t__ opnum; } ;
struct nfsd4_compoundargs {int minorversion; } ;

/* Variables and functions */
 scalar_t__ FIRST_NFS4_OP ; 
 scalar_t__ LAST_NFS40_OP ; 
 scalar_t__ LAST_NFS41_OP ; 
 scalar_t__ LAST_NFS42_OP ; 

__attribute__((used)) static inline bool
nfsd4_opnum_in_range(struct nfsd4_compoundargs *argp, struct nfsd4_op *op)
{
	if (op->opnum < FIRST_NFS4_OP)
		return false;
	else if (argp->minorversion == 0 && op->opnum > LAST_NFS40_OP)
		return false;
	else if (argp->minorversion == 1 && op->opnum > LAST_NFS41_OP)
		return false;
	else if (argp->minorversion == 2 && op->opnum > LAST_NFS42_OP)
		return false;
	return true;
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
          int _len_argp0 = 1;
          struct nfsd4_compoundargs * argp = (struct nfsd4_compoundargs *) malloc(_len_argp0*sizeof(struct nfsd4_compoundargs));
          for(int _i0 = 0; _i0 < _len_argp0; _i0++) {
            argp[_i0].minorversion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_op0 = 1;
          struct nfsd4_op * op = (struct nfsd4_op *) malloc(_len_op0*sizeof(struct nfsd4_op));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].opnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfsd4_opnum_in_range(argp,op);
          printf("%d\n", benchRet); 
          free(argp);
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
