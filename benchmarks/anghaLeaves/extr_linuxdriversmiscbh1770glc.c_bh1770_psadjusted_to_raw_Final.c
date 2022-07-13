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
typedef  int u8 ;
typedef  int u32 ;
typedef  int u16 ;
struct bh1770_chip {int prox_coef; int prox_const; } ;

/* Variables and functions */
 int BH1770_COEF_SCALER ; 

__attribute__((used)) static inline u8 bh1770_psadjusted_to_raw(struct bh1770_chip *chip, u8 ps)
{
	u16 raw;

	raw = (((u32)ps * BH1770_COEF_SCALER) / chip->prox_coef);
	if (raw > chip->prox_const)
		raw = raw - chip->prox_const;
	else
		raw = 0;
	return raw;
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
          int ps = 100;
          int _len_chip0 = 1;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].prox_coef = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].prox_const = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bh1770_psadjusted_to_raw(chip,ps);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ps = 255;
          int _len_chip0 = 65025;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].prox_coef = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].prox_const = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bh1770_psadjusted_to_raw(chip,ps);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ps = 10;
          int _len_chip0 = 100;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].prox_coef = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].prox_const = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bh1770_psadjusted_to_raw(chip,ps);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
