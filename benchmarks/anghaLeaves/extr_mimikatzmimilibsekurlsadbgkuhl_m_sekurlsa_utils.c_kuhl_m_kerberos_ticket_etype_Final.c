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
typedef  char* PCSTR ;
typedef  int LONG ;

/* Variables and functions */
#define  KERB_ETYPE_AES128_CTS_HMAC_SHA1_96 149 
#define  KERB_ETYPE_AES128_CTS_HMAC_SHA1_96_PLAIN 148 
#define  KERB_ETYPE_AES256_CTS_HMAC_SHA1_96 147 
#define  KERB_ETYPE_AES256_CTS_HMAC_SHA1_96_PLAIN 146 
#define  KERB_ETYPE_DES_CBC_CRC 145 
#define  KERB_ETYPE_DES_CBC_MD4 144 
#define  KERB_ETYPE_DES_CBC_MD5 143 
#define  KERB_ETYPE_DES_CBC_MD5_NT 142 
#define  KERB_ETYPE_DES_PLAIN 141 
#define  KERB_ETYPE_NULL 140 
#define  KERB_ETYPE_RC4_HMAC_NT 139 
#define  KERB_ETYPE_RC4_HMAC_NT_EXP 138 
#define  KERB_ETYPE_RC4_HMAC_OLD 137 
#define  KERB_ETYPE_RC4_HMAC_OLD_EXP 136 
#define  KERB_ETYPE_RC4_LM 135 
#define  KERB_ETYPE_RC4_MD4 134 
#define  KERB_ETYPE_RC4_PLAIN 133 
#define  KERB_ETYPE_RC4_PLAIN2 132 
#define  KERB_ETYPE_RC4_PLAIN_EXP 131 
#define  KERB_ETYPE_RC4_PLAIN_OLD 130 
#define  KERB_ETYPE_RC4_PLAIN_OLD_EXP 129 
#define  KERB_ETYPE_RC4_SHA 128 

PCSTR kuhl_m_kerberos_ticket_etype(LONG eType)
{
	PCSTR type;
	switch(eType)
	{
	case KERB_ETYPE_NULL:							type = "null             "; break;

	case KERB_ETYPE_DES_PLAIN:						type = "des_plain        "; break;
	case KERB_ETYPE_DES_CBC_CRC:					type = "des_cbc_crc      "; break;
	case KERB_ETYPE_DES_CBC_MD4:					type = "des_cbc_md4      "; break;
	case KERB_ETYPE_DES_CBC_MD5:					type = "des_cbc_md5      "; break;
	case KERB_ETYPE_DES_CBC_MD5_NT:					type = "des_cbc_md5_nt   "; break;

	case KERB_ETYPE_RC4_PLAIN:						type = "rc4_plain        "; break;
	case KERB_ETYPE_RC4_PLAIN2:						type = "rc4_plain2       "; break;
	case KERB_ETYPE_RC4_PLAIN_EXP:					type = "rc4_plain_exp    "; break;
	case KERB_ETYPE_RC4_LM:							type = "rc4_lm           "; break;
	case KERB_ETYPE_RC4_MD4:						type = "rc4_md4          "; break;
	case KERB_ETYPE_RC4_SHA:						type = "rc4_sha          "; break;
	case KERB_ETYPE_RC4_HMAC_NT:					type = "rc4_hmac_nt      "; break;
	case KERB_ETYPE_RC4_HMAC_NT_EXP:				type = "rc4_hmac_nt_exp  "; break;
	case KERB_ETYPE_RC4_PLAIN_OLD:					type = "rc4_plain_old    "; break;
	case KERB_ETYPE_RC4_PLAIN_OLD_EXP:				type = "rc4_plain_old_exp"; break;
	case KERB_ETYPE_RC4_HMAC_OLD:					type = "rc4_hmac_old     "; break;
	case KERB_ETYPE_RC4_HMAC_OLD_EXP:				type = "rc4_hmac_old_exp "; break;

	case KERB_ETYPE_AES128_CTS_HMAC_SHA1_96_PLAIN:	type = "aes128_hmac_plain"; break;
	case KERB_ETYPE_AES256_CTS_HMAC_SHA1_96_PLAIN:	type = "aes256_hmac_plain"; break;
	case KERB_ETYPE_AES128_CTS_HMAC_SHA1_96:		type = "aes128_hmac      "; break;
	case KERB_ETYPE_AES256_CTS_HMAC_SHA1_96:		type = "aes256_hmac      "; break;

	default:										type = "unknow           "; break;
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
          int eType = 100;
          char * benchRet = kuhl_m_kerberos_ticket_etype(eType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int eType = 255;
          char * benchRet = kuhl_m_kerberos_ticket_etype(eType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int eType = 10;
          char * benchRet = kuhl_m_kerberos_ticket_etype(eType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
