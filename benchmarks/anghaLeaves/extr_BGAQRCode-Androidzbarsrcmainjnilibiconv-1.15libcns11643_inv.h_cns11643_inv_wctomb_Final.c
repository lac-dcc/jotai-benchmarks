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
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
typedef  int ucs4_t ;
typedef  int /*<<< orphan*/  conv_t ;
struct TYPE_11__ {unsigned short used; scalar_t__ indx; } ;
typedef  TYPE_1__ Summary16 ;

/* Variables and functions */
 int RET_ILUNI ; 
 int RET_TOOSMALL ; 
 unsigned char* cns11643_inv_2charset ; 
 TYPE_1__* cns11643_inv_uni2indx_page00 ; 
 TYPE_1__* cns11643_inv_uni2indx_page02 ; 
 TYPE_1__* cns11643_inv_uni2indx_page20 ; 
 TYPE_1__* cns11643_inv_uni2indx_page200 ; 
 TYPE_1__* cns11643_inv_uni2indx_page24 ; 
 TYPE_1__* cns11643_inv_uni2indx_page2f8 ; 
 TYPE_1__* cns11643_inv_uni2indx_page30 ; 
 TYPE_1__* cns11643_inv_uni2indx_pagefa ; 
 TYPE_1__* cns11643_inv_uni2indx_pagefe ; 

__attribute__((used)) static int
cns11643_inv_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  if (n >= 2) {
    const Summary16 *summary = NULL;
    if (wc >= 0x0000 && wc < 0x0100)
      summary = &cns11643_inv_uni2indx_page00[(wc>>4)];
    else if (wc >= 0x0200 && wc < 0x03d0)
      summary = &cns11643_inv_uni2indx_page02[(wc>>4)-0x020];
    else if (wc >= 0x2000 && wc < 0x22c0)
      summary = &cns11643_inv_uni2indx_page20[(wc>>4)-0x200];
    else if (wc >= 0x2400 && wc < 0x2650)
      summary = &cns11643_inv_uni2indx_page24[(wc>>4)-0x240];
    else if (wc >= 0x3000 && wc < 0x9fb0)
      summary = &cns11643_inv_uni2indx_page30[(wc>>4)-0x300];
    else if (wc >= 0xfa00 && wc < 0xfa30)
      summary = &cns11643_inv_uni2indx_pagefa[(wc>>4)-0xfa0];
    else if (wc >= 0xfe00 && wc < 0xfff0)
      summary = &cns11643_inv_uni2indx_pagefe[(wc>>4)-0xfe0];
    else if (wc >= 0x20000 && wc < 0x2a6e0)
      summary = &cns11643_inv_uni2indx_page200[(wc>>4)-0x2000];
    else if (wc >= 0x2f800 && wc < 0x2fa20)
      summary = &cns11643_inv_uni2indx_page2f8[(wc>>4)-0x2f80];
    if (summary) {
      unsigned short used = summary->used;
      unsigned int i = wc & 0x0f;
      if (used & ((unsigned short) 1 << i)) {
        /* Keep in 'used' only the bits 0..i-1. */
        used &= ((unsigned short) 1 << i) - 1;
        /* Add 'summary->indx' and the number of bits set in 'used'. */
        used = (used & 0x5555) + ((used & 0xaaaa) >> 1);
        used = (used & 0x3333) + ((used & 0xcccc) >> 2);
        used = (used & 0x0f0f) + ((used & 0xf0f0) >> 4);
        used = (used & 0x00ff) + (used >> 8);
        used += summary->indx;
        r[0] = cns11643_inv_2charset[3*used];
        r[1] = cns11643_inv_2charset[3*used+1];
        r[2] = cns11643_inv_2charset[3*used+2];
        return 3;
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 33
          // ------------------------------- 
          // static_instructions_O3 : 33
          // dynamic_instructions_O3 : 33
          // ------------------------------- 
          // static_instructions_Ofast : 33
          // dynamic_instructions_Ofast : 33
          // ------------------------------- 
          // static_instructions_Os : 33
          // dynamic_instructions_Os : 33
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          int conv = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int wc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_r0 = 1;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cns11643_inv_wctomb(conv,r,wc,n);
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
