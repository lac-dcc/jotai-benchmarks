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
typedef  enum rf_type { ____Placeholder_rf_type } rf_type ;
typedef  enum halmac_rf_type { ____Placeholder_halmac_rf_type } halmac_rf_type ;

/* Variables and functions */
 int HALMAC_RF_1T1R ; 
 int HALMAC_RF_1T2R ; 
 int HALMAC_RF_2T2R ; 
 int HALMAC_RF_2T2R_GREEN ; 
#define  RF_1T1R 131 
#define  RF_1T2R 130 
#define  RF_2T2R 129 
#define  RF_2T2R_GREEN 128 

__attribute__((used)) static inline enum halmac_rf_type _rf_type_drv2halmac(enum rf_type rf_drv)
{
	enum halmac_rf_type rf_mac;

	switch (rf_drv) {
	case RF_1T2R:
		rf_mac = HALMAC_RF_1T2R;
		break;
	case RF_2T2R:
		rf_mac = HALMAC_RF_2T2R;
		break;
	case RF_1T1R:
		rf_mac = HALMAC_RF_1T1R;
		break;
	case RF_2T2R_GREEN:
		rf_mac = HALMAC_RF_2T2R_GREEN;
		break;
	default:
		rf_mac = (enum halmac_rf_type)rf_drv;
		break;
	}

	return rf_mac;
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
          enum rf_type rf_drv = 0;
          enum halmac_rf_type benchRet = _rf_type_drv2halmac(rf_drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
