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
typedef  int zbar_symbol_type_t ;

/* Variables and functions */
#define  ZBAR_CODABAR 145 
#define  ZBAR_CODE128 144 
#define  ZBAR_CODE39 143 
#define  ZBAR_CODE93 142 
#define  ZBAR_COMPOSITE 141 
#define  ZBAR_DATABAR 140 
#define  ZBAR_DATABAR_EXP 139 
#define  ZBAR_EAN13 138 
#define  ZBAR_EAN2 137 
#define  ZBAR_EAN5 136 
#define  ZBAR_EAN8 135 
#define  ZBAR_I25 134 
#define  ZBAR_ISBN10 133 
#define  ZBAR_ISBN13 132 
#define  ZBAR_PDF417 131 
#define  ZBAR_QRCODE 130 
 int ZBAR_SYMBOL ; 
#define  ZBAR_UPCA 129 
#define  ZBAR_UPCE 128 

const char *zbar_get_symbol_name (zbar_symbol_type_t sym)
{
    switch(sym & ZBAR_SYMBOL) {
    case ZBAR_EAN2: return("EAN-2");
    case ZBAR_EAN5: return("EAN-5");
    case ZBAR_EAN8: return("EAN-8");
    case ZBAR_UPCE: return("UPC-E");
    case ZBAR_ISBN10: return("ISBN-10");
    case ZBAR_UPCA: return("UPC-A");
    case ZBAR_EAN13: return("EAN-13");
    case ZBAR_ISBN13: return("ISBN-13");
    case ZBAR_COMPOSITE: return("COMPOSITE");
    case ZBAR_I25: return("I2/5");
    case ZBAR_DATABAR: return("DataBar");
    case ZBAR_DATABAR_EXP: return("DataBar-Exp");
    case ZBAR_CODABAR: return("Codabar");
    case ZBAR_CODE39: return("CODE-39");
    case ZBAR_CODE93: return("CODE-93");
    case ZBAR_CODE128: return("CODE-128");
    case ZBAR_PDF417: return("PDF417");
    case ZBAR_QRCODE: return("QR-Code");
    default: return("UNKNOWN");
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
          int sym = 100;
          const char * benchRet = zbar_get_symbol_name(sym);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int sym = 255;
          const char * benchRet = zbar_get_symbol_name(sym);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sym = 10;
          const char * benchRet = zbar_get_symbol_name(sym);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
