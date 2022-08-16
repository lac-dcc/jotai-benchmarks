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
struct comedi_8254 {int divisor; int next_div; int divisor1; int next_div1; int divisor2; int next_div2; } ;

/* Variables and functions */

void comedi_8254_update_divisors(struct comedi_8254 *i8254)
{
	/* masking is done since counter maps zero to 0x10000 */
	i8254->divisor = i8254->next_div & 0xffff;
	i8254->divisor1 = i8254->next_div1 & 0xffff;
	i8254->divisor2 = i8254->next_div2 & 0xffff;
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
          int _len_i82540 = 1;
          struct comedi_8254 * i8254 = (struct comedi_8254 *) malloc(_len_i82540*sizeof(struct comedi_8254));
          for(int _i0 = 0; _i0 < _len_i82540; _i0++) {
            i8254[_i0].divisor = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].next_div = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].divisor1 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].next_div1 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].divisor2 = ((-2 * (next_i()%2)) + 1) * next_i();
        i8254[_i0].next_div2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          comedi_8254_update_divisors(i8254);
          free(i8254);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
