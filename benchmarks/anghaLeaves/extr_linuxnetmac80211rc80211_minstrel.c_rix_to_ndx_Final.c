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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct minstrel_sta_info {TYPE_1__* r; } ;
struct TYPE_2__ {int rix; } ;

/* Variables and functions */

__attribute__((used)) static inline int
rix_to_ndx(struct minstrel_sta_info *mi, int rix)
{
	int i = rix;
	for (i = rix; i >= 0; i--)
		if (mi->r[i].rix == rix)
			break;
	return i;
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
          int rix = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mi0 = 1;
          struct minstrel_sta_info * mi = (struct minstrel_sta_info *) malloc(_len_mi0*sizeof(struct minstrel_sta_info));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__r0 = 1;
          mi[_i0].r = (struct TYPE_2__ *) malloc(_len_mi__i0__r0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mi__i0__r0; _j0++) {
              mi[_i0].r->rix = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = rix_to_ndx(mi,rix);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].r);
          }
          free(mi);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
