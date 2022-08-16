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
typedef  int u32 ;
struct i2c_adapter {struct acpi_smbus_cmi* algo_data; } ;
struct acpi_smbus_cmi {int cap_read; int cap_write; } ;

/* Variables and functions */
 int I2C_FUNC_SMBUS_QUICK ; 
 int I2C_FUNC_SMBUS_READ_BLOCK_DATA ; 
 int I2C_FUNC_SMBUS_READ_BYTE ; 
 int I2C_FUNC_SMBUS_READ_BYTE_DATA ; 
 int I2C_FUNC_SMBUS_READ_WORD_DATA ; 
 int I2C_FUNC_SMBUS_WRITE_BLOCK_DATA ; 
 int I2C_FUNC_SMBUS_WRITE_BYTE ; 
 int I2C_FUNC_SMBUS_WRITE_BYTE_DATA ; 
 int I2C_FUNC_SMBUS_WRITE_WORD_DATA ; 

__attribute__((used)) static u32 acpi_smbus_cmi_func(struct i2c_adapter *adapter)
{
	struct acpi_smbus_cmi *smbus_cmi = adapter->algo_data;
	u32 ret;

	ret = smbus_cmi->cap_read | smbus_cmi->cap_write ?
		I2C_FUNC_SMBUS_QUICK : 0;

	ret |= smbus_cmi->cap_read ?
		(I2C_FUNC_SMBUS_READ_BYTE |
		I2C_FUNC_SMBUS_READ_BYTE_DATA |
		I2C_FUNC_SMBUS_READ_WORD_DATA |
		I2C_FUNC_SMBUS_READ_BLOCK_DATA) : 0;

	ret |= smbus_cmi->cap_write ?
		(I2C_FUNC_SMBUS_WRITE_BYTE |
		I2C_FUNC_SMBUS_WRITE_BYTE_DATA |
		I2C_FUNC_SMBUS_WRITE_WORD_DATA |
		I2C_FUNC_SMBUS_WRITE_BLOCK_DATA) : 0;

	return ret;
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
          int _len_adapter0 = 1;
          struct i2c_adapter * adapter = (struct i2c_adapter *) malloc(_len_adapter0*sizeof(struct i2c_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__algo_data0 = 1;
          adapter[_i0].algo_data = (struct acpi_smbus_cmi *) malloc(_len_adapter__i0__algo_data0*sizeof(struct acpi_smbus_cmi));
          for(int _j0 = 0; _j0 < _len_adapter__i0__algo_data0; _j0++) {
            adapter[_i0].algo_data->cap_read = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].algo_data->cap_write = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acpi_smbus_cmi_func(adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].algo_data);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
