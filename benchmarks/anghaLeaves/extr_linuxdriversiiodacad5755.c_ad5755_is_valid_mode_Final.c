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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ad5755_state {TYPE_1__* chip_info; } ;
typedef  enum ad5755_mode { ____Placeholder_ad5755_mode } ad5755_mode ;
struct TYPE_2__ {int has_voltage_out; } ;

/* Variables and functions */
#define  AD5755_MODE_CURRENT_0mA_20mA 134 
#define  AD5755_MODE_CURRENT_0mA_24mA 133 
#define  AD5755_MODE_CURRENT_4mA_20mA 132 
#define  AD5755_MODE_VOLTAGE_0V_10V 131 
#define  AD5755_MODE_VOLTAGE_0V_5V 130 
#define  AD5755_MODE_VOLTAGE_PLUSMINUS_10V 129 
#define  AD5755_MODE_VOLTAGE_PLUSMINUS_5V 128 

__attribute__((used)) static bool ad5755_is_valid_mode(struct ad5755_state *st, enum ad5755_mode mode)
{
	switch (mode) {
	case AD5755_MODE_VOLTAGE_0V_5V:
	case AD5755_MODE_VOLTAGE_0V_10V:
	case AD5755_MODE_VOLTAGE_PLUSMINUS_5V:
	case AD5755_MODE_VOLTAGE_PLUSMINUS_10V:
		return st->chip_info->has_voltage_out;
	case AD5755_MODE_CURRENT_4mA_20mA:
	case AD5755_MODE_CURRENT_0mA_20mA:
	case AD5755_MODE_CURRENT_0mA_24mA:
		return true;
	default:
		return false;
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
          enum ad5755_mode mode = 0;
          int _len_st0 = 1;
          struct ad5755_state * st = (struct ad5755_state *) malloc(_len_st0*sizeof(struct ad5755_state));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
              int _len_st__i0__chip_info0 = 1;
          st[_i0].chip_info = (struct TYPE_2__ *) malloc(_len_st__i0__chip_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_st__i0__chip_info0; _j0++) {
            st[_i0].chip_info->has_voltage_out = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ad5755_is_valid_mode(st,mode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].chip_info);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
