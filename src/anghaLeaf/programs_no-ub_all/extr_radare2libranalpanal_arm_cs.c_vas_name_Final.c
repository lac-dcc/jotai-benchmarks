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
       0            big-arr\n\
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
typedef  int arm64_vas ;

/* Variables and functions */
#define  ARM64_VAS_16B 136 
#define  ARM64_VAS_1D 135 
#define  ARM64_VAS_1Q 134 
#define  ARM64_VAS_2D 133 
#define  ARM64_VAS_2S 132 
#define  ARM64_VAS_4H 131 
#define  ARM64_VAS_4S 130 
#define  ARM64_VAS_8B 129 
#define  ARM64_VAS_8H 128 

__attribute__((used)) static const char *vas_name(arm64_vas vas) {
	switch (vas) {
	case ARM64_VAS_8B:
		return "8b";
	case ARM64_VAS_16B:
		return "16b";
	case ARM64_VAS_4H:
		return "4h";
	case ARM64_VAS_8H:
		return "8h";
	case ARM64_VAS_2S:
		return "2s";
	case ARM64_VAS_4S:
		return "4s";
	case ARM64_VAS_2D:
		return "2d";
	case ARM64_VAS_1D:
		return "1d";
	case ARM64_VAS_1Q:
		return "1q";
#if CS_API_MAJOR > 4
	case ARM64_VAS_1B:
		return "8b";
	case ARM64_VAS_4B:
		return "8b";
	case ARM64_VAS_2H:
		return "2h";
	case ARM64_VAS_1H:
		return "1h";
	case ARM64_VAS_1S:
		return "1s";
#endif
	default:
		return "";
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

    // big-arr
    case 0:
    {
          int vas = 255;
          const char * benchRet = vas_name(vas);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
