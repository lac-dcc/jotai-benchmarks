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
typedef  TYPE_1__* proc_t ;
struct TYPE_3__ {scalar_t__* p_name; char* p_comm; } ;

/* Variables and functions */

char *
proc_best_name(proc_t p)
{
    if (p->p_name[0] != 0)
        return (&p->p_name[0]);
    return (&p->p_comm[0]);
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__p_name0 = 1;
          p[_i0].p_name = (long *) malloc(_len_p__i0__p_name0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p__i0__p_name0; _j0++) {
            p[_i0].p_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__p_comm0 = 1;
          p[_i0].p_comm = (char *) malloc(_len_p__i0__p_comm0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_p__i0__p_comm0; _j0++) {
            p[_i0].p_comm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = proc_best_name(p);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].p_name);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].p_comm);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
