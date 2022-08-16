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
typedef  int u16 ;
struct ath5k_eeprom_info {scalar_t__ ee_version; } ;

/* Variables and functions */
 int AR5K_EEPROM_CHANNEL_DIS ; 
 unsigned int AR5K_EEPROM_MODE_11A ; 
 scalar_t__ AR5K_EEPROM_VERSION_3_2 ; 

__attribute__((used)) static u16 ath5k_eeprom_bin2freq(struct ath5k_eeprom_info *ee, u16 bin,
							unsigned int mode)
{
	u16 val;

	if (bin == AR5K_EEPROM_CHANNEL_DIS)
		return bin;

	if (mode == AR5K_EEPROM_MODE_11A) {
		if (ee->ee_version > AR5K_EEPROM_VERSION_3_2)
			val = (5 * bin) + 4800;
		else
			val = bin > 62 ? (10 * 62) + (5 * (bin - 62)) + 5100 :
				(bin * 10) + 5100;
	} else {
		if (ee->ee_version > AR5K_EEPROM_VERSION_3_2)
			val = bin + 2300;
		else
			val = bin + 2400;
	}

	return val;
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
          int bin = 100;
          unsigned int mode = 100;
          int _len_ee0 = 1;
          struct ath5k_eeprom_info * ee = (struct ath5k_eeprom_info *) malloc(_len_ee0*sizeof(struct ath5k_eeprom_info));
          for(int _i0 = 0; _i0 < _len_ee0; _i0++) {
            ee[_i0].ee_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_eeprom_bin2freq(ee,bin,mode);
          printf("%d\n", benchRet); 
          free(ee);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int bin = 10;
          unsigned int mode = 10;
          int _len_ee0 = 100;
          struct ath5k_eeprom_info * ee = (struct ath5k_eeprom_info *) malloc(_len_ee0*sizeof(struct ath5k_eeprom_info));
          for(int _i0 = 0; _i0 < _len_ee0; _i0++) {
            ee[_i0].ee_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_eeprom_bin2freq(ee,bin,mode);
          printf("%d\n", benchRet); 
          free(ee);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
