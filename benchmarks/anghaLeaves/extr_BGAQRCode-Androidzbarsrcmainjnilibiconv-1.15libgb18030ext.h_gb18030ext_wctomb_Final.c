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
       1            big-arr-10x\n\
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
typedef  int ucs4_t ;
typedef  int /*<<< orphan*/  conv_t ;

/* Variables and functions */
 int RET_ILUNI ; 
 int RET_TOOSMALL ; 
 unsigned short* gb18030ext_page2e ; 
 unsigned short* gb18030ext_page2f ; 
 unsigned short* gb18030ext_page34 ; 
 unsigned short* gb18030ext_page36 ; 
 unsigned short* gb18030ext_page39 ; 
 unsigned short* gb18030ext_page43 ; 
 unsigned short* gb18030ext_page46 ; 
 unsigned short* gb18030ext_page47_1 ; 
 unsigned short* gb18030ext_page47_2 ; 
 unsigned short* gb18030ext_page49 ; 
 unsigned short* gb18030ext_page4c ; 
 unsigned short* gb18030ext_page4d ; 
 unsigned short* gb18030ext_page9f ; 
 unsigned short* gb18030ext_pagefe ; 

__attribute__((used)) static int
gb18030ext_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  if (n >= 2) {
    unsigned short c = 0;
    if (wc == 0x01f9)
      c = 0xa8bf;
    else if (wc == 0x1e3f)
      c = 0xa8bc;
    else if (wc == 0x20ac)
      c = 0xa2e3;
    else if (wc >= 0x2e80 && wc < 0x2ed0)
      c = gb18030ext_page2e[wc-0x2e80];
    else if (wc >= 0x2ff0 && wc < 0x3000)
      c = gb18030ext_page2f[wc-0x2ff0];
    else if (wc == 0x303e)
      c = 0xa989;
    else if (wc >= 0x3440 && wc < 0x3478)
      c = gb18030ext_page34[wc-0x3440];
    else if (wc == 0x359e)
      c = 0xfe5a;
    else if (wc >= 0x3608 && wc < 0x3620)
      c = gb18030ext_page36[wc-0x3608];
    else if (wc == 0x3918)
      c = 0xfe60;
    else if (wc == 0x396e)
      c = 0xfe5f;
    else if (wc >= 0x39c8 && wc < 0x39e0)
      c = gb18030ext_page39[wc-0x39c8];
    else if (wc == 0x3a73)
      c = 0xfe64;
    else if (wc == 0x3b4e)
      c = 0xfe68;
    else if (wc == 0x3c6e)
      c = 0xfe69;
    else if (wc == 0x3ce0)
      c = 0xfe6a;
    else if (wc == 0x4056)
      c = 0xfe6f;
    else if (wc == 0x415f)
      c = 0xfe70;
    else if (wc == 0x4337)
      c = 0xfe72;
    else if (wc >= 0x43a8 && wc < 0x43e0)
      c = gb18030ext_page43[wc-0x43a8];
    else if (wc == 0x44d6)
      c = 0xfe7b;
    else if (wc >= 0x4648 && wc < 0x4668)
      c = gb18030ext_page46[wc-0x4648];
    else if (wc >= 0x4720 && wc < 0x4730)
      c = gb18030ext_page47_1[wc-0x4720];
    else if (wc >= 0x4778 && wc < 0x4790)
      c = gb18030ext_page47_2[wc-0x4778];
    else if (wc >= 0x4940 && wc < 0x49b8)
      c = gb18030ext_page49[wc-0x4940];
    else if (wc >= 0x4c70 && wc < 0x4ca8)
      c = gb18030ext_page4c[wc-0x4c70];
    else if (wc >= 0x4d10 && wc < 0x4d20)
      c = gb18030ext_page4d[wc-0x4d10];
    else if (wc == 0x4dae)
      c = 0xfe9f;
    else if (wc >= 0x9fb4 && wc < 0x9fbc)
      c = gb18030ext_page9f[wc-0x9fb0];
    else if (wc >= 0xfe10 && wc < 0xfe1a)
      c = gb18030ext_pagefe[wc-0xfe10];
    else if (wc == 0x20087)
      c = 0xfe51;
    else if (wc == 0x20089)
      c = 0xfe52;
    else if (wc == 0x200cc)
      c = 0xfe53;
    else if (wc == 0x215d7)
      c = 0xfe6c;
    else if (wc == 0x2298f)
      c = 0xfe76;
    else if (wc == 0x241fe)
      c = 0xfe91;
    if (c != 0) {
      r[0] = (c >> 8); r[1] = (c & 0xff);
      return 2;
    }
    return RET_ILUNI;
  }
  return RET_TOOSMALL;
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
          int conv = 100;
          int wc = 100;
          unsigned long n = 100;
          int _len_r0 = 1;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gb18030ext_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int conv = 10;
          int wc = 10;
          unsigned long n = 10;
          int _len_r0 = 100;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gb18030ext_wctomb(conv,r,wc,n);
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
