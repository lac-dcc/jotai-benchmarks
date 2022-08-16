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

/* Type definitions */
typedef  int /*<<< orphan*/  uint32_t ;
typedef  enum engine_id { ____Placeholder_engine_id } engine_id ;

/* Variables and functions */
 int /*<<< orphan*/  ASIC_INT_DAC1_ENCODER_ID ; 
 int /*<<< orphan*/  ASIC_INT_DIG1_ENCODER_ID ; 
 int /*<<< orphan*/  ASIC_INT_DIG2_ENCODER_ID ; 
 int /*<<< orphan*/  ASIC_INT_DIG3_ENCODER_ID ; 
 int /*<<< orphan*/  ASIC_INT_DIG4_ENCODER_ID ; 
 int /*<<< orphan*/  ASIC_INT_DIG5_ENCODER_ID ; 
 int /*<<< orphan*/  ASIC_INT_DIG6_ENCODER_ID ; 
 int /*<<< orphan*/  ASIC_INT_DIG7_ENCODER_ID ; 
#define  ENGINE_ID_DACA 135 
#define  ENGINE_ID_DIGA 134 
#define  ENGINE_ID_DIGB 133 
#define  ENGINE_ID_DIGC 132 
#define  ENGINE_ID_DIGD 131 
#define  ENGINE_ID_DIGE 130 
#define  ENGINE_ID_DIGF 129 
#define  ENGINE_ID_DIGG 128 

__attribute__((used)) static bool engine_bp_to_atom(enum engine_id id, uint32_t *atom_engine_id)
{
	bool result = false;

	if (atom_engine_id != NULL)
		switch (id) {
		case ENGINE_ID_DIGA:
			*atom_engine_id = ASIC_INT_DIG1_ENCODER_ID;
			result = true;
			break;
		case ENGINE_ID_DIGB:
			*atom_engine_id = ASIC_INT_DIG2_ENCODER_ID;
			result = true;
			break;
		case ENGINE_ID_DIGC:
			*atom_engine_id = ASIC_INT_DIG3_ENCODER_ID;
			result = true;
			break;
		case ENGINE_ID_DIGD:
			*atom_engine_id = ASIC_INT_DIG4_ENCODER_ID;
			result = true;
			break;
		case ENGINE_ID_DIGE:
			*atom_engine_id = ASIC_INT_DIG5_ENCODER_ID;
			result = true;
			break;
		case ENGINE_ID_DIGF:
			*atom_engine_id = ASIC_INT_DIG6_ENCODER_ID;
			result = true;
			break;
		case ENGINE_ID_DIGG:
			*atom_engine_id = ASIC_INT_DIG7_ENCODER_ID;
			result = true;
			break;
		case ENGINE_ID_DACA:
			*atom_engine_id = ASIC_INT_DAC1_ENCODER_ID;
			result = true;
			break;
		default:
			break;
		}

	return result;
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
          enum engine_id id = 0;
          int _len_atom_engine_id0 = 1;
          int * atom_engine_id = (int *) malloc(_len_atom_engine_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_atom_engine_id0; _i0++) {
            atom_engine_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = engine_bp_to_atom(id,atom_engine_id);
          printf("%d\n", benchRet); 
          free(atom_engine_id);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum engine_id id = 0;
          int _len_atom_engine_id0 = 100;
          int * atom_engine_id = (int *) malloc(_len_atom_engine_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_atom_engine_id0; _i0++) {
            atom_engine_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = engine_bp_to_atom(id,atom_engine_id);
          printf("%d\n", benchRet); 
          free(atom_engine_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
