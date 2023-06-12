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
       3            empty\n\
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
typedef  scalar_t__ u8 ;
struct xd_info {scalar_t__ err_code; } ;
struct rtsx_chip {struct xd_info xd_card; } ;

/* Variables and functions */

__attribute__((used)) static inline int xd_check_err_code(struct rtsx_chip *chip, u8 err_code)
{
	struct xd_info *xd_card = &chip->xd_card;

	return (xd_card->err_code == err_code);
}

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
          long err_code = 100;
        
          int _len_chip0 = 1;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].xd_card.err_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = xd_check_err_code(chip,err_code);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          long err_code = 255;
        
          int _len_chip0 = 65025;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].xd_card.err_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = xd_check_err_code(chip,err_code);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long err_code = 10;
        
          int _len_chip0 = 100;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].xd_card.err_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = xd_check_err_code(chip,err_code);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // empty
    case 3:
    {
          long err_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_chip0 = 1;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].xd_card.err_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = xd_check_err_code(chip,err_code);
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
