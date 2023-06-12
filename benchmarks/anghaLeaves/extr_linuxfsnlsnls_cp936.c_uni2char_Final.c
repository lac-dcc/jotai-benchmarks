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

/* Type definitions */
typedef  int wchar_t ;

/* Variables and functions */
 int EINVAL ; 
 int ENAMETOOLONG ; 
 unsigned char** page_uni2charset ; 
 unsigned char* u2c_00 ; 

__attribute__((used)) static int uni2char(const wchar_t uni,
			unsigned char *out, int boundlen)
{
	const unsigned char *uni2charset;
	unsigned char cl = uni&0xFF;
	unsigned char ch = (uni>>8)&0xFF;
	unsigned char out0,out1;

	if (boundlen <= 0)
		return -ENAMETOOLONG;

	if (uni == 0x20ac) {/* Euro symbol.The only exception with a non-ascii unicode */
		out[0] = 0x80;
		return 1;
	}

	if (ch == 0) { /* handle the U00 plane*/
		/* if (cl == 0) return -EINVAL;*/ /*U0000 is legal in cp936*/
		out0 = u2c_00[cl*2];
		out1 = u2c_00[cl*2+1];
		if (out0 == 0x00 && out1 == 0x00) {
			if (cl<0x80) {
				out[0] = cl;
				return 1;
			}
			return -EINVAL;
		} else {
			if (boundlen <= 1)
				return -ENAMETOOLONG;
			out[0] = out0;
			out[1] = out1;
			return 2;
		}
	}

	uni2charset = page_uni2charset[ch];
	if (uni2charset) {
		if (boundlen <= 1)
			return -ENAMETOOLONG;
		out[0] = uni2charset[cl*2];
		out[1] = uni2charset[cl*2+1];
		if (out[0] == 0x00 && out[1] == 0x00)
			return -EINVAL;
		return 2;
	}
	else
		return -EINVAL;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          const int uni = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int boundlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 1;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = uni2char(uni,out,boundlen);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
