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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct hisi_lpc_dev {TYPE_1__* io_host; } ;
struct TYPE_2__ {unsigned long io_start; unsigned long hw_start; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long hisi_lpc_pio_to_addr(struct hisi_lpc_dev *lpcdev,
					  unsigned long pio)
{
	return pio - lpcdev->io_host->io_start + lpcdev->io_host->hw_start;
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
          unsigned long pio = 100;
          int _len_lpcdev0 = 1;
          struct hisi_lpc_dev * lpcdev = (struct hisi_lpc_dev *) malloc(_len_lpcdev0*sizeof(struct hisi_lpc_dev));
          for(int _i0 = 0; _i0 < _len_lpcdev0; _i0++) {
              int _len_lpcdev__i0__io_host0 = 1;
          lpcdev[_i0].io_host = (struct TYPE_2__ *) malloc(_len_lpcdev__i0__io_host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lpcdev__i0__io_host0; _j0++) {
            lpcdev[_i0].io_host->io_start = ((-2 * (next_i()%2)) + 1) * next_i();
        lpcdev[_i0].io_host->hw_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = hisi_lpc_pio_to_addr(lpcdev,pio);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_lpcdev0; _aux++) {
          free(lpcdev[_aux].io_host);
          }
          free(lpcdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
