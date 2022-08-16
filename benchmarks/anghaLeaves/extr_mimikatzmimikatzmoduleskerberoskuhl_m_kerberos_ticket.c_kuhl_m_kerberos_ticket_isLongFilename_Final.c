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
struct TYPE_7__ {TYPE_2__* ServiceName; TYPE_1__* ClientName; } ;
struct TYPE_6__ {scalar_t__ NameType; int NameCount; } ;
struct TYPE_5__ {scalar_t__ NameType; int NameCount; } ;
typedef  TYPE_3__* PKIWI_KERBEROS_TICKET ;
typedef  int BOOL ;

/* Variables and functions */
 scalar_t__ KRB_NT_PRINCIPAL ; 
 scalar_t__ KRB_NT_SRV_HST ; 

BOOL kuhl_m_kerberos_ticket_isLongFilename(PKIWI_KERBEROS_TICKET ticket)
{
	return ticket && (ticket->ClientName) && (ticket->ClientName->NameType == KRB_NT_PRINCIPAL) && (ticket->ClientName->NameCount == 1) && (ticket->ServiceName) && ((ticket->ServiceName->NameType >= KRB_NT_PRINCIPAL) && (ticket->ServiceName->NameType <= KRB_NT_SRV_HST)) && (ticket->ServiceName->NameCount > 1);
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
          int _len_ticket0 = 1;
          struct TYPE_7__ * ticket = (struct TYPE_7__ *) malloc(_len_ticket0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ticket0; _i0++) {
              int _len_ticket__i0__ServiceName0 = 1;
          ticket[_i0].ServiceName = (struct TYPE_6__ *) malloc(_len_ticket__i0__ServiceName0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ticket__i0__ServiceName0; _j0++) {
            ticket[_i0].ServiceName->NameType = ((-2 * (next_i()%2)) + 1) * next_i();
        ticket[_i0].ServiceName->NameCount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ticket__i0__ClientName0 = 1;
          ticket[_i0].ClientName = (struct TYPE_5__ *) malloc(_len_ticket__i0__ClientName0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ticket__i0__ClientName0; _j0++) {
            ticket[_i0].ClientName->NameType = ((-2 * (next_i()%2)) + 1) * next_i();
        ticket[_i0].ClientName->NameCount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kuhl_m_kerberos_ticket_isLongFilename(ticket);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ticket0; _aux++) {
          free(ticket[_aux].ServiceName);
          }
          for(int _aux = 0; _aux < _len_ticket0; _aux++) {
          free(ticket[_aux].ClientName);
          }
          free(ticket);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
