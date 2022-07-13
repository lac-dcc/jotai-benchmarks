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
typedef  char* PCWCHAR ;
typedef  int LONG ;

/* Variables and functions */
#define  KERB_CHECKSUM_CRC32 148 
#define  KERB_CHECKSUM_DES_MAC 147 
#define  KERB_CHECKSUM_DES_MAC_MD5 146 
#define  KERB_CHECKSUM_HMAC_MD5 145 
#define  KERB_CHECKSUM_HMAC_SHA1_96_AES128 144 
#define  KERB_CHECKSUM_HMAC_SHA1_96_AES128_Ki 143 
#define  KERB_CHECKSUM_HMAC_SHA1_96_AES256 142 
#define  KERB_CHECKSUM_HMAC_SHA1_96_AES256_Ki 141 
#define  KERB_CHECKSUM_KRB_DES_MAC 140 
#define  KERB_CHECKSUM_KRB_DES_MAC_K 139 
#define  KERB_CHECKSUM_LM 138 
#define  KERB_CHECKSUM_MD25 137 
#define  KERB_CHECKSUM_MD4 136 
#define  KERB_CHECKSUM_MD5 135 
#define  KERB_CHECKSUM_MD5_DES 134 
#define  KERB_CHECKSUM_MD5_HMAC 133 
#define  KERB_CHECKSUM_NONE 132 
#define  KERB_CHECKSUM_RC4_MD5 131 
#define  KERB_CHECKSUM_REAL_CRC32 130 
#define  KERB_CHECKSUM_SHA1 129 
#define  KERB_CHECKSUM_SHA1_NEW 128 

PCWCHAR kuhl_m_kerberos_ticket_ctype(LONG cType)
{
	PCWCHAR type;
	switch(cType)
	{
	case KERB_CHECKSUM_NONE:					type = L"none               "; break;
	case KERB_CHECKSUM_CRC32:					type = L"crc32              "; break;
	case KERB_CHECKSUM_MD4:						type = L"md4                "; break;
	case KERB_CHECKSUM_KRB_DES_MAC:				type = L"krb_des_mac        "; break;
	case KERB_CHECKSUM_KRB_DES_MAC_K:			type = L"krb_des_mac_k      "; break;
	case KERB_CHECKSUM_MD5:						type = L"md5                "; break;
	case KERB_CHECKSUM_MD5_DES:					type = L"md5_des            "; break;
	case KERB_CHECKSUM_SHA1_NEW:				type = L"sha1_new           "; break;
	case KERB_CHECKSUM_HMAC_SHA1_96_AES128:		type = L"hmac_sha1_aes128   "; break;
	case KERB_CHECKSUM_HMAC_SHA1_96_AES256:		type = L"hmac_sha1_aes256   "; break;
	case KERB_CHECKSUM_LM:						type = L"lm                 "; break;
	case KERB_CHECKSUM_SHA1:					type = L"sha1               "; break;
	case KERB_CHECKSUM_REAL_CRC32:				type = L"real_crc32         "; break;
	case KERB_CHECKSUM_DES_MAC:					type = L"dec_mac            "; break;
	case KERB_CHECKSUM_DES_MAC_MD5:				type = L"dec_mac_md5        "; break;
	case KERB_CHECKSUM_MD25:					type = L"md25               "; break;
	case KERB_CHECKSUM_RC4_MD5:					type = L"rc4_md5            "; break;
	case KERB_CHECKSUM_MD5_HMAC:				type = L"md5_hmac           "; break;
	case KERB_CHECKSUM_HMAC_MD5:				type = L"hmac_md5           "; break;
	case KERB_CHECKSUM_HMAC_SHA1_96_AES128_Ki:	type = L"hmac_sha1_aes128_ki"; break;
	case KERB_CHECKSUM_HMAC_SHA1_96_AES256_Ki:	type = L"hmac_sha1_aes256_ki"; break;
	default:									type = L"unknow             "; break;
	}
	return type;
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
          int cType = 100;
          char * benchRet = kuhl_m_kerberos_ticket_ctype(cType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cType = 255;
          char * benchRet = kuhl_m_kerberos_ticket_ctype(cType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cType = 10;
          char * benchRet = kuhl_m_kerberos_ticket_ctype(cType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
