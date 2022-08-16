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

/* Type definitions */
struct TCP_Server_Info {int negflavor; int /*<<< orphan*/  sec_mskerberos; int /*<<< orphan*/  sec_kerberos; int /*<<< orphan*/  sec_ntlmssp; } ;
typedef  enum securityEnum { ____Placeholder_securityEnum } securityEnum ;

/* Variables and functions */
 int CIFSSEC_MAY_KRB5 ; 
 int CIFSSEC_MAY_LANMAN ; 
 int CIFSSEC_MAY_NTLM ; 
 int CIFSSEC_MAY_NTLMSSP ; 
 int CIFSSEC_MAY_NTLMV2 ; 
#define  CIFS_NEGFLAVOR_EXTENDED 136 
#define  CIFS_NEGFLAVOR_LANMAN 135 
#define  CIFS_NEGFLAVOR_UNENCAP 134 
#define  Kerberos 133 
#define  LANMAN 132 
#define  NTLM 131 
#define  NTLMv2 130 
#define  RawNTLMSSP 129 
#define  Unspecified 128 
 int global_secflags ; 

enum securityEnum
cifs_select_sectype(struct TCP_Server_Info *server, enum securityEnum requested)
{
	switch (server->negflavor) {
	case CIFS_NEGFLAVOR_EXTENDED:
		switch (requested) {
		case Kerberos:
		case RawNTLMSSP:
			return requested;
		case Unspecified:
			if (server->sec_ntlmssp &&
			    (global_secflags & CIFSSEC_MAY_NTLMSSP))
				return RawNTLMSSP;
			if ((server->sec_kerberos || server->sec_mskerberos) &&
			    (global_secflags & CIFSSEC_MAY_KRB5))
				return Kerberos;
			/* Fallthrough */
		default:
			return Unspecified;
		}
	case CIFS_NEGFLAVOR_UNENCAP:
		switch (requested) {
		case NTLM:
		case NTLMv2:
			return requested;
		case Unspecified:
			if (global_secflags & CIFSSEC_MAY_NTLMV2)
				return NTLMv2;
			if (global_secflags & CIFSSEC_MAY_NTLM)
				return NTLM;
		default:
			/* Fallthrough to attempt LANMAN authentication next */
			break;
		}
	case CIFS_NEGFLAVOR_LANMAN:
		switch (requested) {
		case LANMAN:
			return requested;
		case Unspecified:
			if (global_secflags & CIFSSEC_MAY_LANMAN)
				return LANMAN;
			/* Fallthrough */
		default:
			return Unspecified;
		}
	default:
		return Unspecified;
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
          enum securityEnum requested = 0;
          int _len_server0 = 1;
          struct TCP_Server_Info * server = (struct TCP_Server_Info *) malloc(_len_server0*sizeof(struct TCP_Server_Info));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].negflavor = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].sec_mskerberos = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].sec_kerberos = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].sec_ntlmssp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum securityEnum benchRet = cifs_select_sectype(server,requested);
          free(server);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
