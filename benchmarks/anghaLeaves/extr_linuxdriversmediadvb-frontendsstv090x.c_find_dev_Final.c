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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u8 ;
struct stv090x_dev {struct stv090x_dev* next_dev; TYPE_1__* internal; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ i2c_addr; struct i2c_adapter* i2c_adap; } ;

/* Variables and functions */
 struct stv090x_dev* stv090x_first_dev ; 

__attribute__((used)) static struct stv090x_dev *find_dev(struct i2c_adapter *i2c_adap,
					u8 i2c_addr)
{
	struct stv090x_dev *temp_dev = stv090x_first_dev;

	/*
	 Search of the last stv0900 chip or
	 find it by i2c adapter and i2c address */
	while ((temp_dev != NULL) &&
		((temp_dev->internal->i2c_adap != i2c_adap) ||
		(temp_dev->internal->i2c_addr != i2c_addr))) {

		temp_dev = temp_dev->next_dev;
	}

	return temp_dev;
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
          long i2c_addr = 100;
          int _len_i2c_adap0 = 1;
          struct i2c_adapter * i2c_adap = (struct i2c_adapter *) malloc(_len_i2c_adap0*sizeof(struct i2c_adapter));
          for(int _i0 = 0; _i0 < _len_i2c_adap0; _i0++) {
            i2c_adap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct stv090x_dev * benchRet = find_dev(i2c_adap,i2c_addr);
          free(i2c_adap);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long i2c_addr = 10;
          int _len_i2c_adap0 = 100;
          struct i2c_adapter * i2c_adap = (struct i2c_adapter *) malloc(_len_i2c_adap0*sizeof(struct i2c_adapter));
          for(int _i0 = 0; _i0 < _len_i2c_adap0; _i0++) {
            i2c_adap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct stv090x_dev * benchRet = find_dev(i2c_adap,i2c_addr);
          free(i2c_adap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
