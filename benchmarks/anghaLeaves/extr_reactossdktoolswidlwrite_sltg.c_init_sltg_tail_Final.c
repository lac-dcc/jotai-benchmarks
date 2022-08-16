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
struct sltg_tail {int funcs_off; int vars_off; int impls_off; int funcs_bytes; int vars_bytes; int impls_bytes; int tdescalias_vt; int res16; int cbAlignment; int res24; int res26; int res2a; int res2c; int res2e; int res30; scalar_t__ type_bytes; scalar_t__ res32; scalar_t__ cbSizeVft; scalar_t__ cbSizeInstance; scalar_t__ res1e; scalar_t__ simple_alias; scalar_t__ res1a; scalar_t__ res18; scalar_t__ res06; scalar_t__ cImplTypes; scalar_t__ cVars; scalar_t__ cFuncs; } ;

/* Variables and functions */

__attribute__((used)) static void init_sltg_tail(struct sltg_tail *tail)
{
    tail->cFuncs = 0;
    tail->cVars = 0;
    tail->cImplTypes = 0;
    tail->res06 = 0;
    tail->funcs_off = -1;
    tail->vars_off = -1;
    tail->impls_off = -1;
    tail->funcs_bytes = -1;
    tail->vars_bytes = -1;
    tail->impls_bytes = -1;
    tail->tdescalias_vt = -1;
    tail->res16 = -1;
    tail->res18 = 0;
    tail->res1a = 0;
    tail->simple_alias = 0;
    tail->res1e = 0;
    tail->cbSizeInstance = 0;
    tail->cbAlignment = 4;
    tail->res24 = -1;
    tail->res26 = -1;
    tail->cbSizeVft = 0;
    tail->res2a = -1;
    tail->res2c = -1;
    tail->res2e = -1;
    tail->res30 = -1;
    tail->res32 = 0;
    tail->type_bytes = 0;
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
          int _len_tail0 = 1;
          struct sltg_tail * tail = (struct sltg_tail *) malloc(_len_tail0*sizeof(struct sltg_tail));
          for(int _i0 = 0; _i0 < _len_tail0; _i0++) {
            tail[_i0].funcs_off = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].vars_off = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].impls_off = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].funcs_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].vars_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].impls_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].tdescalias_vt = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res16 = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].cbAlignment = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res24 = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res26 = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res2a = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res2c = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res2e = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res30 = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].type_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res32 = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].cbSizeVft = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].cbSizeInstance = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res1e = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].simple_alias = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res1a = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res18 = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].res06 = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].cImplTypes = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].cVars = ((-2 * (next_i()%2)) + 1) * next_i();
        tail[_i0].cFuncs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_sltg_tail(tail);
          free(tail);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
