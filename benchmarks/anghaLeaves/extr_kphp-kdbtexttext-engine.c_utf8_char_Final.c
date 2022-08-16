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
       0            big-arr-10x\n\
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

__attribute__((used)) static inline char *utf8_char (char *ptr, unsigned c) {
  if (c < 0x80) {
    *ptr = c;
    return ptr + 1;
  }
  if (c < 0x800) {
    ptr[0] = 0xc0 + (c >> 6);
    ptr[1] = 0x80 + (c & 0x3f);
    return ptr + 2;
  }
  if (c < 0x10000) {
    ptr[0] = 0xe0 + (c >> 12);
    ptr[1] = 0x80 + ((c >> 6) & 0x3f);
    ptr[2] = 0x80 + (c & 0x3f);
    return ptr + 3;
  }
  if (c < 0x200000) {
    ptr[0] = 0xf0 + (c >> 18);
    ptr[1] = 0x80 + ((c >> 12) & 0x3f);
    ptr[2] = 0x80 + ((c >> 6) & 0x3f);
    ptr[3] = 0x80 + (c & 0x3f);
    return ptr + 4;
  }
  return ptr;
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

    // big-arr-10x
    case 0:
    {
          unsigned int c = 10;
          int _len_ptr0 = 100;
          char * ptr = (char *) malloc(_len_ptr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = utf8_char(ptr,c);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
