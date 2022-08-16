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
struct hw {int chip_type; } ;
typedef  enum DAIOTYP { ____Placeholder_DAIOTYP } DAIOTYP ;

/* Variables and functions */
#define  ATC20K1 138 
#define  ATC20K2 137 
 unsigned int EINVAL ; 
#define  LINEIM 136 
#define  LINEO1 135 
#define  LINEO2 134 
#define  LINEO3 133 
#define  LINEO4 132 
#define  MIC 131 
#define  SPDIFI1 130 
#define  SPDIFIO 129 
#define  SPDIFOO 128 

__attribute__((used)) static unsigned int daio_device_index(enum DAIOTYP type, struct hw *hw)
{
	switch (hw->chip_type) {
	case ATC20K1:
		switch (type) {
		case SPDIFOO:	return 0;
		case SPDIFIO:	return 0;
		case SPDIFI1:	return 1;
		case LINEO1:	return 4;
		case LINEO2:	return 7;
		case LINEO3:	return 5;
		case LINEO4:	return 6;
		case LINEIM:	return 7;
		default:	return -EINVAL;
		}
	case ATC20K2:
		switch (type) {
		case SPDIFOO:	return 0;
		case SPDIFIO:	return 0;
		case LINEO1:	return 4;
		case LINEO2:	return 7;
		case LINEO3:	return 5;
		case LINEO4:	return 6;
		case LINEIM:	return 4;
		case MIC:	return 5;
		default:	return -EINVAL;
		}
	default:
		return -EINVAL;
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
          enum DAIOTYP type = 0;
          int _len_hw0 = 1;
          struct hw * hw = (struct hw *) malloc(_len_hw0*sizeof(struct hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].chip_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = daio_device_index(type,hw);
          printf("%u\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum DAIOTYP type = 0;
          int _len_hw0 = 100;
          struct hw * hw = (struct hw *) malloc(_len_hw0*sizeof(struct hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].chip_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = daio_device_index(type,hw);
          printf("%u\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
