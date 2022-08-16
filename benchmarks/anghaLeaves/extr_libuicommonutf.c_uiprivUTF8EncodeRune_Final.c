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
typedef  int uint8_t ;
typedef  int uint32_t ;

/* Variables and functions */
 int badrune ; 

size_t uiprivUTF8EncodeRune(uint32_t rune, char *encoded)
{
	uint8_t b, c, d, e;
	size_t n;

	// not in the valid range for Unicode
	if (rune > 0x10FFFF)
		rune = badrune;
	// surrogate runes cannot be encoded
	if (rune >= 0xD800 && rune < 0xE000)
		rune = badrune;

	if (rune < 0x80) {		// ASCII bytes represent themselves
		b = (uint8_t) (rune & 0xFF);
		n = 1;
		goto done;
	}
	if (rune < 0x800) {		// two-byte encoding
		c = (uint8_t) (rune & 0x3F);
		c |= 0x80;
		rune >>= 6;
		b = (uint8_t) (rune & 0x1F);
		b |= 0xC0;
		n = 2;
		goto done;
	}
	if (rune < 0x10000) {	// three-byte encoding
		d = (uint8_t) (rune & 0x3F);
		d |= 0x80;
		rune >>= 6;
		c = (uint8_t) (rune & 0x3F);
		c |= 0x80;
		rune >>= 6;
		b = (uint8_t) (rune & 0x0F);
		b |= 0xE0;
		n = 3;
		goto done;
	}
	// otherwise use a four-byte encoding
	e = (uint8_t) (rune & 0x3F);
	e |= 0x80;
	rune >>= 6;
	d = (uint8_t) (rune & 0x3F);
	d |= 0x80;
	rune >>= 6;
	c = (uint8_t) (rune & 0x3F);
	c |= 0x80;
	rune >>= 6;
	b = (uint8_t) (rune & 0x07);
	b |= 0xF0;
	n = 4;

done:
	encoded[0] = b;
	if (n > 1)
		encoded[1] = c;
	if (n > 2)
		encoded[2] = d;
	if (n > 3)
		encoded[3] = e;
	return n;
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
          char * encoded = (char *) malloc(_len_encoded0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_encoded0; _i0++) {
            encoded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = uiprivUTF8EncodeRune(rune,encoded);
          printf("%lu\n", benchRet); 
          free(encoded);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int rune = 10;
          int _len_encoded0 = 100;
          char * encoded = (char *) malloc(_len_encoded0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_encoded0; _i0++) {
            encoded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = uiprivUTF8EncodeRune(rune,encoded);
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
