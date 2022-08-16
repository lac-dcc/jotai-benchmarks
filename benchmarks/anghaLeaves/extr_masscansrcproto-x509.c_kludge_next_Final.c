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
#define  ALGOID0_LEN 144 
 int ALGOID0_TAG ; 
 int ENC_TAG ; 
 int EXTENSIONS_A_TAG ; 
#define  EXTENSION_ID_LEN 143 
#define  EXTENSION_LEN 142 
 int EXTENSION_TAG ; 
 int EXTVALUE3_TAG ; 
 int EXTVALUE_TAG ; 
#define  EXT_DNSNAME_LEN 141 
#define  ISSUER0_LEN 140 
 int ISSUER0_TAG ; 
#define  ISSUER1_LEN 139 
 int ISSUER1_TAG ; 
#define  ISSUERID_LEN 138 
 int ISSUERNAME_TAG ; 
 int PADDING ; 
#define  PUBKEY0_LEN 137 
 int PUBKEY0_TAG ; 
#define  SERIAL_LEN 136 
 int SERIAL_TAG ; 
#define  SIG0_LEN 135 
 int SIG0_TAG ; 
#define  SUBJECT0_LEN 134 
 int SUBJECT0_TAG ; 
#define  SUBJECT1_LEN 133 
 int SUBJECT1_TAG ; 
#define  SUBJECTID_LEN 132 
 int SUBJECTNAME_TAG ; 
#define  TAG1_LEN 131 
#define  VALIDITY_LEN 130 
 int VALIDITY_TAG ; 
#define  VERSION0_LEN 129 
 int VNAFTER_TAG ; 
#define  VNBEFORE_LEN 128 

__attribute__((used)) static unsigned
kludge_next(unsigned state)
{
    switch (state) {
    case TAG1_LEN:
        return ALGOID0_TAG;
    case ALGOID0_LEN:
        return ENC_TAG;
    case SERIAL_LEN:
        return SIG0_TAG;
    case VERSION0_LEN:
        return SERIAL_TAG;
    case SIG0_LEN:
        return ISSUER0_TAG;
    case ISSUER0_LEN:
        return VALIDITY_TAG;
    case SUBJECT0_LEN:
        return PUBKEY0_TAG;
    case ISSUER1_LEN:
        return ISSUER1_TAG;
    case SUBJECT1_LEN:
        return SUBJECT1_TAG;
    case ISSUERID_LEN:
        return ISSUERNAME_TAG;
    case EXTENSION_LEN:
        return EXTENSION_TAG;
    case EXTENSION_ID_LEN:
        return EXTVALUE_TAG;
    case EXT_DNSNAME_LEN:
        return EXTVALUE3_TAG;
    case SUBJECTID_LEN:
        return SUBJECTNAME_TAG;
    case VALIDITY_LEN:
        return SUBJECT0_TAG;
    case VNBEFORE_LEN:
        return VNAFTER_TAG;
    case PUBKEY0_LEN:
        return EXTENSIONS_A_TAG;
    default:
        return PADDING;
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
          unsigned int state = 100;
          unsigned int benchRet = kludge_next(state);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int state = 255;
          unsigned int benchRet = kludge_next(state);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int state = 10;
          unsigned int benchRet = kludge_next(state);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
