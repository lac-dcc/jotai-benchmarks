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
       0            empty\n\
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
typedef  struct TYPE_12__   TYPE_1__ ;

/* Type definitions */
typedef  int ucs4_t ;
typedef  int /*<<< orphan*/  conv_t ;
struct TYPE_12__ {unsigned short used; unsigned short indx; } ;
typedef  TYPE_1__ Summary16 ;

/* Variables and functions */
 int RET_ILUNI ; 
 int RET_TOOSMALL ; 
 unsigned short* isoir165ext_2charset ; 
 TYPE_1__* isoir165ext_uni2indx_page00 ; 
 TYPE_1__* isoir165ext_uni2indx_page03 ; 
 TYPE_1__* isoir165ext_uni2indx_page1e ; 
 TYPE_1__* isoir165ext_uni2indx_page30 ; 
 TYPE_1__* isoir165ext_uni2indx_page32 ; 
 TYPE_1__* isoir165ext_uni2indx_page4e ; 
 TYPE_1__* isoir165ext_uni2indx_page7e ; 
 TYPE_1__* isoir165ext_uni2indx_page94 ; 
 TYPE_1__* isoir165ext_uni2indx_page9e ; 
 TYPE_1__* isoir165ext_uni2indx_pageff ; 

__attribute__((used)) static int
isoir165ext_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  if (n >= 2) {
    const Summary16 *summary = NULL;
    if (wc >= 0x0000 && wc < 0x0200)
      summary = &isoir165ext_uni2indx_page00[(wc>>4)];
    else if (wc >= 0x0300 && wc < 0x03c0)
      summary = &isoir165ext_uni2indx_page03[(wc>>4)-0x030];
    else if (wc >= 0x1e00 && wc < 0x1fc0)
      summary = &isoir165ext_uni2indx_page1e[(wc>>4)-0x1e0];
    else if (wc >= 0x3000 && wc < 0x3040)
      summary = &isoir165ext_uni2indx_page30[(wc>>4)-0x300];
    else if (wc >= 0x3200 && wc < 0x3400)
      summary = &isoir165ext_uni2indx_page32[(wc>>4)-0x320];
    else if (wc >= 0x4e00 && wc < 0x7d00)
      summary = &isoir165ext_uni2indx_page4e[(wc>>4)-0x4e0];
    else if (wc >= 0x7e00 && wc < 0x92d0)
      summary = &isoir165ext_uni2indx_page7e[(wc>>4)-0x7e0];
    else if (wc >= 0x9400 && wc < 0x9cf0)
      summary = &isoir165ext_uni2indx_page94[(wc>>4)-0x940];
    else if (wc >= 0x9e00 && wc < 0x9f90)
      summary = &isoir165ext_uni2indx_page9e[(wc>>4)-0x9e0];
    else if (wc >= 0xff00 && wc < 0xff50)
      summary = &isoir165ext_uni2indx_pageff[(wc>>4)-0xff0];
    if (summary) {
      unsigned short used = summary->used;
      unsigned int i = wc & 0x0f;
      if (used & ((unsigned short) 1 << i)) {
        unsigned short c;
        /* Keep in 'used' only the bits 0..i-1. */
        used &= ((unsigned short) 1 << i) - 1;
        /* Add 'summary->indx' and the number of bits set in 'used'. */
        used = (used & 0x5555) + ((used & 0xaaaa) >> 1);
        used = (used & 0x3333) + ((used & 0xcccc) >> 2);
        used = (used & 0x0f0f) + ((used & 0xf0f0) >> 4);
        used = (used & 0x00ff) + (used >> 8);
        c = isoir165ext_2charset[summary->indx + used];
        r[0] = (c >> 8); r[1] = (c & 0xff);
        return 2;
      }
    }
    return RET_ILUNI;
  }
  return RET_TOOSMALL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 41
          // dynamic_instructions_O1 : 41
          // ------------------------------- 
          // static_instructions_O2 : 38
          // dynamic_instructions_O2 : 38
          // ------------------------------- 
          // static_instructions_O3 : 38
          // dynamic_instructions_O3 : 38
          // ------------------------------- 
          // static_instructions_Ofast : 38
          // dynamic_instructions_Ofast : 38
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 38
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int conv = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int wc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_r0 = 1;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = isoir165ext_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
