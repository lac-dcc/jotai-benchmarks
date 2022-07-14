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

/* Type definitions */

/* Variables and functions */
 int SSL3_AD_BAD_CERTIFICATE ; 
 int SSL3_AD_BAD_RECORD_MAC ; 
 int SSL3_AD_CERTIFICATE_EXPIRED ; 
 int SSL3_AD_CERTIFICATE_REVOKED ; 
 int SSL3_AD_CERTIFICATE_UNKNOWN ; 
 int SSL3_AD_CLOSE_NOTIFY ; 
 int SSL3_AD_DECOMPRESSION_FAILURE ; 
 int SSL3_AD_HANDSHAKE_FAILURE ; 
 int SSL3_AD_ILLEGAL_PARAMETER ; 
 int SSL3_AD_UNEXPECTED_MESSAGE ; 
 int SSL3_AD_UNSUPPORTED_CERTIFICATE ; 
#define  SSL_AD_ACCESS_DENIED 160 
#define  SSL_AD_BAD_CERTIFICATE 159 
#define  SSL_AD_BAD_CERTIFICATE_HASH_VALUE 158 
#define  SSL_AD_BAD_CERTIFICATE_STATUS_RESPONSE 157 
#define  SSL_AD_BAD_RECORD_MAC 156 
#define  SSL_AD_CERTIFICATE_EXPIRED 155 
#define  SSL_AD_CERTIFICATE_REQUIRED 154 
#define  SSL_AD_CERTIFICATE_REVOKED 153 
#define  SSL_AD_CERTIFICATE_UNKNOWN 152 
#define  SSL_AD_CERTIFICATE_UNOBTAINABLE 151 
#define  SSL_AD_CLOSE_NOTIFY 150 
#define  SSL_AD_DECODE_ERROR 149 
#define  SSL_AD_DECOMPRESSION_FAILURE 148 
#define  SSL_AD_DECRYPTION_FAILED 147 
#define  SSL_AD_DECRYPT_ERROR 146 
#define  SSL_AD_EXPORT_RESTRICTION 145 
#define  SSL_AD_HANDSHAKE_FAILURE 144 
#define  SSL_AD_ILLEGAL_PARAMETER 143 
#define  SSL_AD_INAPPROPRIATE_FALLBACK 142 
#define  SSL_AD_INSUFFICIENT_SECURITY 141 
#define  SSL_AD_INTERNAL_ERROR 140 
#define  SSL_AD_NO_APPLICATION_PROTOCOL 139 
#define  SSL_AD_NO_CERTIFICATE 138 
#define  SSL_AD_NO_RENEGOTIATION 137 
#define  SSL_AD_PROTOCOL_VERSION 136 
#define  SSL_AD_RECORD_OVERFLOW 135 
#define  SSL_AD_UNEXPECTED_MESSAGE 134 
#define  SSL_AD_UNKNOWN_CA 133 
#define  SSL_AD_UNKNOWN_PSK_IDENTITY 132 
#define  SSL_AD_UNRECOGNIZED_NAME 131 
#define  SSL_AD_UNSUPPORTED_CERTIFICATE 130 
#define  SSL_AD_UNSUPPORTED_EXTENSION 129 
#define  SSL_AD_USER_CANCELLED 128 
 int TLS1_AD_ACCESS_DENIED ; 
 int TLS1_AD_BAD_CERTIFICATE_HASH_VALUE ; 
 int TLS1_AD_BAD_CERTIFICATE_STATUS_RESPONSE ; 
 int TLS1_AD_CERTIFICATE_UNOBTAINABLE ; 
 int TLS1_AD_DECODE_ERROR ; 
 int TLS1_AD_DECRYPTION_FAILED ; 
 int TLS1_AD_DECRYPT_ERROR ; 
 int TLS1_AD_EXPORT_RESTRICTION ; 
 int TLS1_AD_INAPPROPRIATE_FALLBACK ; 
 int TLS1_AD_INSUFFICIENT_SECURITY ; 
 int TLS1_AD_INTERNAL_ERROR ; 
 int TLS1_AD_NO_APPLICATION_PROTOCOL ; 
 int TLS1_AD_NO_RENEGOTIATION ; 
 int TLS1_AD_PROTOCOL_VERSION ; 
 int TLS1_AD_RECORD_OVERFLOW ; 
 int TLS1_AD_UNKNOWN_CA ; 
 int TLS1_AD_UNKNOWN_PSK_IDENTITY ; 
 int TLS1_AD_UNRECOGNIZED_NAME ; 
 int TLS1_AD_UNSUPPORTED_EXTENSION ; 
 int TLS1_AD_USER_CANCELLED ; 

int tls1_alert_code(int code)
{
    switch (code) {
    case SSL_AD_CLOSE_NOTIFY:
        return SSL3_AD_CLOSE_NOTIFY;
    case SSL_AD_UNEXPECTED_MESSAGE:
        return SSL3_AD_UNEXPECTED_MESSAGE;
    case SSL_AD_BAD_RECORD_MAC:
        return SSL3_AD_BAD_RECORD_MAC;
    case SSL_AD_DECRYPTION_FAILED:
        return TLS1_AD_DECRYPTION_FAILED;
    case SSL_AD_RECORD_OVERFLOW:
        return TLS1_AD_RECORD_OVERFLOW;
    case SSL_AD_DECOMPRESSION_FAILURE:
        return SSL3_AD_DECOMPRESSION_FAILURE;
    case SSL_AD_HANDSHAKE_FAILURE:
        return SSL3_AD_HANDSHAKE_FAILURE;
    case SSL_AD_NO_CERTIFICATE:
        return -1;
    case SSL_AD_BAD_CERTIFICATE:
        return SSL3_AD_BAD_CERTIFICATE;
    case SSL_AD_UNSUPPORTED_CERTIFICATE:
        return SSL3_AD_UNSUPPORTED_CERTIFICATE;
    case SSL_AD_CERTIFICATE_REVOKED:
        return SSL3_AD_CERTIFICATE_REVOKED;
    case SSL_AD_CERTIFICATE_EXPIRED:
        return SSL3_AD_CERTIFICATE_EXPIRED;
    case SSL_AD_CERTIFICATE_UNKNOWN:
        return SSL3_AD_CERTIFICATE_UNKNOWN;
    case SSL_AD_ILLEGAL_PARAMETER:
        return SSL3_AD_ILLEGAL_PARAMETER;
    case SSL_AD_UNKNOWN_CA:
        return TLS1_AD_UNKNOWN_CA;
    case SSL_AD_ACCESS_DENIED:
        return TLS1_AD_ACCESS_DENIED;
    case SSL_AD_DECODE_ERROR:
        return TLS1_AD_DECODE_ERROR;
    case SSL_AD_DECRYPT_ERROR:
        return TLS1_AD_DECRYPT_ERROR;
    case SSL_AD_EXPORT_RESTRICTION:
        return TLS1_AD_EXPORT_RESTRICTION;
    case SSL_AD_PROTOCOL_VERSION:
        return TLS1_AD_PROTOCOL_VERSION;
    case SSL_AD_INSUFFICIENT_SECURITY:
        return TLS1_AD_INSUFFICIENT_SECURITY;
    case SSL_AD_INTERNAL_ERROR:
        return TLS1_AD_INTERNAL_ERROR;
    case SSL_AD_USER_CANCELLED:
        return TLS1_AD_USER_CANCELLED;
    case SSL_AD_NO_RENEGOTIATION:
        return TLS1_AD_NO_RENEGOTIATION;
    case SSL_AD_UNSUPPORTED_EXTENSION:
        return TLS1_AD_UNSUPPORTED_EXTENSION;
    case SSL_AD_CERTIFICATE_UNOBTAINABLE:
        return TLS1_AD_CERTIFICATE_UNOBTAINABLE;
    case SSL_AD_UNRECOGNIZED_NAME:
        return TLS1_AD_UNRECOGNIZED_NAME;
    case SSL_AD_BAD_CERTIFICATE_STATUS_RESPONSE:
        return TLS1_AD_BAD_CERTIFICATE_STATUS_RESPONSE;
    case SSL_AD_BAD_CERTIFICATE_HASH_VALUE:
        return TLS1_AD_BAD_CERTIFICATE_HASH_VALUE;
    case SSL_AD_UNKNOWN_PSK_IDENTITY:
        return TLS1_AD_UNKNOWN_PSK_IDENTITY;
    case SSL_AD_INAPPROPRIATE_FALLBACK:
        return TLS1_AD_INAPPROPRIATE_FALLBACK;
    case SSL_AD_NO_APPLICATION_PROTOCOL:
        return TLS1_AD_NO_APPLICATION_PROTOCOL;
    case SSL_AD_CERTIFICATE_REQUIRED:
        return SSL_AD_HANDSHAKE_FAILURE;
    default:
        return -1;
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
          int code = 100;
          int benchRet = tls1_alert_code(code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int code = 255;
          int benchRet = tls1_alert_code(code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int code = 10;
          int benchRet = tls1_alert_code(code);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}