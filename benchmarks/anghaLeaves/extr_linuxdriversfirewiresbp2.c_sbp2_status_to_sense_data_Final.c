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
typedef  int u8 ;

/* Variables and functions */
 int DID_ERROR ; 
 int DID_OK ; 
#define  SAM_STAT_BUSY 133 
#define  SAM_STAT_CHECK_CONDITION 132 
#define  SAM_STAT_COMMAND_TERMINATED 131 
#define  SAM_STAT_CONDITION_MET 130 
#define  SAM_STAT_GOOD 129 
#define  SAM_STAT_RESERVATION_CONFLICT 128 

__attribute__((used)) static unsigned int sbp2_status_to_sense_data(u8 *sbp2_status, u8 *sense_data)
{
	int sam_status;
	int sfmt = (sbp2_status[0] >> 6) & 0x03;

	if (sfmt == 2 || sfmt == 3) {
		/*
		 * Reserved for future standardization (2) or
		 * Status block format vendor-dependent (3)
		 */
		return DID_ERROR << 16;
	}

	sense_data[0] = 0x70 | sfmt | (sbp2_status[1] & 0x80);
	sense_data[1] = 0x0;
	sense_data[2] = ((sbp2_status[1] << 1) & 0xe0) | (sbp2_status[1] & 0x0f);
	sense_data[3] = sbp2_status[4];
	sense_data[4] = sbp2_status[5];
	sense_data[5] = sbp2_status[6];
	sense_data[6] = sbp2_status[7];
	sense_data[7] = 10;
	sense_data[8] = sbp2_status[8];
	sense_data[9] = sbp2_status[9];
	sense_data[10] = sbp2_status[10];
	sense_data[11] = sbp2_status[11];
	sense_data[12] = sbp2_status[2];
	sense_data[13] = sbp2_status[3];
	sense_data[14] = sbp2_status[12];
	sense_data[15] = sbp2_status[13];

	sam_status = sbp2_status[0] & 0x3f;

	switch (sam_status) {
	case SAM_STAT_GOOD:
	case SAM_STAT_CHECK_CONDITION:
	case SAM_STAT_CONDITION_MET:
	case SAM_STAT_BUSY:
	case SAM_STAT_RESERVATION_CONFLICT:
	case SAM_STAT_COMMAND_TERMINATED:
		return DID_OK << 16 | sam_status;

	default:
		return DID_ERROR << 16;
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
          int _len_sbp2_status0 = 1;
          int * sbp2_status = (int *) malloc(_len_sbp2_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sbp2_status0; _i0++) {
            sbp2_status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sense_data0 = 1;
          int * sense_data = (int *) malloc(_len_sense_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sense_data0; _i0++) {
            sense_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = sbp2_status_to_sense_data(sbp2_status,sense_data);
          printf("%u\n", benchRet); 
          free(sbp2_status);
          free(sense_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
