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
typedef  int zip_uint8_t ;
typedef  int zip_uint32_t ;

/* Variables and functions */
 int UTF_8_CONTINUE_MATCH ; 
 int UTF_8_LEN_2_MATCH ; 
 int UTF_8_LEN_3_MATCH ; 
 int UTF_8_LEN_4_MATCH ; 

__attribute__((used)) static zip_uint32_t
_zip_unicode_to_utf8(zip_uint32_t codepoint, zip_uint8_t *buf, int len)
{
    if (codepoint < 0x0080) {
        if (len < 1) {
          return len;
        }
	buf[0] = codepoint & 0xff;
	return 1;
    }
    if (codepoint < 0x0800) {
        if (len < 2) {
          return len;
        }
	buf[0] = UTF_8_LEN_2_MATCH | ((codepoint >> 6) & 0x1f);
	buf[1] = UTF_8_CONTINUE_MATCH | (codepoint & 0x3f);
	return 2;
    }
    if (codepoint < 0x10000) {
        if (len < 3) {
          return len;
        }
	buf[0] = UTF_8_LEN_3_MATCH | ((codepoint >> 12) & 0x0f);
	buf[1] = UTF_8_CONTINUE_MATCH | ((codepoint >> 6) & 0x3f);
	buf[2] = UTF_8_CONTINUE_MATCH | (codepoint & 0x3f);
	return 3;
    }
    if (len < 4) {
      return len;
    }
    buf[0] = UTF_8_LEN_4_MATCH | ((codepoint >> 18) & 0x07);
    buf[1] = UTF_8_CONTINUE_MATCH | ((codepoint >> 12) & 0x3f);
    buf[2] = UTF_8_CONTINUE_MATCH | ((codepoint >> 6) & 0x3f);
    buf[3] = UTF_8_CONTINUE_MATCH | (codepoint & 0x3f);
    return 4;
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
          int codepoint = 100;
          int len = 100;
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _zip_unicode_to_utf8(codepoint,buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int codepoint = 10;
          int len = 10;
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _zip_unicode_to_utf8(codepoint,buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
