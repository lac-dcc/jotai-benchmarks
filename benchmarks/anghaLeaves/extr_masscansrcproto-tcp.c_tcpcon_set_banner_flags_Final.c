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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TCP_ConnectionTable {TYPE_1__* banner1; } ;
struct TYPE_2__ {unsigned int is_capture_cert; unsigned int is_capture_html; unsigned int is_capture_heartbleed; unsigned int is_capture_ticketbleed; } ;

/* Variables and functions */

void
tcpcon_set_banner_flags(struct TCP_ConnectionTable *tcpcon,
    unsigned is_capture_cert,
    unsigned is_capture_html,
    unsigned is_capture_heartbleed,
	unsigned is_capture_ticketbleed)
{
    tcpcon->banner1->is_capture_cert = is_capture_cert;
    tcpcon->banner1->is_capture_html = is_capture_html;
    tcpcon->banner1->is_capture_heartbleed = is_capture_heartbleed;
    tcpcon->banner1->is_capture_ticketbleed = is_capture_ticketbleed;
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
          unsigned int is_capture_cert = 100;
          unsigned int is_capture_html = 100;
          unsigned int is_capture_heartbleed = 100;
          unsigned int is_capture_ticketbleed = 100;
          int _len_tcpcon0 = 1;
          struct TCP_ConnectionTable * tcpcon = (struct TCP_ConnectionTable *) malloc(_len_tcpcon0*sizeof(struct TCP_ConnectionTable));
          for(int _i0 = 0; _i0 < _len_tcpcon0; _i0++) {
              int _len_tcpcon__i0__banner10 = 1;
          tcpcon[_i0].banner1 = (struct TYPE_2__ *) malloc(_len_tcpcon__i0__banner10*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tcpcon__i0__banner10; _j0++) {
            tcpcon[_i0].banner1->is_capture_cert = ((-2 * (next_i()%2)) + 1) * next_i();
        tcpcon[_i0].banner1->is_capture_html = ((-2 * (next_i()%2)) + 1) * next_i();
        tcpcon[_i0].banner1->is_capture_heartbleed = ((-2 * (next_i()%2)) + 1) * next_i();
        tcpcon[_i0].banner1->is_capture_ticketbleed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tcpcon_set_banner_flags(tcpcon,is_capture_cert,is_capture_html,is_capture_heartbleed,is_capture_ticketbleed);
          for(int _aux = 0; _aux < _len_tcpcon0; _aux++) {
          free(tcpcon[_aux].banner1);
          }
          free(tcpcon);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
