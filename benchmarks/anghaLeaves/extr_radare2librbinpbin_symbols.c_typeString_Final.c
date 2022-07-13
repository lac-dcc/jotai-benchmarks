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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int ut32 ;

/* Variables and functions */
 int is64 ; 

__attribute__((used)) static const char *typeString(ut32 n, int *bits) {
	*bits = 32;
	if (n == 12) { // CPU_SUBTYPE_ARM_V7) {
		return "arm";
	}
	if (n == 0x0100000c) { // arm64
		*bits = 64;
		is64 = true;
		return "arm";
	}
	if (n == 0x0200000c) { // arm64-32
		//  TODO: must change bits
		is64 = false;
		*bits = 64;
		return "arm";
	}
	return "x86";
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
          int n = 100;
          int _len_bits0 = 1;
          int * bits = (int *) malloc(_len_bits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = typeString(n,bits);
          printf("{{other_type}} %p\n", &benchRet); 
          free(bits);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_bits0 = 65025;
          int * bits = (int *) malloc(_len_bits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = typeString(n,bits);
          printf("{{other_type}} %p\n", &benchRet); 
          free(bits);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_bits0 = 100;
          int * bits = (int *) malloc(_len_bits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = typeString(n,bits);
          printf("{{other_type}} %p\n", &benchRet); 
          free(bits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
