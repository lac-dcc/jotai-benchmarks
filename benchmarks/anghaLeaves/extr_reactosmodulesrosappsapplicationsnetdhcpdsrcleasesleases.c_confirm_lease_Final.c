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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32b ;
struct TYPE_8__ {int /*<<< orphan*/  siaddr; int /*<<< orphan*/  lease; int /*<<< orphan*/  mask; int /*<<< orphan*/  router; int /*<<< orphan*/  ip; } ;
struct TYPE_6__ {int /*<<< orphan*/  lease; int /*<<< orphan*/  siaddr; int /*<<< orphan*/  mask; int /*<<< orphan*/  router; int /*<<< orphan*/  ip; } ;
struct TYPE_7__ {scalar_t__ xid; TYPE_1__ data; int /*<<< orphan*/  ltime; int /*<<< orphan*/  available; struct TYPE_7__* next; } ;
typedef  TYPE_2__ DHCPLIST ;
typedef  TYPE_3__ DHCPLEASE ;

/* Variables and functions */
 int /*<<< orphan*/  BUSY ; 
 TYPE_2__* list ; 

int confirm_lease( DHCPLEASE *dhcpl, u32b xid )
{
  int result = -1;
  DHCPLIST *temp;

  for( temp = list; temp; temp=temp->next )
    if( temp->xid == xid )
      {
	dhcpl->ip = temp->data.ip;
	dhcpl->router = temp->data.router;
	dhcpl->mask = temp->data.mask;
	dhcpl->lease = temp->data.lease;
	dhcpl->siaddr = temp->data.siaddr;
	temp->available = BUSY;
	temp->ltime = temp->data.lease;
	result = 0;
	return result;
      }
  return result;
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
          long xid = 100;
          int _len_dhcpl0 = 1;
          struct TYPE_8__ * dhcpl = (struct TYPE_8__ *) malloc(_len_dhcpl0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_dhcpl0; _i0++) {
            dhcpl[_i0].siaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        dhcpl[_i0].lease = ((-2 * (next_i()%2)) + 1) * next_i();
        dhcpl[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        dhcpl[_i0].router = ((-2 * (next_i()%2)) + 1) * next_i();
        dhcpl[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = confirm_lease(dhcpl,xid);
          printf("%d\n", benchRet); 
          free(dhcpl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
