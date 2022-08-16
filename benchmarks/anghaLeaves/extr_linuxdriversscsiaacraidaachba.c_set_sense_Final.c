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
       0            big-arr-10x\n\
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
typedef  int u16 ;
struct sense_data {int dummy; } ;

/* Variables and functions */
 int ILLEGAL_REQUEST ; 
 int SENCODE_INVALID_CDB_FIELD ; 

__attribute__((used)) static inline void set_sense(struct sense_data *sense_data, u8 sense_key,
	u8 sense_code, u8 a_sense_code, u8 bit_pointer, u16 field_pointer)
{
	u8 *sense_buf = (u8 *)sense_data;
	/* Sense data valid, err code 70h */
	sense_buf[0] = 0x70; /* No info field */
	sense_buf[1] = 0;	/* Segment number, always zero */

	sense_buf[2] = sense_key;	/* Sense key */

	sense_buf[12] = sense_code;	/* Additional sense code */
	sense_buf[13] = a_sense_code;	/* Additional sense code qualifier */

	if (sense_key == ILLEGAL_REQUEST) {
		sense_buf[7] = 10;	/* Additional sense length */

		sense_buf[15] = bit_pointer;
		/* Illegal parameter is in the parameter block */
		if (sense_code == SENCODE_INVALID_CDB_FIELD)
			sense_buf[15] |= 0xc0;/* Std sense key specific field */
		/* Illegal parameter is in the CDB block */
		sense_buf[16] = field_pointer >> 8;	/* MSB */
		sense_buf[17] = field_pointer;		/* LSB */
	} else
		sense_buf[7] = 6;	/* Additional sense length */
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

    // big-arr-10x
    case 0:
    {
          int sense_key = 10;
          int sense_code = 10;
          int a_sense_code = 10;
          int bit_pointer = 10;
          int field_pointer = 10;
          int _len_sense_data0 = 100;
          struct sense_data * sense_data = (struct sense_data *) malloc(_len_sense_data0*sizeof(struct sense_data));
          for(int _i0 = 0; _i0 < _len_sense_data0; _i0++) {
            sense_data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_sense(sense_data,sense_key,sense_code,a_sense_code,bit_pointer,field_pointer);
          free(sense_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
