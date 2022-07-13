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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct comp_id {int id; scalar_t__ major; } ;
typedef  enum fwtype { ____Placeholder_fwtype } fwtype ;

/* Variables and functions */
 int FIRMWARE_TYPE_AGERE ; 
 int FIRMWARE_TYPE_INTERSIL ; 
 int FIRMWARE_TYPE_SYMBOL ; 

__attribute__((used)) static inline enum fwtype determine_firmware_type(struct comp_id *nic_id)
{
	if (nic_id->id < 0x8000)
		return FIRMWARE_TYPE_AGERE;
	else if (nic_id->id == 0x8000 && nic_id->major == 0)
		return FIRMWARE_TYPE_SYMBOL;
	else
		return FIRMWARE_TYPE_INTERSIL;
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
          int _len_nic_id0 = 1;
          struct comp_id * nic_id = (struct comp_id *) malloc(_len_nic_id0*sizeof(struct comp_id));
          for(int _i0 = 0; _i0 < _len_nic_id0; _i0++) {
            nic_id[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        nic_id[_i0].major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fwtype benchRet = determine_firmware_type(nic_id);
          printf("{{other_type}} %p\n", &benchRet); 
          free(nic_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_nic_id0 = 65025;
          struct comp_id * nic_id = (struct comp_id *) malloc(_len_nic_id0*sizeof(struct comp_id));
          for(int _i0 = 0; _i0 < _len_nic_id0; _i0++) {
            nic_id[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        nic_id[_i0].major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fwtype benchRet = determine_firmware_type(nic_id);
          printf("{{other_type}} %p\n", &benchRet); 
          free(nic_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_nic_id0 = 100;
          struct comp_id * nic_id = (struct comp_id *) malloc(_len_nic_id0*sizeof(struct comp_id));
          for(int _i0 = 0; _i0 < _len_nic_id0; _i0++) {
            nic_id[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        nic_id[_i0].major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fwtype benchRet = determine_firmware_type(nic_id);
          printf("{{other_type}} %p\n", &benchRet); 
          free(nic_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
