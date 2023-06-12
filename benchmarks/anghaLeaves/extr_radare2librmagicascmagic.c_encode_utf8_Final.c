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
       0            big-arr\n\
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
typedef  void* ut8 ;
typedef  int unichar ;

/* Variables and functions */

__attribute__((used)) static ut8 *
encode_utf8(ut8 *buf, size_t len, unichar *ubuf, size_t ulen)
{
	size_t i;
	ut8 *end = buf + len;

	for (i = 0; i < ulen; i++) {
		if (ubuf[i] <= 0x7f) {
			if (end - buf < 1) {
				return NULL;
			}
			*buf++ = (ut8)ubuf[i];
		} else if (ubuf[i] <= 0x7ff) {
			if (end - buf < 2) {
				return NULL;
			}
			*buf++ = (ut8)((ubuf[i] >> 6) + 0xc0);
			*buf++ = (ut8)((ubuf[i] & 0x3f) + 0x80);
		} else if (ubuf[i] <= 0xffff) {
			if (end - buf < 3) {
				return NULL;
			}
			*buf++ = (ut8)((ubuf[i] >> 12) + 0xe0);
			*buf++ = (ut8)(((ubuf[i] >> 6) & 0x3f) + 0x80);
			*buf++ = (ut8)((ubuf[i] & 0x3f) + 0x80);
		} else if (ubuf[i] <= 0x1fffff) {
			if (end - buf < 4) {
				return NULL;
			}
			*buf++ = (ut8)((ubuf[i] >> 18) + 0xf0);
			*buf++ = (ut8)(((ubuf[i] >> 12) & 0x3f) + 0x80);
			*buf++ = (ut8)(((ubuf[i] >>  6) & 0x3f) + 0x80);
			*buf++ = (ut8)((ubuf[i] & 0x3f) + 0x80);
		} else if (ubuf[i] <= 0x3ffffff) {
			if (end - buf < 5) {
				return NULL;
			}
			*buf++ = (ut8)((ubuf[i] >> 24) + 0xf8);
			*buf++ = (ut8)(((ubuf[i] >> 18) & 0x3f) + 0x80);
			*buf++ = (ut8)(((ubuf[i] >> 12) & 0x3f) + 0x80);
			*buf++ = (ut8)(((ubuf[i] >>  6) & 0x3f) + 0x80);
			*buf++ = (ut8)((ubuf[i] & 0x3f) + 0x80);
		} else if (ubuf[i] <= 0x7fffffff) {
			if (end - buf < 6) {
				return NULL;
			}
			*buf++ = (ut8)((ubuf[i] >> 30) + 0xfc);
			*buf++ = (ut8)(((ubuf[i] >> 24) & 0x3f) + 0x80);
			*buf++ = (ut8)(((ubuf[i] >> 18) & 0x3f) + 0x80);
			*buf++ = (ut8)(((ubuf[i] >> 12) & 0x3f) + 0x80);
			*buf++ = (ut8)(((ubuf[i] >>  6) & 0x3f) + 0x80);
			*buf++ = (ut8)((ubuf[i] & 0x3f) + 0x80);
		} else { /* Invalid character */
			return NULL;
		}
	}

	return buf;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 6905
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 3835
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 3835
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 3835
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 3835
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 3841
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 4104
          // ------------------------------- 

          unsigned long len = 255;
        
          unsigned long ulen = 255;
        
          int _len_buf0 = 65025;
          void ** buf = (void **) malloc(_len_buf0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
          }
        
          int _len_ubuf0 = 65025;
          int * ubuf = (int *) malloc(_len_ubuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ubuf0; _i0++) {
            ubuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void ** benchRet = encode_utf8(buf,len,ubuf,ulen);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
              }
          free(buf);
          free(ubuf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 290
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 160
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 160
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 160
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 160
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 166
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 184
          // ------------------------------- 

          unsigned long len = 10;
        
          unsigned long ulen = 10;
        
          int _len_buf0 = 100;
          void ** buf = (void **) malloc(_len_buf0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
          }
        
          int _len_ubuf0 = 100;
          int * ubuf = (int *) malloc(_len_ubuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ubuf0; _i0++) {
            ubuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void ** benchRet = encode_utf8(buf,len,ubuf,ulen);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
              }
          free(buf);
          free(ubuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
