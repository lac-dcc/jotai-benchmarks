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
typedef  int uint8_t ;

/* Variables and functions */
#define  Vega10_I2CLineID_DDC1 135 
#define  Vega10_I2CLineID_DDC2 134 
#define  Vega10_I2CLineID_DDC3 133 
#define  Vega10_I2CLineID_DDC4 132 
#define  Vega10_I2CLineID_DDC5 131 
#define  Vega10_I2CLineID_DDC6 130 
#define  Vega10_I2CLineID_DDCVGA 129 
#define  Vega10_I2CLineID_SCLSDA 128 
 int Vega10_I2C_DDC1CLK ; 
 int Vega10_I2C_DDC1DATA ; 
 int Vega10_I2C_DDC2CLK ; 
 int Vega10_I2C_DDC2DATA ; 
 int Vega10_I2C_DDC3CLK ; 
 int Vega10_I2C_DDC3DATA ; 
 int Vega10_I2C_DDC4CLK ; 
 int Vega10_I2C_DDC4DATA ; 
 int Vega10_I2C_DDC5CLK ; 
 int Vega10_I2C_DDC5DATA ; 
 int Vega10_I2C_DDC6CLK ; 
 int Vega10_I2C_DDC6DATA ; 
 int Vega10_I2C_DDCVGACLK ; 
 int Vega10_I2C_DDCVGADATA ; 
 int Vega10_I2C_SCL ; 
 int Vega10_I2C_SDA ; 

__attribute__((used)) static void get_scl_sda_value(uint8_t line, uint8_t *scl, uint8_t* sda)
{
	switch(line){
	case Vega10_I2CLineID_DDC1:
		*scl = Vega10_I2C_DDC1CLK;
		*sda = Vega10_I2C_DDC1DATA;
		break;
	case Vega10_I2CLineID_DDC2:
		*scl = Vega10_I2C_DDC2CLK;
		*sda = Vega10_I2C_DDC2DATA;
		break;
	case Vega10_I2CLineID_DDC3:
		*scl = Vega10_I2C_DDC3CLK;
		*sda = Vega10_I2C_DDC3DATA;
		break;
	case Vega10_I2CLineID_DDC4:
		*scl = Vega10_I2C_DDC4CLK;
		*sda = Vega10_I2C_DDC4DATA;
		break;
	case Vega10_I2CLineID_DDC5:
		*scl = Vega10_I2C_DDC5CLK;
		*sda = Vega10_I2C_DDC5DATA;
		break;
	case Vega10_I2CLineID_DDC6:
		*scl = Vega10_I2C_DDC6CLK;
		*sda = Vega10_I2C_DDC6DATA;
		break;
	case Vega10_I2CLineID_SCLSDA:
		*scl = Vega10_I2C_SCL;
		*sda = Vega10_I2C_SDA;
		break;
	case Vega10_I2CLineID_DDCVGA:
		*scl = Vega10_I2C_DDCVGACLK;
		*sda = Vega10_I2C_DDCVGADATA;
		break;
	default:
		*scl = 0;
		*sda = 0;
		break;
	}
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
          int line = 100;
          int _len_scl0 = 1;
          int * scl = (int *) malloc(_len_scl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_scl0; _i0++) {
            scl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sda0 = 1;
          int * sda = (int *) malloc(_len_sda0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sda0; _i0++) {
            sda[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_scl_sda_value(line,scl,sda);
          free(scl);
          free(sda);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
