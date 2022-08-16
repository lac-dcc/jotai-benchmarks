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
typedef  scalar_t__ ut32 ;
struct TYPE_6__ {scalar_t__ channel; int /*<<< orphan*/  mid; scalar_t__ subcmd; scalar_t__ cmd; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
struct TYPE_7__ {TYPE_3__ pkt; } ;
struct TYPE_9__ {TYPE_2__ tran; int /*<<< orphan*/  mid; } ;
typedef  TYPE_4__ libqnxr_t ;

/* Variables and functions */
 scalar_t__ SET_CHANNEL_DEBUG ; 

void nto_send_init (libqnxr_t *g, ut32 cmd, ut32 subcmd, ut32 chan) {
	g->tran.pkt.hdr.cmd = cmd;
	g->tran.pkt.hdr.subcmd = subcmd;
	g->tran.pkt.hdr.mid = ((chan == SET_CHANNEL_DEBUG) ? g->mid++ : 0);
	g->tran.pkt.hdr.channel = chan;
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
          long cmd = 100;
          long subcmd = 100;
          long chan = 100;
          int _len_g0 = 1;
          struct TYPE_9__ * g = (struct TYPE_9__ *) malloc(_len_g0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].tran.pkt.hdr.channel = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].tran.pkt.hdr.mid = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].tran.pkt.hdr.subcmd = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].tran.pkt.hdr.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].mid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nto_send_init(g,cmd,subcmd,chan);
          free(g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
