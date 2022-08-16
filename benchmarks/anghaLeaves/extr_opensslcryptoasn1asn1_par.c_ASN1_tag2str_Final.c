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
 int V_ASN1_NEG_ENUMERATED ; 
 int V_ASN1_NEG_INTEGER ; 

const char *ASN1_tag2str(int tag)
{
    static const char *const tag2str[] = {
        /* 0-4 */
        "EOC", "BOOLEAN", "INTEGER", "BIT STRING", "OCTET STRING",
        /* 5-9 */
        "NULL", "OBJECT", "OBJECT DESCRIPTOR", "EXTERNAL", "REAL",
        /* 10-13 */
        "ENUMERATED", "<ASN1 11>", "UTF8STRING", "<ASN1 13>",
        /* 15-17 */
        "<ASN1 14>", "<ASN1 15>", "SEQUENCE", "SET",
        /* 18-20 */
        "NUMERICSTRING", "PRINTABLESTRING", "T61STRING",
        /* 21-24 */
        "VIDEOTEXSTRING", "IA5STRING", "UTCTIME", "GENERALIZEDTIME",
        /* 25-27 */
        "GRAPHICSTRING", "VISIBLESTRING", "GENERALSTRING",
        /* 28-30 */
        "UNIVERSALSTRING", "<ASN1 29>", "BMPSTRING"
    };

    if ((tag == V_ASN1_NEG_INTEGER) || (tag == V_ASN1_NEG_ENUMERATED))
        tag &= ~0x100;

    if (tag < 0 || tag > 30)
        return "(unknown)";
    return tag2str[tag];
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
          int tag = 100;
          const char * benchRet = ASN1_tag2str(tag);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          const char * benchRet = ASN1_tag2str(tag);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          const char * benchRet = ASN1_tag2str(tag);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
