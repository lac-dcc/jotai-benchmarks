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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_2__* rdi; TYPE_1__* asnum; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef  TYPE_3__ ASIdentifiers ;

/* Variables and functions */
 scalar_t__ ASIdentifierChoice_inherit ; 

int X509v3_asid_inherits(ASIdentifiers *asid)
{
    return (asid != NULL &&
            ((asid->asnum != NULL &&
              asid->asnum->type == ASIdentifierChoice_inherit) ||
             (asid->rdi != NULL &&
              asid->rdi->type == ASIdentifierChoice_inherit)));
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
          int _len_asid0 = 1;
          struct TYPE_7__ * asid = (struct TYPE_7__ *) malloc(_len_asid0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_asid0; _i0++) {
              int _len_asid__i0__rdi0 = 1;
          asid[_i0].rdi = (struct TYPE_6__ *) malloc(_len_asid__i0__rdi0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_asid__i0__rdi0; _j0++) {
            asid[_i0].rdi->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asid__i0__asnum0 = 1;
          asid[_i0].asnum = (struct TYPE_5__ *) malloc(_len_asid__i0__asnum0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_asid__i0__asnum0; _j0++) {
            asid[_i0].asnum->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = X509v3_asid_inherits(asid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_asid0; _aux++) {
          free(asid[_aux].rdi);
          }
          for(int _aux = 0; _aux < _len_asid0; _aux++) {
          free(asid[_aux].asnum);
          }
          free(asid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
