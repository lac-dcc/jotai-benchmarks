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
struct i2c_child_t {unsigned char voltage_mask; } ;

/* Variables and functions */
 unsigned char ENVCTRL_POWERSUPPLY_BAD ; 
 unsigned char ENVCTRL_VOLTAGE_BAD ; 
 unsigned char ENVCTRL_VOLTAGE_POWERSUPPLY_BAD ; 
 unsigned char ENVCTRL_VOLTAGE_POWERSUPPLY_GOOD ; 
 int PCF8584_MAX_CHANNELS ; 
 int* chnls_mask ; 

__attribute__((used)) static unsigned char envctrl_i2c_voltage_status(struct i2c_child_t *pchild,
						unsigned char data,
						char *bufdata)
{
	unsigned char tmp, ret = 0;
	int i, j = 0;

	tmp = data & pchild->voltage_mask;

	/* Two channels are used to monitor voltage and power supply. */
	if (tmp == pchild->voltage_mask) {
		/* All bits are on. Voltage and power supply are okay. */
		ret = ENVCTRL_VOLTAGE_POWERSUPPLY_GOOD;
	} else if (tmp == 0) {
		/* All bits are off. Voltage and power supply are bad */
		ret = ENVCTRL_VOLTAGE_POWERSUPPLY_BAD;
	} else {
		/* Either voltage or power supply has problem. */
		for (i = 0; i < PCF8584_MAX_CHANNELS; i++) {
			if (pchild->voltage_mask & chnls_mask[i]) {
				j++;

				/* Break out when there is a mismatch. */
				if (!(chnls_mask[i] & tmp))
					break; 
			}
		}

		/* Make a wish that hardware will always use the
		 * first channel for voltage and the second for
		 * power supply.
		 */
		if (j == 1)
			ret = ENVCTRL_VOLTAGE_BAD;
		else
			ret = ENVCTRL_POWERSUPPLY_BAD;
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
            pchild[_i0].voltage_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bufdata0 = 1;
          char * bufdata = (char *) malloc(_len_bufdata0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bufdata0; _i0++) {
            bufdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = envctrl_i2c_voltage_status(pchild,data,bufdata);
          printf("%c\n", (benchRet %26) + 'a'); 
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
