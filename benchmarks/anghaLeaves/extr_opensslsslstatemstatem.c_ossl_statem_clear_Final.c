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
struct TYPE_4__ {int in_init; scalar_t__ no_cert_verify; int /*<<< orphan*/  hand_state; int /*<<< orphan*/  state; } ;
struct TYPE_5__ {TYPE_1__ statem; } ;
typedef  TYPE_2__ SSL ;

/* Variables and functions */
 int /*<<< orphan*/  MSG_FLOW_UNINITED ; 
 int /*<<< orphan*/  TLS_ST_BEFORE ; 

void ossl_statem_clear(SSL *s)
{
    s->statem.state = MSG_FLOW_UNINITED;
    s->statem.hand_state = TLS_ST_BEFORE;
    s->statem.in_init = 1;
    s->statem.no_cert_verify = 0;
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].statem.in_init = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.no_cert_verify = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.hand_state = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ossl_statem_clear(s);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
