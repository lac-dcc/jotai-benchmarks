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
struct TYPE_3__ {int Event; } ;
typedef  int /*<<< orphan*/  SlHttpServerResponse_t ;
typedef  TYPE_1__ SlHttpServerEvent_t ;

/* Variables and functions */
#define  SL_NETAPP_HTTPGETTOKENVALUE_EVENT 129 
#define  SL_NETAPP_HTTPPOSTTOKENVALUE_EVENT 128 

void SimpleLinkHttpServerCallback(SlHttpServerEvent_t *pHttpEvent, SlHttpServerResponse_t *pHttpResponse) {
    if (!pHttpEvent) {
        return;
    }

    switch (pHttpEvent->Event) {
    case SL_NETAPP_HTTPGETTOKENVALUE_EVENT:
        break;
    case SL_NETAPP_HTTPPOSTTOKENVALUE_EVENT:
        break;
    default:
        break;
    }
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
          int _len_pHttpEvent0 = 1;
          struct TYPE_3__ * pHttpEvent = (struct TYPE_3__ *) malloc(_len_pHttpEvent0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pHttpEvent0; _i0++) {
            pHttpEvent[_i0].Event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHttpResponse0 = 1;
          int * pHttpResponse = (int *) malloc(_len_pHttpResponse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pHttpResponse0; _i0++) {
            pHttpResponse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SimpleLinkHttpServerCallback(pHttpEvent,pHttpResponse);
          free(pHttpEvent);
          free(pHttpResponse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
