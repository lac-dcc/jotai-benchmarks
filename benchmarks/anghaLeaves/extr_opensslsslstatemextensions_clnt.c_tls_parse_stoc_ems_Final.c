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
typedef  int /*<<< orphan*/  X509 ;
struct TYPE_5__ {int /*<<< orphan*/  flags; } ;
struct TYPE_7__ {int options; TYPE_2__* session; int /*<<< orphan*/  hit; TYPE_1__ s3; } ;
struct TYPE_6__ {int /*<<< orphan*/  flags; } ;
typedef  TYPE_3__ SSL ;
typedef  int /*<<< orphan*/  PACKET ;

/* Variables and functions */
 int SSL_OP_NO_EXTENDED_MASTER_SECRET ; 
 int /*<<< orphan*/  SSL_SESS_FLAG_EXTMS ; 
 int /*<<< orphan*/  TLS1_FLAGS_RECEIVED_EXTMS ; 

int tls_parse_stoc_ems(SSL *s, PACKET *pkt, unsigned int context, X509 *x,
                       size_t chainidx)
{
    if (s->options & SSL_OP_NO_EXTENDED_MASTER_SECRET)
        return 1;
    s->s3.flags |= TLS1_FLAGS_RECEIVED_EXTMS;
    if (!s->hit)
        s->session->flags |= SSL_SESS_FLAG_EXTMS;

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
          unsigned int context = 100;
          unsigned long chainidx = 100;
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__session0 = 1;
          s[_i0].session = (struct TYPE_6__ *) malloc(_len_s__i0__session0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__session0; _j0++) {
            s[_i0].session->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].hit = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].s3.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 1;
          int * pkt = (int *) malloc(_len_pkt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x0 = 1;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tls_parse_stoc_ems(s,pkt,context,x,chainidx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].session);
          }
          free(s);
          free(pkt);
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
