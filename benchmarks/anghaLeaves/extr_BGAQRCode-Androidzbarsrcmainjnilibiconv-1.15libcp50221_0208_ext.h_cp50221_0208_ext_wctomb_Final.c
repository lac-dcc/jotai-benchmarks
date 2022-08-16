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
 unsigned char* cp50221_0208_ext_page21 ; 
 unsigned char* cp50221_0208_ext_page22 ; 
 unsigned char* cp50221_0208_ext_page24 ; 
 unsigned char* cp50221_0208_ext_page30 ; 
 unsigned char* cp50221_0208_ext_page32 ; 
 unsigned char* cp50221_0208_ext_page32_1 ; 
 unsigned char* cp50221_0208_ext_page33 ; 

__attribute__((used)) static int
cp50221_0208_ext_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  unsigned char c = 0;
  if (wc >= 0x2110 && wc < 0x2170)
    c = cp50221_0208_ext_page21[wc-0x2110];
  else if (wc >= 0x2210 && wc < 0x2230)
    c = cp50221_0208_ext_page22[wc-0x2210];
  else if (wc == 0x22bf)
    c = 0x59;
  else if (wc >= 0x2460 && wc < 0x2478)
    c = cp50221_0208_ext_page24[wc-0x2460];
  else if (wc >= 0x3018 && wc < 0x3020)
    c = cp50221_0208_ext_page30[wc-0x3018];
  else if (wc >= 0x3230 && wc < 0x3240)
    c = cp50221_0208_ext_page32[wc-0x3230];
  else if (wc >= 0x32a0 && wc < 0x32b0)
    c = cp50221_0208_ext_page32_1[wc-0x32a0];
  else if (wc >= 0x3300 && wc < 0x33d0)
    c = cp50221_0208_ext_page33[wc-0x3300];
  if (c != 0) {
    *r = c;
    return 1;
  }
  return RET_ILUNI;
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
          int benchRet = cp50221_0208_ext_wctomb(conv,r,wc,n);
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
          int benchRet = cp50221_0208_ext_wctomb(conv,r,wc,n);
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
