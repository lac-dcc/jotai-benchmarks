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
struct TYPE_4__ {int /*<<< orphan*/  Seek; int /*<<< orphan*/  Read; int /*<<< orphan*/  Skip; int /*<<< orphan*/  Look; } ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef  TYPE_2__ CLookToRead2 ;

/* Variables and functions */
 int /*<<< orphan*/  LookToRead2_Look_Exact ; 
 int /*<<< orphan*/  LookToRead2_Look_Lookahead ; 
 int /*<<< orphan*/  LookToRead2_Read ; 
 int /*<<< orphan*/  LookToRead2_Seek ; 
 int /*<<< orphan*/  LookToRead2_Skip ; 

void LookToRead2_CreateVTable(CLookToRead2 *p, int lookahead)
{
  p->vt.Look = lookahead ?
      LookToRead2_Look_Lookahead :
      LookToRead2_Look_Exact;
  p->vt.Skip = LookToRead2_Skip;
  p->vt.Read = LookToRead2_Read;
  p->vt.Seek = LookToRead2_Seek;
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
          int lookahead = 100;
          int _len_p0 = 1;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].vt.Seek = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].vt.Read = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].vt.Skip = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].vt.Look = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LookToRead2_CreateVTable(p,lookahead);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
