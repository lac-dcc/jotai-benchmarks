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
       1            big-arr\n\
       2            big-arr-10x\n\
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
#define  IW_AUTH_CIPHER_CCMP 132 
#define  IW_AUTH_CIPHER_NONE 131 
#define  IW_AUTH_CIPHER_TKIP 130 
#define  IW_AUTH_CIPHER_WEP104 129 
#define  IW_AUTH_CIPHER_WEP40 128 
 int SEC_LEVEL_0 ; 
 int SEC_LEVEL_1 ; 
 int SEC_LEVEL_2 ; 
 int SEC_LEVEL_3 ; 

__attribute__((used)) static int wext_cipher2level(int cipher)
{
	switch (cipher) {
	case IW_AUTH_CIPHER_NONE:
		return SEC_LEVEL_0;
	case IW_AUTH_CIPHER_WEP40:
	case IW_AUTH_CIPHER_WEP104:
		return SEC_LEVEL_1;
	case IW_AUTH_CIPHER_TKIP:
		return SEC_LEVEL_2;
	case IW_AUTH_CIPHER_CCMP:
		return SEC_LEVEL_3;
	default:
		return -1;
	}
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
          int cipher = 100;
          int benchRet = wext_cipher2level(cipher);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cipher = 255;
          int benchRet = wext_cipher2level(cipher);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cipher = 10;
          int benchRet = wext_cipher2level(cipher);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
