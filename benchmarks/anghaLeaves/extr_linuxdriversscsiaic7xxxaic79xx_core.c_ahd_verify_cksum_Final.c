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
typedef  int uint32_t ;
typedef  int uint16_t ;
struct seeprom_config {int checksum; } ;

/* Variables and functions */

int
ahd_verify_cksum(struct seeprom_config *sc)
{
	int i;
	int maxaddr;
	uint32_t checksum;
	uint16_t *scarray;

	maxaddr = (sizeof(*sc)/2) - 1;
	checksum = 0;
	scarray = (uint16_t *)sc;

	for (i = 0; i < maxaddr; i++)
		checksum = checksum + scarray[i];
	if (checksum == 0
	 || (checksum & 0xFFFF) != sc->checksum) {
		return (0);
	} else {
		return (1);
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
          int _len_sc0 = 1;
          struct seeprom_config * sc = (struct seeprom_config *) malloc(_len_sc0*sizeof(struct seeprom_config));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].checksum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ahd_verify_cksum(sc);
          printf("%d\n", benchRet); 
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_sc0 = 100;
          struct seeprom_config * sc = (struct seeprom_config *) malloc(_len_sc0*sizeof(struct seeprom_config));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].checksum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ahd_verify_cksum(sc);
          printf("%d\n", benchRet); 
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
