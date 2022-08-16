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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int length; TYPE_1__* item; } ;
struct TYPE_4__ {scalar_t__* pcls; } ;
typedef  TYPE_2__ IsolatedRun ;

/* Variables and functions */
 scalar_t__ BN ; 

__attribute__((used)) static inline int iso_nextValidChar(IsolatedRun *iso_run, int index)
{
    if (index >= (iso_run->length-1)) return -1;
    index ++;
    while (index < iso_run->length && *iso_run->item[index].pcls == BN) index++;
    if (index == iso_run->length) return -1;
    return index;
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
          int index = 100;
          int _len_iso_run0 = 1;
          struct TYPE_5__ * iso_run = (struct TYPE_5__ *) malloc(_len_iso_run0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_iso_run0; _i0++) {
            iso_run[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iso_run__i0__item0 = 1;
          iso_run[_i0].item = (struct TYPE_4__ *) malloc(_len_iso_run__i0__item0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iso_run__i0__item0; _j0++) {
              int _len_iso_run__i0__item_pcls0 = 1;
          iso_run[_i0].item->pcls = (long *) malloc(_len_iso_run__i0__item_pcls0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iso_run__i0__item_pcls0; _j0++) {
            iso_run[_i0].item->pcls[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = iso_nextValidChar(iso_run,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iso_run0; _aux++) {
          free(iso_run[_aux].item);
          }
          free(iso_run);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
