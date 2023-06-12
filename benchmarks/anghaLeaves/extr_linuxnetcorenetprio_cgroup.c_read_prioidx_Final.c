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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct cgroup_subsys_state {TYPE_1__* cgroup; } ;
struct cftype {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  id; } ;

/* Variables and functions */

__attribute__((used)) static u64 read_prioidx(struct cgroup_subsys_state *css, struct cftype *cft)
{
	return css->cgroup->id;
}

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
          int _len_css0 = 65025;
          struct cgroup_subsys_state * css = (struct cgroup_subsys_state *) malloc(_len_css0*sizeof(struct cgroup_subsys_state));
          for(int _i0 = 0; _i0 < _len_css0; _i0++) {
              int _len_css__i0__cgroup0 = 1;
          css[_i0].cgroup = (struct TYPE_2__ *) malloc(_len_css__i0__cgroup0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_css__i0__cgroup0; _j0++) {
              css[_i0].cgroup->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_cft0 = 65025;
          struct cftype * cft = (struct cftype *) malloc(_len_cft0*sizeof(struct cftype));
          for(int _i0 = 0; _i0 < _len_cft0; _i0++) {
              cft[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = read_prioidx(css,cft);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_css0; _aux++) {
          free(css[_aux].cgroup);
          }
          free(css);
          free(cft);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_css0 = 100;
          struct cgroup_subsys_state * css = (struct cgroup_subsys_state *) malloc(_len_css0*sizeof(struct cgroup_subsys_state));
          for(int _i0 = 0; _i0 < _len_css0; _i0++) {
              int _len_css__i0__cgroup0 = 1;
          css[_i0].cgroup = (struct TYPE_2__ *) malloc(_len_css__i0__cgroup0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_css__i0__cgroup0; _j0++) {
              css[_i0].cgroup->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_cft0 = 100;
          struct cftype * cft = (struct cftype *) malloc(_len_cft0*sizeof(struct cftype));
          for(int _i0 = 0; _i0 < _len_cft0; _i0++) {
              cft[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = read_prioidx(css,cft);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_css0; _aux++) {
          free(css[_aux].cgroup);
          }
          free(css);
          free(cft);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_css0 = 1;
          struct cgroup_subsys_state * css = (struct cgroup_subsys_state *) malloc(_len_css0*sizeof(struct cgroup_subsys_state));
          for(int _i0 = 0; _i0 < _len_css0; _i0++) {
              int _len_css__i0__cgroup0 = 1;
          css[_i0].cgroup = (struct TYPE_2__ *) malloc(_len_css__i0__cgroup0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_css__i0__cgroup0; _j0++) {
              css[_i0].cgroup->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_cft0 = 1;
          struct cftype * cft = (struct cftype *) malloc(_len_cft0*sizeof(struct cftype));
          for(int _i0 = 0; _i0 < _len_cft0; _i0++) {
              cft[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = read_prioidx(css,cft);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_css0; _aux++) {
          free(css[_aux].cgroup);
          }
          free(css);
          free(cft);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
