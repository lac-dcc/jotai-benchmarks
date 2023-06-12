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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_2__* WorkQueueHead; } ;
struct TYPE_6__ {scalar_t__ Next; } ;
struct TYPE_7__ {scalar_t__ WorkItemType; TYPE_1__ Link; } ;
typedef  TYPE_2__* PNDIS_MINIPORT_WORK_ITEM ;
typedef  TYPE_3__* PLOGICAL_ADAPTER ;
typedef  scalar_t__ NDIS_WORK_ITEM_TYPE ;

/* Variables and functions */
 scalar_t__ NdisMaxWorkItems ; 

PNDIS_MINIPORT_WORK_ITEM
MiniGetFirstWorkItem(
    PLOGICAL_ADAPTER Adapter,
    NDIS_WORK_ITEM_TYPE Type)
{
    PNDIS_MINIPORT_WORK_ITEM CurrentEntry = Adapter->WorkQueueHead;

    while (CurrentEntry)
    {
      if (CurrentEntry->WorkItemType == Type || Type == NdisMaxWorkItems)
          return CurrentEntry;

      CurrentEntry = (PNDIS_MINIPORT_WORK_ITEM)CurrentEntry->Link.Next;
    }

    return NULL;
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
          long Type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_Adapter0 = 1;
          struct TYPE_8__ * Adapter = (struct TYPE_8__ *) malloc(_len_Adapter0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_Adapter0; _i0++) {
              int _len_Adapter__i0__WorkQueueHead0 = 1;
          Adapter[_i0].WorkQueueHead = (struct TYPE_7__ *) malloc(_len_Adapter__i0__WorkQueueHead0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_Adapter__i0__WorkQueueHead0; _j0++) {
              Adapter[_i0].WorkQueueHead->WorkItemType = ((-2 * (next_i()%2)) + 1) * next_i();
          Adapter[_i0].WorkQueueHead->Link.Next = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          struct TYPE_7__ * benchRet = MiniGetFirstWorkItem(Adapter,Type);
          printf("%ld\n", (*benchRet).WorkItemType);
          for(int _aux = 0; _aux < _len_Adapter0; _aux++) {
          free(Adapter[_aux].WorkQueueHead);
          }
          free(Adapter);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
