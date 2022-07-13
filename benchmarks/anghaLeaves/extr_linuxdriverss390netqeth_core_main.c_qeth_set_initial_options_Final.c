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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {void* type; } ;
struct TYPE_4__ {void* type; } ;
struct TYPE_6__ {int /*<<< orphan*/  cq; int /*<<< orphan*/  isolation; int /*<<< orphan*/  rx_sg_cb; TYPE_2__ route6; TYPE_1__ route4; } ;
struct qeth_card {TYPE_3__ options; } ;

/* Variables and functions */
 int /*<<< orphan*/  ISOLATION_MODE_NONE ; 
 void* NO_ROUTER ; 
 int /*<<< orphan*/  QETH_CQ_DISABLED ; 
 int /*<<< orphan*/  QETH_RX_SG_CB ; 

__attribute__((used)) static void qeth_set_initial_options(struct qeth_card *card)
{
	card->options.route4.type = NO_ROUTER;
	card->options.route6.type = NO_ROUTER;
	card->options.rx_sg_cb = QETH_RX_SG_CB;
	card->options.isolation = ISOLATION_MODE_NONE;
	card->options.cq = QETH_CQ_DISABLED;
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
          int _len_card0 = 1;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].options.cq = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.isolation = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.rx_sg_cb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_set_initial_options(card);
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].options.cq = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.isolation = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.rx_sg_cb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_set_initial_options(card);
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].options.cq = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.isolation = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.rx_sg_cb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_set_initial_options(card);
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
