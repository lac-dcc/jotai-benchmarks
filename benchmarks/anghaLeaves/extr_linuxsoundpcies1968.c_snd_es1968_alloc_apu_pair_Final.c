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
struct es1968 {int* apu; } ;

/* Variables and functions */
 int EBUSY ; 
 int ESM_APU_FREE ; 
 int NR_APUS ; 

__attribute__((used)) static int snd_es1968_alloc_apu_pair(struct es1968 *chip, int type)
{
	int apu;

	for (apu = 0; apu < NR_APUS; apu += 2) {
		if (chip->apu[apu] == ESM_APU_FREE &&
		    chip->apu[apu + 1] == ESM_APU_FREE) {
			chip->apu[apu] = chip->apu[apu + 1] = type;
			return apu;
		}
	}
	return -EBUSY;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = 100;
        
          int _len_chip0 = 1;
          struct es1968 * chip = (struct es1968 *) malloc(_len_chip0*sizeof(struct es1968));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__apu0 = 1;
          chip[_i0].apu = (int *) malloc(_len_chip__i0__apu0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__apu0; _j0++) {
            chip[_i0].apu[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = snd_es1968_alloc_apu_pair(chip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].apu);
          }
          free(chip);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = 255;
        
          int _len_chip0 = 65025;
          struct es1968 * chip = (struct es1968 *) malloc(_len_chip0*sizeof(struct es1968));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__apu0 = 1;
          chip[_i0].apu = (int *) malloc(_len_chip__i0__apu0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__apu0; _j0++) {
            chip[_i0].apu[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = snd_es1968_alloc_apu_pair(chip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].apu);
          }
          free(chip);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = 10;
        
          int _len_chip0 = 100;
          struct es1968 * chip = (struct es1968 *) malloc(_len_chip0*sizeof(struct es1968));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__apu0 = 1;
          chip[_i0].apu = (int *) malloc(_len_chip__i0__apu0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__apu0; _j0++) {
            chip[_i0].apu[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = snd_es1968_alloc_apu_pair(chip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].apu);
          }
          free(chip);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_chip0 = 1;
          struct es1968 * chip = (struct es1968 *) malloc(_len_chip0*sizeof(struct es1968));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__apu0 = 1;
          chip[_i0].apu = (int *) malloc(_len_chip__i0__apu0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__apu0; _j0++) {
            chip[_i0].apu[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = snd_es1968_alloc_apu_pair(chip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].apu);
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
