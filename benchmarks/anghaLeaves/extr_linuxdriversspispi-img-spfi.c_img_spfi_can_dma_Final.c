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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct spi_transfer {scalar_t__ len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;

/* Variables and functions */
 scalar_t__ SPFI_32BIT_FIFO_SIZE ; 

__attribute__((used)) static bool img_spfi_can_dma(struct spi_master *master, struct spi_device *spi,
			     struct spi_transfer *xfer)
{
	if (xfer->len > SPFI_32BIT_FIFO_SIZE)
		return true;
	return false;
}

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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_master0 = 65025;
          struct spi_master * master = (struct spi_master *) malloc(_len_master0*sizeof(struct spi_master));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
              master[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_spi0 = 65025;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_xfer0 = 65025;
          struct spi_transfer * xfer = (struct spi_transfer *) malloc(_len_xfer0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
              xfer[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = img_spfi_can_dma(master,spi,xfer);
          printf("%d\n", benchRet); 
          free(master);
          free(spi);
          free(xfer);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_master0 = 100;
          struct spi_master * master = (struct spi_master *) malloc(_len_master0*sizeof(struct spi_master));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
              master[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_spi0 = 100;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_xfer0 = 100;
          struct spi_transfer * xfer = (struct spi_transfer *) malloc(_len_xfer0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
              xfer[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = img_spfi_can_dma(master,spi,xfer);
          printf("%d\n", benchRet); 
          free(master);
          free(spi);
          free(xfer);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_master0 = 1;
          struct spi_master * master = (struct spi_master *) malloc(_len_master0*sizeof(struct spi_master));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
              master[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_spi0 = 1;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
              spi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_xfer0 = 1;
          struct spi_transfer * xfer = (struct spi_transfer *) malloc(_len_xfer0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_xfer0; _i0++) {
              xfer[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = img_spfi_can_dma(master,spi,xfer);
          printf("%d\n", benchRet); 
          free(master);
          free(spi);
          free(xfer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
