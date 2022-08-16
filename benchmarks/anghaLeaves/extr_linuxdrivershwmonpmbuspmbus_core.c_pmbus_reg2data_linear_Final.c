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
typedef  long u16 ;
struct pmbus_sensor {scalar_t__ class; size_t page; int data; } ;
struct pmbus_data {int* exponent; } ;
typedef  long s32 ;
typedef  int s16 ;

/* Variables and functions */
 scalar_t__ PSC_FAN ; 
 scalar_t__ PSC_POWER ; 
 scalar_t__ PSC_VOLTAGE_OUT ; 

__attribute__((used)) static long pmbus_reg2data_linear(struct pmbus_data *data,
				  struct pmbus_sensor *sensor)
{
	s16 exponent;
	s32 mantissa;
	long val;

	if (sensor->class == PSC_VOLTAGE_OUT) {	/* LINEAR16 */
		exponent = data->exponent[sensor->page];
		mantissa = (u16) sensor->data;
	} else {				/* LINEAR11 */
		exponent = ((s16)sensor->data) >> 11;
		mantissa = ((s16)((sensor->data & 0x7ff) << 5)) >> 5;
	}

	val = mantissa;

	/* scale result to milli-units for all sensors except fans */
	if (sensor->class != PSC_FAN)
		val = val * 1000L;

	/* scale result to micro-units for power sensors */
	if (sensor->class == PSC_POWER)
		val = val * 1000L;

	if (exponent >= 0)
		val <<= exponent;
	else
		val >>= -exponent;

	return val;
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
          int _len_data0 = 1;
          struct pmbus_data * data = (struct pmbus_data *) malloc(_len_data0*sizeof(struct pmbus_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__exponent0 = 1;
          data[_i0].exponent = (int *) malloc(_len_data__i0__exponent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__exponent0; _j0++) {
            data[_i0].exponent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sensor0 = 1;
          struct pmbus_sensor * sensor = (struct pmbus_sensor *) malloc(_len_sensor0*sizeof(struct pmbus_sensor));
          for(int _i0 = 0; _i0 < _len_sensor0; _i0++) {
            sensor[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].page = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = pmbus_reg2data_linear(data,sensor);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].exponent);
          }
          free(data);
          free(sensor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
