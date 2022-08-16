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
typedef  int /*<<< orphan*/  uint ;
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct brcmf_sdio_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool
brcmf_sdio_verifymemory(struct brcmf_sdio_dev *sdiodev, u32 ram_addr,
			u8 *ram_data, uint ram_sz)
{
	return true;
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
          int ram_addr = 100;
          int ram_sz = 100;
          int _len_sdiodev0 = 1;
          struct brcmf_sdio_dev * sdiodev = (struct brcmf_sdio_dev *) malloc(_len_sdiodev0*sizeof(struct brcmf_sdio_dev));
          for(int _i0 = 0; _i0 < _len_sdiodev0; _i0++) {
            sdiodev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ram_data0 = 1;
          int * ram_data = (int *) malloc(_len_ram_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ram_data0; _i0++) {
            ram_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = brcmf_sdio_verifymemory(sdiodev,ram_addr,ram_data,ram_sz);
          printf("%d\n", benchRet); 
          free(sdiodev);
          free(ram_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
