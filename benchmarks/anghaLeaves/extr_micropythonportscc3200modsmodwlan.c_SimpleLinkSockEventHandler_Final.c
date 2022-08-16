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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int /*<<< orphan*/  type; } ;
struct TYPE_6__ {int /*<<< orphan*/  status; } ;
struct TYPE_8__ {TYPE_2__ SockAsyncData; TYPE_1__ SockTxFailData; } ;
struct TYPE_9__ {int Event; TYPE_3__ socketAsyncEvent; } ;
typedef  TYPE_4__ SlSockEvent_t ;

/* Variables and functions */
#define  OTHER_SIDE_CLOSE_SSL_DATA_NOT_ENCRYPTED 133 
#define  RX_FRAGMENTATION_TOO_BIG 132 
#define  SL_ECLOSE 131 
#define  SL_SOCKET_ASYNC_EVENT 130 
#define  SL_SOCKET_TX_FAILED_EVENT 129 
#define  SSL_ACCEPT 128 

void SimpleLinkSockEventHandler(SlSockEvent_t *pSock) {
    if (!pSock) {
        return;
    }

    switch( pSock->Event ) {
    case SL_SOCKET_TX_FAILED_EVENT:
        switch( pSock->socketAsyncEvent.SockTxFailData.status) {
        case SL_ECLOSE:
            break;
        default:
          break;
        }
        break;
    case SL_SOCKET_ASYNC_EVENT:
         switch(pSock->socketAsyncEvent.SockAsyncData.type) {
         case SSL_ACCEPT:
             break;
         case RX_FRAGMENTATION_TOO_BIG:
             break;
         case OTHER_SIDE_CLOSE_SSL_DATA_NOT_ENCRYPTED:
             break;
         default:
             break;
         }
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
          int _len_pSock0 = 1;
          struct TYPE_9__ * pSock = (struct TYPE_9__ *) malloc(_len_pSock0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pSock0; _i0++) {
            pSock[_i0].Event = ((-2 * (next_i()%2)) + 1) * next_i();
        pSock[_i0].socketAsyncEvent.SockAsyncData.type = ((-2 * (next_i()%2)) + 1) * next_i();
        pSock[_i0].socketAsyncEvent.SockTxFailData.status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SimpleLinkSockEventHandler(pSock);
          free(pSock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
