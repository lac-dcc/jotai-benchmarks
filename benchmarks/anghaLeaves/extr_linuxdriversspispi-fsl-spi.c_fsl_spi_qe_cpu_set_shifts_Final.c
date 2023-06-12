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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void fsl_spi_qe_cpu_set_shifts(u32 *rx_shift, u32 *tx_shift,
				      int bits_per_word, int msb_first)
{
	*rx_shift = 0;
	*tx_shift = 0;
	if (msb_first) {
		if (bits_per_word <= 8) {
			*rx_shift = 16;
			*tx_shift = 24;
		} else if (bits_per_word <= 16) {
			*rx_shift = 16;
			*tx_shift = 16;
		}
	} else {
		if (bits_per_word <= 8)
			*rx_shift = 8;
	}
}

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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int bits_per_word = 100;
        
          int msb_first = 100;
        
          int _len_rx_shift0 = 1;
          int * rx_shift = (int *) malloc(_len_rx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_shift0; _i0++) {
            rx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tx_shift0 = 1;
          int * tx_shift = (int *) malloc(_len_tx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_shift0; _i0++) {
            tx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fsl_spi_qe_cpu_set_shifts(rx_shift,tx_shift,bits_per_word,msb_first);
          free(rx_shift);
          free(tx_shift);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int bits_per_word = 255;
        
          int msb_first = 255;
        
          int _len_rx_shift0 = 65025;
          int * rx_shift = (int *) malloc(_len_rx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_shift0; _i0++) {
            rx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tx_shift0 = 65025;
          int * tx_shift = (int *) malloc(_len_tx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_shift0; _i0++) {
            tx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fsl_spi_qe_cpu_set_shifts(rx_shift,tx_shift,bits_per_word,msb_first);
          free(rx_shift);
          free(tx_shift);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int bits_per_word = 10;
        
          int msb_first = 10;
        
          int _len_rx_shift0 = 100;
          int * rx_shift = (int *) malloc(_len_rx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_shift0; _i0++) {
            rx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tx_shift0 = 100;
          int * tx_shift = (int *) malloc(_len_tx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_shift0; _i0++) {
            tx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fsl_spi_qe_cpu_set_shifts(rx_shift,tx_shift,bits_per_word,msb_first);
          free(rx_shift);
          free(tx_shift);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int bits_per_word = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int msb_first = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rx_shift0 = 1;
          int * rx_shift = (int *) malloc(_len_rx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_shift0; _i0++) {
            rx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tx_shift0 = 1;
          int * tx_shift = (int *) malloc(_len_tx_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_shift0; _i0++) {
            tx_shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fsl_spi_qe_cpu_set_shifts(rx_shift,tx_shift,bits_per_word,msb_first);
          free(rx_shift);
          free(tx_shift);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
