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
#define  SSL3_AD_BAD_CERTIFICATE 157 
#define  SSL3_AD_BAD_RECORD_MAC 156 
#define  SSL3_AD_CERTIFICATE_EXPIRED 155 
#define  SSL3_AD_CERTIFICATE_REVOKED 154 
#define  SSL3_AD_CERTIFICATE_UNKNOWN 153 
#define  SSL3_AD_CLOSE_NOTIFY 152 
#define  SSL3_AD_DECOMPRESSION_FAILURE 151 
#define  SSL3_AD_HANDSHAKE_FAILURE 150 
#define  SSL3_AD_ILLEGAL_PARAMETER 149 
#define  SSL3_AD_NO_CERTIFICATE 148 
#define  SSL3_AD_UNEXPECTED_MESSAGE 147 
#define  SSL3_AD_UNSUPPORTED_CERTIFICATE 146 
#define  TLS1_AD_ACCESS_DENIED 145 
#define  TLS1_AD_BAD_CERTIFICATE_HASH_VALUE 144 
#define  TLS1_AD_BAD_CERTIFICATE_STATUS_RESPONSE 143 
#define  TLS1_AD_CERTIFICATE_UNOBTAINABLE 142 
#define  TLS1_AD_DECODE_ERROR 141 
#define  TLS1_AD_DECRYPTION_FAILED 140 
#define  TLS1_AD_DECRYPT_ERROR 139 
#define  TLS1_AD_EXPORT_RESTRICTION 138 
#define  TLS1_AD_INSUFFICIENT_SECURITY 137 
#define  TLS1_AD_INTERNAL_ERROR 136 
#define  TLS1_AD_NO_RENEGOTIATION 135 
#define  TLS1_AD_PROTOCOL_VERSION 134 
#define  TLS1_AD_RECORD_OVERFLOW 133 
#define  TLS1_AD_UNKNOWN_CA 132 
#define  TLS1_AD_UNKNOWN_PSK_IDENTITY 131 
#define  TLS1_AD_UNRECOGNIZED_NAME 130 
#define  TLS1_AD_UNSUPPORTED_EXTENSION 129 
#define  TLS1_AD_USER_CANCELLED 128 

const char *SSL_alert_desc_string(int value)
{
    switch (value & 0xff) {
    case SSL3_AD_CLOSE_NOTIFY:
        return "CN";
    case SSL3_AD_UNEXPECTED_MESSAGE:
        return "UM";
    case SSL3_AD_BAD_RECORD_MAC:
        return "BM";
    case SSL3_AD_DECOMPRESSION_FAILURE:
        return "DF";
    case SSL3_AD_HANDSHAKE_FAILURE:
        return "HF";
    case SSL3_AD_NO_CERTIFICATE:
        return "NC";
    case SSL3_AD_BAD_CERTIFICATE:
        return "BC";
    case SSL3_AD_UNSUPPORTED_CERTIFICATE:
        return "UC";
    case SSL3_AD_CERTIFICATE_REVOKED:
        return "CR";
    case SSL3_AD_CERTIFICATE_EXPIRED:
        return "CE";
    case SSL3_AD_CERTIFICATE_UNKNOWN:
        return "CU";
    case SSL3_AD_ILLEGAL_PARAMETER:
        return "IP";
    case TLS1_AD_DECRYPTION_FAILED:
        return "DC";
    case TLS1_AD_RECORD_OVERFLOW:
        return "RO";
    case TLS1_AD_UNKNOWN_CA:
        return "CA";
    case TLS1_AD_ACCESS_DENIED:
        return "AD";
    case TLS1_AD_DECODE_ERROR:
        return "DE";
    case TLS1_AD_DECRYPT_ERROR:
        return "CY";
    case TLS1_AD_EXPORT_RESTRICTION:
        return "ER";
    case TLS1_AD_PROTOCOL_VERSION:
        return "PV";
    case TLS1_AD_INSUFFICIENT_SECURITY:
        return "IS";
    case TLS1_AD_INTERNAL_ERROR:
        return "IE";
    case TLS1_AD_USER_CANCELLED:
        return "US";
    case TLS1_AD_NO_RENEGOTIATION:
        return "NR";
    case TLS1_AD_UNSUPPORTED_EXTENSION:
        return "UE";
    case TLS1_AD_CERTIFICATE_UNOBTAINABLE:
        return "CO";
    case TLS1_AD_UNRECOGNIZED_NAME:
        return "UN";
    case TLS1_AD_BAD_CERTIFICATE_STATUS_RESPONSE:
        return "BR";
    case TLS1_AD_BAD_CERTIFICATE_HASH_VALUE:
        return "BH";
    case TLS1_AD_UNKNOWN_PSK_IDENTITY:
        return "UP";
    default:
        return "UK";
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
          int value = 100;
          const char * benchRet = SSL_alert_desc_string(value);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int value = 255;
          const char * benchRet = SSL_alert_desc_string(value);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int value = 10;
          const char * benchRet = SSL_alert_desc_string(value);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
