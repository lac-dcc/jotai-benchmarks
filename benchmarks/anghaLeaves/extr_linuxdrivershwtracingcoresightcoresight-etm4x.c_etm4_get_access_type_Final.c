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
typedef  int u64 ;
struct etmv4_config {int mode; } ;

/* Variables and functions */
 int ETM_EXLEVEL_NS_APP ; 
 int ETM_EXLEVEL_NS_HYP ; 
 int ETM_EXLEVEL_NS_OS ; 
 int ETM_EXLEVEL_S_APP ; 
 int ETM_EXLEVEL_S_HYP ; 
 int ETM_EXLEVEL_S_OS ; 
 int ETM_MODE_EXCL_KERN ; 
 int ETM_MODE_EXCL_USER ; 

__attribute__((used)) static u64 etm4_get_access_type(struct etmv4_config *config)
{
	u64 access_type = 0;

	/*
	 * EXLEVEL_NS, bits[15:12]
	 * The Exception levels are:
	 *   Bit[12] Exception level 0 - Application
	 *   Bit[13] Exception level 1 - OS
	 *   Bit[14] Exception level 2 - Hypervisor
	 *   Bit[15] Never implemented
	 *
	 * Always stay away from hypervisor mode.
	 */
	access_type = ETM_EXLEVEL_NS_HYP;

	if (config->mode & ETM_MODE_EXCL_KERN)
		access_type |= ETM_EXLEVEL_NS_OS;

	if (config->mode & ETM_MODE_EXCL_USER)
		access_type |= ETM_EXLEVEL_NS_APP;

	/*
	 * EXLEVEL_S, bits[11:8], don't trace anything happening
	 * in secure state.
	 */
	access_type |= (ETM_EXLEVEL_S_APP	|
			ETM_EXLEVEL_S_OS	|
			ETM_EXLEVEL_S_HYP);

	return access_type;
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
          int _len_config0 = 1;
          struct etmv4_config * config = (struct etmv4_config *) malloc(_len_config0*sizeof(struct etmv4_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = etm4_get_access_type(config);
          printf("%d\n", benchRet); 
          free(config);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_config0 = 100;
          struct etmv4_config * config = (struct etmv4_config *) malloc(_len_config0*sizeof(struct etmv4_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = etm4_get_access_type(config);
          printf("%d\n", benchRet); 
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
