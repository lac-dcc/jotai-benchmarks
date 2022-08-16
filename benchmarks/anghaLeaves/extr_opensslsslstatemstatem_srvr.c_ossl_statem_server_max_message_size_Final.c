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
struct TYPE_4__ {size_t max_cert_list; TYPE_2__ statem; } ;
typedef  TYPE_1__ SSL ;
typedef  TYPE_2__ OSSL_STATEM ;

/* Variables and functions */
 size_t CCS_MAX_LENGTH ; 
 size_t CLIENT_HELLO_MAX_LENGTH ; 
 size_t CLIENT_KEY_EXCH_MAX_LENGTH ; 
 size_t END_OF_EARLY_DATA_MAX_LENGTH ; 
 size_t FINISHED_MAX_LENGTH ; 
 size_t KEY_UPDATE_MAX_LENGTH ; 
 size_t NEXT_PROTO_MAX_LENGTH ; 
 size_t SSL3_RT_MAX_PLAIN_LENGTH ; 
#define  TLS_ST_SR_CERT 136 
#define  TLS_ST_SR_CERT_VRFY 135 
#define  TLS_ST_SR_CHANGE 134 
#define  TLS_ST_SR_CLNT_HELLO 133 
#define  TLS_ST_SR_END_OF_EARLY_DATA 132 
#define  TLS_ST_SR_FINISHED 131 
#define  TLS_ST_SR_KEY_EXCH 130 
#define  TLS_ST_SR_KEY_UPDATE 129 
#define  TLS_ST_SR_NEXT_PROTO 128 

size_t ossl_statem_server_max_message_size(SSL *s)
{
    OSSL_STATEM *st = &s->statem;

    switch (st->hand_state) {
    default:
        /* Shouldn't happen */
        return 0;

    case TLS_ST_SR_CLNT_HELLO:
        return CLIENT_HELLO_MAX_LENGTH;

    case TLS_ST_SR_END_OF_EARLY_DATA:
        return END_OF_EARLY_DATA_MAX_LENGTH;

    case TLS_ST_SR_CERT:
        return s->max_cert_list;

    case TLS_ST_SR_KEY_EXCH:
        return CLIENT_KEY_EXCH_MAX_LENGTH;

    case TLS_ST_SR_CERT_VRFY:
        return SSL3_RT_MAX_PLAIN_LENGTH;

#ifndef OPENSSL_NO_NEXTPROTONEG
    case TLS_ST_SR_NEXT_PROTO:
        return NEXT_PROTO_MAX_LENGTH;
#endif

    case TLS_ST_SR_CHANGE:
        return CCS_MAX_LENGTH;

    case TLS_ST_SR_FINISHED:
        return FINISHED_MAX_LENGTH;

    case TLS_ST_SR_KEY_UPDATE:
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
        s[_i0].statem.hand_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ossl_statem_server_max_message_size(s);
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
