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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/ * cvar_cache; } ;
typedef  TYPE_1__ git_repository ;

/* Variables and functions */
 int GIT_CVAR_CACHE_MAX ; 
 int /*<<< orphan*/  GIT_CVAR_NOT_CACHED ; 

void git_repository__cvar_cache_clear(git_repository *repo)
{
	int i;

	for (i = 0; i < GIT_CVAR_CACHE_MAX; ++i)
		repo->cvar_cache[i] = GIT_CVAR_NOT_CACHED;
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
          int _len_repo0 = 1;
          struct TYPE_3__ * repo = (struct TYPE_3__ *) malloc(_len_repo0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_repo0; _i0++) {
              int _len_repo__i0__cvar_cache0 = 1;
          repo[_i0].cvar_cache = (int *) malloc(_len_repo__i0__cvar_cache0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_repo__i0__cvar_cache0; _j0++) {
            repo[_i0].cvar_cache[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          git_repository__cvar_cache_clear(repo);
          for(int _aux = 0; _aux < _len_repo0; _aux++) {
          free(repo[_aux].cvar_cache);
          }
          free(repo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
