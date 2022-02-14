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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct runtime_instr_cb {int rca; int roa; int rla; int s; int k; scalar_t__ h; scalar_t__ reserved1; int ps; scalar_t__ qs; int pc; scalar_t__ qc; scalar_t__ reserved2; scalar_t__ key; scalar_t__ reserved3; scalar_t__ reserved4; scalar_t__ reserved5; scalar_t__ reserved6; scalar_t__ reserved7; scalar_t__ reserved8; int m; } ;

/* Variables and functions */
 scalar_t__ PAGE_DEFAULT_KEY ; 

__attribute__((used)) static bool is_ri_cb_valid(struct runtime_instr_cb *cb)
{
	return (cb->rca & 0x1f) == 0 &&
		(cb->roa & 0xfff) == 0 &&
		(cb->rla & 0xfff) == 0xfff &&
		cb->s == 1 &&
		cb->k == 1 &&
		cb->h == 0 &&
		cb->reserved1 == 0 &&
		cb->ps == 1 &&
		cb->qs == 0 &&
		cb->pc == 1 &&
		cb->qc == 0 &&
		cb->reserved2 == 0 &&
		cb->key == PAGE_DEFAULT_KEY &&
		cb->reserved3 == 0 &&
		cb->reserved4 == 0 &&
		cb->reserved5 == 0 &&
		cb->reserved6 == 0 &&
		cb->reserved7 == 0 &&
		cb->reserved8 == 0 &&
		cb->rla >= cb->roa &&
		cb->rca >= cb->roa &&
		cb->rca <= cb->rla+1 &&
		cb->m < 3;
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

    // big-arr
    case 0:
    {
          int _len_cb0 = 1;
          struct runtime_instr_cb * cb = (struct runtime_instr_cb *) malloc(_len_cb0*sizeof(struct runtime_instr_cb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb->rca = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->roa = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->rla = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->s = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->k = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->h = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved1 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->ps = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->qs = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->pc = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->qc = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved2 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->key = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved3 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved4 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved5 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved6 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved7 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->reserved8 = ((-2 * (next_i()%2)) + 1) * next_i();
        cb->m = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_ri_cb_valid(cb);
          printf("%d\n", benchRet); 
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
