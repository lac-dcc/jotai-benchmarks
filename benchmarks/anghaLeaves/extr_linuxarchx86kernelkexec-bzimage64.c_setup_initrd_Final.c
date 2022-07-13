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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned long ramdisk_image; unsigned long ramdisk_size; } ;
struct boot_params {unsigned long ext_ramdisk_image; unsigned long ext_ramdisk_size; TYPE_1__ hdr; } ;

/* Variables and functions */

__attribute__((used)) static int setup_initrd(struct boot_params *params,
		unsigned long initrd_load_addr, unsigned long initrd_len)
{
	params->hdr.ramdisk_image = initrd_load_addr & 0xffffffffUL;
	params->hdr.ramdisk_size = initrd_len & 0xffffffffUL;

	params->ext_ramdisk_image = initrd_load_addr >> 32;
	params->ext_ramdisk_size = initrd_len >> 32;

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
          unsigned long initrd_load_addr = 100;
          unsigned long initrd_len = 100;
          int _len_params0 = 1;
          struct boot_params * params = (struct boot_params *) malloc(_len_params0*sizeof(struct boot_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].ext_ramdisk_image = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].ext_ramdisk_size = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].hdr.ramdisk_image = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].hdr.ramdisk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setup_initrd(params,initrd_load_addr,initrd_len);
          printf("%d\n", benchRet); 
          free(params);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long initrd_load_addr = 255;
          unsigned long initrd_len = 255;
          int _len_params0 = 65025;
          struct boot_params * params = (struct boot_params *) malloc(_len_params0*sizeof(struct boot_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].ext_ramdisk_image = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].ext_ramdisk_size = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].hdr.ramdisk_image = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].hdr.ramdisk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setup_initrd(params,initrd_load_addr,initrd_len);
          printf("%d\n", benchRet); 
          free(params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long initrd_load_addr = 10;
          unsigned long initrd_len = 10;
          int _len_params0 = 100;
          struct boot_params * params = (struct boot_params *) malloc(_len_params0*sizeof(struct boot_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].ext_ramdisk_image = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].ext_ramdisk_size = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].hdr.ramdisk_image = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].hdr.ramdisk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setup_initrd(params,initrd_load_addr,initrd_len);
          printf("%d\n", benchRet); 
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
