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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {scalar_t__ got; } ;
struct TYPE_9__ {scalar_t__ got; } ;
struct TYPE_8__ {scalar_t__ got; } ;
struct TYPE_7__ {scalar_t__ got; } ;
struct TYPE_6__ {scalar_t__ got; } ;
struct insn {TYPE_5__ immediate; TYPE_4__ displacement; TYPE_3__ sib; TYPE_2__ modrm; TYPE_1__ opcode; } ;

/* Variables and functions */

__attribute__((used)) static inline int insn_complete(struct insn *insn)
{
	return insn->opcode.got && insn->modrm.got && insn->sib.got &&
		insn->displacement.got && insn->immediate.got;
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
          int _len_insn0 = 1;
          struct insn * insn = (struct insn *) malloc(_len_insn0*sizeof(struct insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0].immediate.got = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].displacement.got = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].sib.got = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].modrm.got = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].opcode.got = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = insn_complete(insn);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
