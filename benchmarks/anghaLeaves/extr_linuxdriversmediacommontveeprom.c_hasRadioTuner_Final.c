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

/* Variables and functions */

__attribute__((used)) static int hasRadioTuner(int tunerType)
{
	switch (tunerType) {
	case 18: /* PNPEnv_TUNER_FR1236_MK2 */
	case 23: /* PNPEnv_TUNER_FM1236 */
	case 38: /* PNPEnv_TUNER_FMR1236 */
	case 16: /* PNPEnv_TUNER_FR1216_MK2 */
	case 19: /* PNPEnv_TUNER_FR1246_MK2 */
	case 21: /* PNPEnv_TUNER_FM1216 */
	case 24: /* PNPEnv_TUNER_FM1246 */
	case 17: /* PNPEnv_TUNER_FR1216MF_MK2 */
	case 22: /* PNPEnv_TUNER_FM1216MF */
	case 20: /* PNPEnv_TUNER_FR1256_MK2 */
	case 25: /* PNPEnv_TUNER_FM1256 */
	case 33: /* PNPEnv_TUNER_4039FR5 */
	case 42: /* PNPEnv_TUNER_4009FR5 */
	case 52: /* PNPEnv_TUNER_4049FM5 */
	case 54: /* PNPEnv_TUNER_4049FM5_AltI2C */
	case 44: /* PNPEnv_TUNER_4009FN5 */
	case 31: /* PNPEnv_TUNER_TCPB9085P */
	case 30: /* PNPEnv_TUNER_TCPN9085D */
	case 46: /* PNPEnv_TUNER_TP18NSR01F */
	case 47: /* PNPEnv_TUNER_TP18PSB01D */
	case 49: /* PNPEnv_TUNER_TAPC_I001D */
	case 60: /* PNPEnv_TUNER_TAPE_S001D_MK3 */
	case 57: /* PNPEnv_TUNER_FM1216ME_MK3 */
	case 59: /* PNPEnv_TUNER_FM1216MP_MK3 */
	case 58: /* PNPEnv_TUNER_FM1236_MK3 */
	case 68: /* PNPEnv_TUNER_TAPE_H001F_MK3 */
	case 61: /* PNPEnv_TUNER_TAPE_M001D_MK3 */
	case 78: /* PNPEnv_TUNER_TDA8275C1_8290_FM */
	case 89: /* PNPEnv_TUNER_TCL_MFPE05_2 */
	case 92: /* PNPEnv_TUNER_PHILIPS_FQ1236A_MK4 */
	case 105:
		return 1;
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
          int tunerType = 100;
          int benchRet = hasRadioTuner(tunerType);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tunerType = 255;
          int benchRet = hasRadioTuner(tunerType);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tunerType = 10;
          int benchRet = hasRadioTuner(tunerType);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
