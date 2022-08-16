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
struct i2c_child_t {int dummy; } ;

/* Variables and functions */
 unsigned char ENVCTRL_GLOBALADDR_ADDR_MASK ; 

__attribute__((used)) static int envctrl_i2c_globaladdr(struct i2c_child_t *pchild,
				  unsigned char data,
				  char *bufdata)
{
	/* Translatation table is not necessary, as global
	 * addr is the integer value of the GA# bits.
	 *
	 * NOTE: MSB is documented as zero, but I see it as '1' always....
	 *
	 * -----------------------------------------------
	 * | 0 | FAL | DEG | GA4 | GA3 | GA2 | GA1 | GA0 |
	 * -----------------------------------------------
	 * GA0 - GA4	integer value of Global Address (backplane slot#)
	 * DEG			0 = cPCI Power supply output is starting to degrade
	 * 				1 = cPCI Power supply output is OK
	 * FAL			0 = cPCI Power supply has failed
	 * 				1 = cPCI Power supply output is OK
	 */
	bufdata[0] = (data & ENVCTRL_GLOBALADDR_ADDR_MASK);
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
          unsigned char data = 100;
          int _len_pchild0 = 1;
          struct i2c_child_t * pchild = (struct i2c_child_t *) malloc(_len_pchild0*sizeof(struct i2c_child_t));
          for(int _i0 = 0; _i0 < _len_pchild0; _i0++) {
            pchild[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bufdata0 = 1;
          char * bufdata = (char *) malloc(_len_bufdata0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bufdata0; _i0++) {
            bufdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = envctrl_i2c_globaladdr(pchild,data,bufdata);
          printf("%d\n", benchRet); 
          free(pchild);
          free(bufdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
