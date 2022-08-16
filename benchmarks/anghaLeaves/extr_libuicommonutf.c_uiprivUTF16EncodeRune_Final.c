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
typedef  int uint32_t ;
typedef  int uint16_t ;

/* Variables and functions */
 int badrune ; 

size_t uiprivUTF16EncodeRune(uint32_t rune, uint16_t *encoded)
{
	uint16_t low, high;

	// not in the valid range for Unicode
	if (rune > 0x10FFFF)
		rune = badrune;
	// surrogate runes cannot be encoded
	if (rune >= 0xD800 && rune < 0xE000)
		rune = badrune;

	if (rune < 0x10000) {
		encoded[0] = (uint16_t) rune;
		return 1;
	}

	rune -= 0x10000;
	low = (uint16_t) (rune & 0x3FF);
	rune >>= 10;
	high = (uint16_t) (rune & 0x3FF);
	encoded[0] = high | 0xD800;
	encoded[1] = low | 0xDC00;
	return 2;
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
          int rune = 100;
          int _len_encoded0 = 1;
          int * encoded = (int *) malloc(_len_encoded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_encoded0; _i0++) {
            encoded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = uiprivUTF16EncodeRune(rune,encoded);
          printf("%lu\n", benchRet); 
          free(encoded);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int rune = 10;
          int _len_encoded0 = 100;
          int * encoded = (int *) malloc(_len_encoded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_encoded0; _i0++) {
            encoded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = uiprivUTF16EncodeRune(rune,encoded);
          printf("%lu\n", benchRet); 
          free(encoded);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
