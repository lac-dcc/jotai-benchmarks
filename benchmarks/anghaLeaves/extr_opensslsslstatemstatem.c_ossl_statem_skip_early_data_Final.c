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
struct TYPE_6__ {scalar_t__ hand_state; } ;
struct TYPE_5__ {scalar_t__ early_data; } ;
struct TYPE_7__ {scalar_t__ hello_retry_request; TYPE_2__ statem; int /*<<< orphan*/  server; TYPE_1__ ext; } ;
typedef  TYPE_3__ SSL ;

/* Variables and functions */
 scalar_t__ SSL_EARLY_DATA_REJECTED ; 
 scalar_t__ SSL_HRR_COMPLETE ; 
 scalar_t__ TLS_ST_EARLY_DATA ; 

int ossl_statem_skip_early_data(SSL *s)
{
    if (s->ext.early_data != SSL_EARLY_DATA_REJECTED)
        return 0;

    if (!s->server
            || s->statem.hand_state != TLS_ST_EARLY_DATA
            || s->hello_retry_request == SSL_HRR_COMPLETE)
        return 0;

    return 1;
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
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].hello_retry_request = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.hand_state = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].server = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ext.early_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ossl_statem_skip_early_data(s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
