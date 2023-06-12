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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  size_t u32 ;
struct tpm_chip {int* duration; } ;

/* Variables and functions */
 int HZ ; 
 size_t TPM_MAX_ORDINAL ; 
 int TPM_UNDEFINED ; 
 int* tpm_ordinal_duration ; 

unsigned long tpm_calc_ordinal_duration(struct tpm_chip *chip,
					   u32 ordinal)
{
	int duration_idx = TPM_UNDEFINED;
	int duration = 0;

	/*
	 * We only have a duration table for protected commands, where the upper
	 * 16 bits are 0. For the few other ordinals the fallback will be used.
	 */
	if (ordinal < TPM_MAX_ORDINAL)
		duration_idx = tpm_ordinal_duration[ordinal];

	if (duration_idx != TPM_UNDEFINED)
		duration = chip->duration[duration_idx];
	if (duration <= 0)
		return 2 * 60 * HZ;
	else
		return duration;
}

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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned long ordinal = 100;
        
          int _len_chip0 = 1;
          struct tpm_chip * chip = (struct tpm_chip *) malloc(_len_chip0*sizeof(struct tpm_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__duration0 = 1;
          chip[_i0].duration = (int *) malloc(_len_chip__i0__duration0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__duration0; _j0++) {
            chip[_i0].duration[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          unsigned long benchRet = tpm_calc_ordinal_duration(chip,ordinal);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].duration);
          }
          free(chip);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned long ordinal = 255;
        
          int _len_chip0 = 65025;
          struct tpm_chip * chip = (struct tpm_chip *) malloc(_len_chip0*sizeof(struct tpm_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__duration0 = 1;
          chip[_i0].duration = (int *) malloc(_len_chip__i0__duration0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__duration0; _j0++) {
            chip[_i0].duration[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          unsigned long benchRet = tpm_calc_ordinal_duration(chip,ordinal);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].duration);
          }
          free(chip);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned long ordinal = 10;
        
          int _len_chip0 = 100;
          struct tpm_chip * chip = (struct tpm_chip *) malloc(_len_chip0*sizeof(struct tpm_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__duration0 = 1;
          chip[_i0].duration = (int *) malloc(_len_chip__i0__duration0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__duration0; _j0++) {
            chip[_i0].duration[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          unsigned long benchRet = tpm_calc_ordinal_duration(chip,ordinal);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].duration);
          }
          free(chip);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned long ordinal = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_chip0 = 1;
          struct tpm_chip * chip = (struct tpm_chip *) malloc(_len_chip0*sizeof(struct tpm_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__duration0 = 1;
          chip[_i0].duration = (int *) malloc(_len_chip__i0__duration0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__duration0; _j0++) {
            chip[_i0].duration[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          unsigned long benchRet = tpm_calc_ordinal_duration(chip,ordinal);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].duration);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
