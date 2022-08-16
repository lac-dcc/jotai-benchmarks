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
struct cEnv_t {int /*<<< orphan*/  TRIPLET; int /*<<< orphan*/  SHDR; int /*<<< orphan*/  LDFLAGS; int /*<<< orphan*/  CFLAGS; int /*<<< orphan*/  CC; int /*<<< orphan*/  SFLIBPATH; } ;

/* Variables and functions */

__attribute__((used)) static inline bool r_egg_Cfile_check_cEnv(struct cEnv_t *cEnv) {
	return (!cEnv->SFLIBPATH || !cEnv->CC || !cEnv->CFLAGS || !cEnv->LDFLAGS
		|| !cEnv->SHDR || !cEnv->TRIPLET);
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
          int _len_cEnv0 = 1;
          struct cEnv_t * cEnv = (struct cEnv_t *) malloc(_len_cEnv0*sizeof(struct cEnv_t));
          for(int _i0 = 0; _i0 < _len_cEnv0; _i0++) {
            cEnv[_i0].TRIPLET = ((-2 * (next_i()%2)) + 1) * next_i();
        cEnv[_i0].SHDR = ((-2 * (next_i()%2)) + 1) * next_i();
        cEnv[_i0].LDFLAGS = ((-2 * (next_i()%2)) + 1) * next_i();
        cEnv[_i0].CFLAGS = ((-2 * (next_i()%2)) + 1) * next_i();
        cEnv[_i0].CC = ((-2 * (next_i()%2)) + 1) * next_i();
        cEnv[_i0].SFLIBPATH = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r_egg_Cfile_check_cEnv(cEnv);
          printf("%d\n", benchRet); 
          free(cEnv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
