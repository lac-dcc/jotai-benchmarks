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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int uint32_t ;

/* Variables and functions */
 int LPFC_REGION23_LAST_REC ; 

__attribute__((used)) static uint8_t *
lpfc_get_rec_conf23(uint8_t *buff, uint32_t size, uint8_t rec_type)
{
	uint32_t offset = 0, rec_length;

	if ((buff[0] == LPFC_REGION23_LAST_REC) ||
		(size < sizeof(uint32_t)))
		return NULL;

	rec_length = buff[offset + 1];

	/*
	 * One TLV record has one word header and number of data words
	 * specified in the rec_length field of the record header.
	 */
	while ((offset + rec_length * sizeof(uint32_t) + sizeof(uint32_t))
		<= size) {
		if (buff[offset] == rec_type)
			return &buff[offset];

		if (buff[offset] == LPFC_REGION23_LAST_REC)
			return NULL;

		offset += rec_length * sizeof(uint32_t) + sizeof(uint32_t);
		rec_length = buff[offset + 1];
	}
	return NULL;
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

    // big-arr
    case 0:
    {
          int size = 255;
          int rec_type = 255;
          int _len_buff0 = 65025;
          int * buff = (int *) malloc(_len_buff0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buff0; _i0++) {
            buff[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = lpfc_get_rec_conf23(buff,size,rec_type);
          printf("{{other_type}} %p\n", &benchRet); 
          free(buff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
