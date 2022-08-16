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
struct isl29501_private {unsigned int* shadow_coeffs; } ;
typedef  enum isl29501_register_name { ____Placeholder_isl29501_register_name } isl29501_register_name ;
typedef  enum isl29501_correction_coeff { ____Placeholder_isl29501_correction_coeff } isl29501_correction_coeff ;

/* Variables and functions */
 int COEFF_LIGHT_A ; 
 int COEFF_LIGHT_B ; 
 int COEFF_TEMP_A ; 
 int COEFF_TEMP_B ; 
 int EINVAL ; 
#define  REG_CALIB_PHASE_LIGHT_A 131 
#define  REG_CALIB_PHASE_LIGHT_B 130 
#define  REG_CALIB_PHASE_TEMP_A 129 
#define  REG_CALIB_PHASE_TEMP_B 128 

__attribute__((used)) static int isl29501_set_shadow_coeff(struct isl29501_private *isl29501,
				     enum isl29501_register_name reg,
				     unsigned int val)
{
	enum isl29501_correction_coeff coeff;

	switch (reg) {
	case REG_CALIB_PHASE_TEMP_A:
		coeff = COEFF_TEMP_A;
		break;
	case REG_CALIB_PHASE_TEMP_B:
		coeff = COEFF_TEMP_B;
		break;
	case REG_CALIB_PHASE_LIGHT_A:
		coeff = COEFF_LIGHT_A;
		break;
	case REG_CALIB_PHASE_LIGHT_B:
		coeff = COEFF_LIGHT_B;
		break;
	default:
		return -EINVAL;
	}
	isl29501->shadow_coeffs[coeff] = val;

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
          enum isl29501_register_name reg = 0;
          unsigned int val = 100;
          int _len_isl295010 = 1;
          struct isl29501_private * isl29501 = (struct isl29501_private *) malloc(_len_isl295010*sizeof(struct isl29501_private));
          for(int _i0 = 0; _i0 < _len_isl295010; _i0++) {
              int _len_isl29501__i0__shadow_coeffs0 = 1;
          isl29501[_i0].shadow_coeffs = (unsigned int *) malloc(_len_isl29501__i0__shadow_coeffs0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_isl29501__i0__shadow_coeffs0; _j0++) {
            isl29501[_i0].shadow_coeffs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = isl29501_set_shadow_coeff(isl29501,reg,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_isl295010; _aux++) {
          free(isl29501[_aux].shadow_coeffs);
          }
          free(isl29501);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
