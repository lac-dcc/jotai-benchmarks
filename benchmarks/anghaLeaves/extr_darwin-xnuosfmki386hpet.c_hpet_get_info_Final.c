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
struct TYPE_3__ {int /*<<< orphan*/  rcbaAreap; int /*<<< orphan*/  rcbaArea; int /*<<< orphan*/  hpet2bus; int /*<<< orphan*/  bus2hpet; int /*<<< orphan*/  hpet2tsc; int /*<<< orphan*/  tsc2hpet; int /*<<< orphan*/  hpetCvtn2t; int /*<<< orphan*/  hpetCvtt2n; } ;
typedef  TYPE_1__ hpetInfo_t ;

/* Variables and functions */
 int /*<<< orphan*/  bus2hpet ; 
 int /*<<< orphan*/  hpet2bus ; 
 int /*<<< orphan*/  hpet2tsc ; 
 int /*<<< orphan*/  hpetArea ; 
 int /*<<< orphan*/  hpetAreap ; 
 int /*<<< orphan*/  hpetCvtn2t ; 
 int /*<<< orphan*/  hpetCvtt2n ; 
 int /*<<< orphan*/  tsc2hpet ; 

void
hpet_get_info(hpetInfo_t *info)
{
    info->hpetCvtt2n = hpetCvtt2n;
    info->hpetCvtn2t = hpetCvtn2t;
    info->tsc2hpet   = tsc2hpet;
    info->hpet2tsc   = hpet2tsc;
    info->bus2hpet   = bus2hpet;
    info->hpet2bus   = hpet2bus;
    /*
     * XXX
     * We're repurposing the rcbaArea so we can use the HPET.
     * Eventually we'll rename this correctly.
     */
    info->rcbaArea   = hpetArea;
    info->rcbaAreap  = hpetAreap;
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
          int _len_info0 = 1;
          struct TYPE_3__ * info = (struct TYPE_3__ *) malloc(_len_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].rcbaAreap = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rcbaArea = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].hpet2bus = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].bus2hpet = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].hpet2tsc = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].tsc2hpet = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].hpetCvtn2t = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].hpetCvtt2n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hpet_get_info(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
