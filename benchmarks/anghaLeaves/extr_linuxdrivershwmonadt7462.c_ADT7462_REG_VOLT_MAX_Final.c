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
struct adt7462_data {int* pin_cfg; } ;

/* Variables and functions */
 int ADT7462_DIODE1_INPUT ; 
 int ADT7462_DIODE3_INPUT ; 
 int ADT7462_PIN13_INPUT ; 
 int ADT7462_PIN21_INPUT ; 
 int ADT7462_PIN22_INPUT ; 
 int ADT7462_PIN25_VOLT_INPUT ; 
 int ADT7462_PIN26_VOLT_INPUT ; 
 int /*<<< orphan*/  ADT7462_PIN28_SHIFT ; 
 int /*<<< orphan*/  ADT7462_PIN28_VOLT ; 
 int ADT7462_PIN7_INPUT ; 
 int ADT7462_PIN8_INPUT ; 
 int ADT7462_VID_INPUT ; 

__attribute__((used)) static int ADT7462_REG_VOLT_MAX(struct adt7462_data *data, int which)
{
	switch (which) {
	case 0:
		if (!(data->pin_cfg[0] & ADT7462_PIN7_INPUT))
			return 0x7C;
		break;
	case 1:
		return 0x69;
	case 2:
		if (!(data->pin_cfg[1] & ADT7462_PIN22_INPUT))
			return 0x7F;
		break;
	case 3:
		if (!(data->pin_cfg[1] & ADT7462_PIN21_INPUT))
			return 0x7E;
		break;
	case 4:
		if (!(data->pin_cfg[0] & ADT7462_DIODE3_INPUT))
			return 0x4B;
		break;
	case 5:
		if (!(data->pin_cfg[0] & ADT7462_DIODE1_INPUT))
			return 0x49;
		break;
	case 6:
		if (!(data->pin_cfg[1] & ADT7462_PIN13_INPUT))
			return 0x68;
		break;
	case 7:
		if (!(data->pin_cfg[1] & ADT7462_PIN8_INPUT))
			return 0x7D;
		break;
	case 8:
		if (!(data->pin_cfg[2] & ADT7462_PIN26_VOLT_INPUT))
			return 0x6C;
		break;
	case 9:
		if (!(data->pin_cfg[2] & ADT7462_PIN25_VOLT_INPUT))
			return 0x6B;
		break;
	case 10:
		return 0x6A;
	case 11:
		if (data->pin_cfg[3] >> ADT7462_PIN28_SHIFT ==
					ADT7462_PIN28_VOLT &&
		    !(data->pin_cfg[0] & ADT7462_VID_INPUT))
			return 0x50;
		break;
	case 12:
		if (data->pin_cfg[3] >> ADT7462_PIN28_SHIFT ==
					ADT7462_PIN28_VOLT &&
		    !(data->pin_cfg[0] & ADT7462_VID_INPUT))
			return 0x4C;
		break;
	}
	return 0;
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
          int which = 100;
          int _len_data0 = 1;
          struct adt7462_data * data = (struct adt7462_data *) malloc(_len_data0*sizeof(struct adt7462_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__pin_cfg0 = 1;
          data[_i0].pin_cfg = (int *) malloc(_len_data__i0__pin_cfg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__pin_cfg0; _j0++) {
            data[_i0].pin_cfg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ADT7462_REG_VOLT_MAX(data,which);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].pin_cfg);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
