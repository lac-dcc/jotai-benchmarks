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
struct i2c_child_t {unsigned char fan_mask; } ;

/* Variables and functions */
 unsigned char ENVCTRL_ALL_FANS_BAD ; 
 unsigned char ENVCTRL_ALL_FANS_GOOD ; 
 int PCF8584_MAX_CHANNELS ; 
 int* chnls_mask ; 

__attribute__((used)) static int envctrl_i2c_fan_status(struct i2c_child_t *pchild,
				  unsigned char data,
				  char *bufdata)
{
	unsigned char tmp, ret = 0;
	int i, j = 0;

	tmp = data & pchild->fan_mask;

	if (tmp == pchild->fan_mask) {
		/* All bits are on. All fans are functioning. */
		ret = ENVCTRL_ALL_FANS_GOOD;
	} else if (tmp == 0) {
		/* No bits are on. No fans are functioning. */
		ret = ENVCTRL_ALL_FANS_BAD;
	} else {
		/* Go through all channels, mark 'on' the matched bits.
		 * Notice that fan_mask may have discontiguous bits but
		 * return mask are always contiguous. For example if we
		 * monitor 4 fans at channels 0,1,2,4, the return mask
		 * should be 00010000 if only fan at channel 4 is working.
		 */
		for (i = 0; i < PCF8584_MAX_CHANNELS;i++) {
			if (pchild->fan_mask & chnls_mask[i]) {
				if (!(chnls_mask[i] & tmp))
					ret |= chnls_mask[j];

				j++;
			}
		}
	}

	bufdata[0] = ret;
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
            pchild[_i0].fan_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bufdata0 = 1;
          char * bufdata = (char *) malloc(_len_bufdata0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bufdata0; _i0++) {
            bufdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = envctrl_i2c_fan_status(pchild,data,bufdata);
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
