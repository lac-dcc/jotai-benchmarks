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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */

/* Variables and functions */
#define  TLSEXT_TYPE_application_layer_protocol_negotiation 151 
#define  TLSEXT_TYPE_certificate_authorities 150 
#define  TLSEXT_TYPE_cookie 149 
#define  TLSEXT_TYPE_early_data 148 
#define  TLSEXT_TYPE_ec_point_formats 147 
#define  TLSEXT_TYPE_encrypt_then_mac 146 
#define  TLSEXT_TYPE_extended_master_secret 145 
#define  TLSEXT_TYPE_key_share 144 
#define  TLSEXT_TYPE_max_fragment_length 143 
#define  TLSEXT_TYPE_next_proto_neg 142 
#define  TLSEXT_TYPE_padding 141 
#define  TLSEXT_TYPE_post_handshake_auth 140 
#define  TLSEXT_TYPE_psk 139 
#define  TLSEXT_TYPE_psk_kex_modes 138 
#define  TLSEXT_TYPE_renegotiate 137 
#define  TLSEXT_TYPE_server_name 136 
#define  TLSEXT_TYPE_session_ticket 135 
#define  TLSEXT_TYPE_signature_algorithms 134 
#define  TLSEXT_TYPE_signed_certificate_timestamp 133 
#define  TLSEXT_TYPE_srp 132 
#define  TLSEXT_TYPE_status_request 131 
#define  TLSEXT_TYPE_supported_groups 130 
#define  TLSEXT_TYPE_supported_versions 129 
#define  TLSEXT_TYPE_use_srtp 128 

int SSL_extension_supported(unsigned int ext_type)
{
    switch (ext_type) {
        /* Internally supported extensions. */
    case TLSEXT_TYPE_application_layer_protocol_negotiation:
#ifndef OPENSSL_NO_EC
    case TLSEXT_TYPE_ec_point_formats:
    case TLSEXT_TYPE_supported_groups:
    case TLSEXT_TYPE_key_share:
#endif
#ifndef OPENSSL_NO_NEXTPROTONEG
    case TLSEXT_TYPE_next_proto_neg:
#endif
    case TLSEXT_TYPE_padding:
    case TLSEXT_TYPE_renegotiate:
    case TLSEXT_TYPE_max_fragment_length:
    case TLSEXT_TYPE_server_name:
    case TLSEXT_TYPE_session_ticket:
    case TLSEXT_TYPE_signature_algorithms:
#ifndef OPENSSL_NO_SRP
    case TLSEXT_TYPE_srp:
#endif
#ifndef OPENSSL_NO_OCSP
    case TLSEXT_TYPE_status_request:
#endif
#ifndef OPENSSL_NO_CT
    case TLSEXT_TYPE_signed_certificate_timestamp:
#endif
#ifndef OPENSSL_NO_SRTP
    case TLSEXT_TYPE_use_srtp:
#endif
    case TLSEXT_TYPE_encrypt_then_mac:
    case TLSEXT_TYPE_supported_versions:
    case TLSEXT_TYPE_extended_master_secret:
    case TLSEXT_TYPE_psk_kex_modes:
    case TLSEXT_TYPE_cookie:
    case TLSEXT_TYPE_early_data:
    case TLSEXT_TYPE_certificate_authorities:
    case TLSEXT_TYPE_psk:
    case TLSEXT_TYPE_post_handshake_auth:
        return 1;
    default:
        return 0;
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
          unsigned int ext_type = 100;
          int benchRet = SSL_extension_supported(ext_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ext_type = 255;
          int benchRet = SSL_extension_supported(ext_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ext_type = 10;
          int benchRet = SSL_extension_supported(ext_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
