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
       0            empty\n\
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
struct fpm_scoreboard_s {unsigned int nprocs; struct fpm_scoreboard_proc_s** procs; } ;
struct fpm_scoreboard_proc_s {int dummy; } ;

/* Variables and functions */
 struct fpm_scoreboard_s* fpm_scoreboard ; 
 int fpm_scoreboard_i ; 

struct fpm_scoreboard_proc_s *fpm_scoreboard_proc_get(struct fpm_scoreboard_s *scoreboard, int child_index) /* {{{*/
{
	if (!scoreboard) {
		scoreboard = fpm_scoreboard;
	}

	if (!scoreboard) {
		return NULL;
	}

	if (child_index < 0) {
		child_index = fpm_scoreboard_i;
	}

	if (child_index < 0 || (unsigned int)child_index >= scoreboard->nprocs) {
		return NULL;
	}

	return scoreboard->procs[child_index];
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int child_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_scoreboard0 = 1;
          struct fpm_scoreboard_s * scoreboard = (struct fpm_scoreboard_s *) malloc(_len_scoreboard0*sizeof(struct fpm_scoreboard_s));
          for(int _i0 = 0; _i0 < _len_scoreboard0; _i0++) {
              scoreboard[_i0].nprocs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scoreboard__i0__procs0 = 1;
          scoreboard[_i0].procs = (struct fpm_scoreboard_proc_s **) malloc(_len_scoreboard__i0__procs0*sizeof(struct fpm_scoreboard_proc_s *));
          for(int _j0 = 0; _j0 < _len_scoreboard__i0__procs0; _j0++) {
            int _len_scoreboard__i0__procs1 = 1;
            scoreboard[_i0].procs[_j0] = (struct fpm_scoreboard_proc_s *) malloc(_len_scoreboard__i0__procs1*sizeof(struct fpm_scoreboard_proc_s));
            for(int _j1 = 0; _j1 < _len_scoreboard__i0__procs1; _j1++) {
                scoreboard[_i0].procs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          struct fpm_scoreboard_proc_s * benchRet = fpm_scoreboard_proc_get(scoreboard,child_index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_scoreboard0; _aux++) {
          free(*(scoreboard[_aux].procs));
        free(scoreboard[_aux].procs);
          }
          free(scoreboard);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
