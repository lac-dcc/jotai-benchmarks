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
struct TYPE_5__ {int hand_state; } ;
struct TYPE_4__ {size_t max_cert_list; int /*<<< orphan*/  version; TYPE_2__ statem; } ;
typedef  TYPE_1__ SSL ;
typedef  TYPE_2__ OSSL_STATEM ;

/* Variables and functions */
 size_t CCS_MAX_LENGTH ; 
 int /*<<< orphan*/  DTLS1_BAD_VER ; 
#define  DTLS_ST_CR_HELLO_VERIFY_REQUEST 140 
 size_t ENCRYPTED_EXTENSIONS_MAX_LENGTH ; 
 size_t FINISHED_MAX_LENGTH ; 
 size_t HELLO_VERIFY_REQUEST_MAX_LENGTH ; 
 size_t KEY_UPDATE_MAX_LENGTH ; 
 size_t SERVER_HELLO_DONE_MAX_LENGTH ; 
 size_t SERVER_HELLO_MAX_LENGTH ; 
 size_t SERVER_KEY_EXCH_MAX_LENGTH ; 
 size_t SSL3_RT_MAX_PLAIN_LENGTH ; 
#define  TLS_ST_CR_CERT 139 
#define  TLS_ST_CR_CERT_REQ 138 
#define  TLS_ST_CR_CERT_STATUS 137 
#define  TLS_ST_CR_CERT_VRFY 136 
#define  TLS_ST_CR_CHANGE 135 
#define  TLS_ST_CR_ENCRYPTED_EXTENSIONS 134 
#define  TLS_ST_CR_FINISHED 133 
#define  TLS_ST_CR_KEY_EXCH 132 
#define  TLS_ST_CR_KEY_UPDATE 131 
#define  TLS_ST_CR_SESSION_TICKET 130 
#define  TLS_ST_CR_SRVR_DONE 129 
#define  TLS_ST_CR_SRVR_HELLO 128 

size_t ossl_statem_client_max_message_size(SSL *s)
{
    OSSL_STATEM *st = &s->statem;

    switch (st->hand_state) {
    default:
        /* Shouldn't happen */
        return 0;

    case TLS_ST_CR_SRVR_HELLO:
        return SERVER_HELLO_MAX_LENGTH;

    case DTLS_ST_CR_HELLO_VERIFY_REQUEST:
        return HELLO_VERIFY_REQUEST_MAX_LENGTH;

    case TLS_ST_CR_CERT:
        return s->max_cert_list;

    case TLS_ST_CR_CERT_VRFY:
        return SSL3_RT_MAX_PLAIN_LENGTH;

    case TLS_ST_CR_CERT_STATUS:
        return SSL3_RT_MAX_PLAIN_LENGTH;

    case TLS_ST_CR_KEY_EXCH:
        return SERVER_KEY_EXCH_MAX_LENGTH;

    case TLS_ST_CR_CERT_REQ:
        /*
         * Set to s->max_cert_list for compatibility with previous releases. In
         * practice these messages can get quite long if servers are configured
         * to provide a long list of acceptable CAs
         */
        return s->max_cert_list;

    case TLS_ST_CR_SRVR_DONE:
        return SERVER_HELLO_DONE_MAX_LENGTH;

    case TLS_ST_CR_CHANGE:
        if (s->version == DTLS1_BAD_VER)
            return 3;
        return CCS_MAX_LENGTH;

    case TLS_ST_CR_SESSION_TICKET:
        return SSL3_RT_MAX_PLAIN_LENGTH;

    case TLS_ST_CR_FINISHED:
        return FINISHED_MAX_LENGTH;

    case TLS_ST_CR_ENCRYPTED_EXTENSIONS:
        return ENCRYPTED_EXTENSIONS_MAX_LENGTH;

    case TLS_ST_CR_KEY_UPDATE:
        return KEY_UPDATE_MAX_LENGTH;
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
          int _len_s0 = 1;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].max_cert_list = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.hand_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ossl_statem_client_max_message_size(s);
          printf("%lu\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
