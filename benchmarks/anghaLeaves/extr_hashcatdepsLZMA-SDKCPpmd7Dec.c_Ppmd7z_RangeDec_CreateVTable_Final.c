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
struct TYPE_4__ {int /*<<< orphan*/  DecodeBit; int /*<<< orphan*/  Decode; int /*<<< orphan*/  GetThreshold; } ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef  TYPE_2__ CPpmd7z_RangeDec ;

/* Variables and functions */
 int /*<<< orphan*/  Range_Decode ; 
 int /*<<< orphan*/  Range_DecodeBit ; 
 int /*<<< orphan*/  Range_GetThreshold ; 

void Ppmd7z_RangeDec_CreateVTable(CPpmd7z_RangeDec *p)
{
  p->vt.GetThreshold = Range_GetThreshold;
  p->vt.Decode = Range_Decode;
  p->vt.DecodeBit = Range_DecodeBit;
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
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].vt.DecodeBit = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].vt.Decode = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].vt.GetThreshold = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Ppmd7z_RangeDec_CreateVTable(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
