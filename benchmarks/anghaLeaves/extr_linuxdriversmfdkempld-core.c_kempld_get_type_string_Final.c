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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int type; } ;
struct kempld_device_data {TYPE_1__ info; } ;

/* Variables and functions */

__attribute__((used)) static const char *kempld_get_type_string(struct kempld_device_data *pld)
{
	const char *version_type;

	switch (pld->info.type) {
	case 0:
		version_type = "release";
		break;
	case 1:
		version_type = "debug";
		break;
	case 2:
		version_type = "custom";
		break;
	default:
		version_type = "unspecified";
		break;
	}

	return version_type;
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
          int _len_pld0 = 1;
          struct kempld_device_data * pld = (struct kempld_device_data *) malloc(_len_pld0*sizeof(struct kempld_device_data));
          for(int _i0 = 0; _i0 < _len_pld0; _i0++) {
            pld[_i0].info.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = kempld_get_type_string(pld);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pld);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pld0 = 100;
          struct kempld_device_data * pld = (struct kempld_device_data *) malloc(_len_pld0*sizeof(struct kempld_device_data));
          for(int _i0 = 0; _i0 < _len_pld0; _i0++) {
            pld[_i0].info.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = kempld_get_type_string(pld);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pld);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
