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
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static int Shift(uint8_t* word, int word_len, uint16_t parameter) {
  /* Limited sign extension: scalar < (1 << 24). */
  uint32_t scalar =
      (parameter & 0x7FFFu) + (0x1000000u - (parameter & 0x8000u));
  if (word[0] < 0x80) {
    /* 1-byte rune / 0sssssss / 7 bit scalar (ASCII). */
    scalar += (uint32_t)word[0];
    word[0] = (uint8_t)(scalar & 0x7Fu);
    return 1;
  } else if (word[0] < 0xC0) {
    /* Continuation / 10AAAAAA. */
    return 1;
  } else if (word[0] < 0xE0) {
    /* 2-byte rune / 110sssss AAssssss / 11 bit scalar. */
    if (word_len < 2) return 1;
    scalar += (uint32_t)((word[1] & 0x3Fu) | ((word[0] & 0x1Fu) << 6u));
    word[0] = (uint8_t)(0xC0 | ((scalar >> 6u) & 0x1F));
    word[1] = (uint8_t)((word[1] & 0xC0) | (scalar & 0x3F));
    return 2;
  } else if (word[0] < 0xF0) {
    /* 3-byte rune / 1110ssss AAssssss BBssssss / 16 bit scalar. */
    if (word_len < 3) return word_len;
    scalar += (uint32_t)((word[2] & 0x3Fu) | ((word[1] & 0x3Fu) << 6u) |
        ((word[0] & 0x0Fu) << 12u));
    word[0] = (uint8_t)(0xE0 | ((scalar >> 12u) & 0x0F));
    word[1] = (uint8_t)((word[1] & 0xC0) | ((scalar >> 6u) & 0x3F));
    word[2] = (uint8_t)((word[2] & 0xC0) | (scalar & 0x3F));
    return 3;
  } else if (word[0] < 0xF8) {
    /* 4-byte rune / 11110sss AAssssss BBssssss CCssssss / 21 bit scalar. */
    if (word_len < 4) return word_len;
    scalar += (uint32_t)((word[3] & 0x3Fu) | ((word[2] & 0x3Fu) << 6u) |
        ((word[1] & 0x3Fu) << 12u) | ((word[0] & 0x07u) << 18u));
    word[0] = (uint8_t)(0xF0 | ((scalar >> 18u) & 0x07));
    word[1] = (uint8_t)((word[1] & 0xC0) | ((scalar >> 12u) & 0x3F));
    word[2] = (uint8_t)((word[2] & 0xC0) | ((scalar >> 6u) & 0x3F));
    word[3] = (uint8_t)((word[3] & 0xC0) | (scalar & 0x3F));
    return 4;
  }
  return 1;
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
          int word_len = 100;
          int parameter = 100;
          int _len_word0 = 1;
          int * word = (int *) malloc(_len_word0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_word0; _i0++) {
            word[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Shift(word,word_len,parameter);
          printf("%d\n", benchRet); 
          free(word);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int word_len = 10;
          int parameter = 10;
          int _len_word0 = 100;
          int * word = (int *) malloc(_len_word0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_word0; _i0++) {
            word[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Shift(word,word_len,parameter);
          printf("%d\n", benchRet); 
          free(word);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
