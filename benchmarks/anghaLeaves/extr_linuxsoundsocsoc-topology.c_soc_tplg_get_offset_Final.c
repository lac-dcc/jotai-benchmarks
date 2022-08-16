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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct soc_tplg {TYPE_1__* fw; scalar_t__ pos; } ;
struct TYPE_2__ {scalar_t__ data; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned long soc_tplg_get_offset(struct soc_tplg *tplg)
{
	return (unsigned long)(tplg->pos - tplg->fw->data);
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
          int _len_tplg0 = 1;
          struct soc_tplg * tplg = (struct soc_tplg *) malloc(_len_tplg0*sizeof(struct soc_tplg));
          for(int _i0 = 0; _i0 < _len_tplg0; _i0++) {
              int _len_tplg__i0__fw0 = 1;
          tplg[_i0].fw = (struct TYPE_2__ *) malloc(_len_tplg__i0__fw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tplg__i0__fw0; _j0++) {
            tplg[_i0].fw->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tplg[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = soc_tplg_get_offset(tplg);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_tplg0; _aux++) {
          free(tplg[_aux].fw);
          }
          free(tplg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
