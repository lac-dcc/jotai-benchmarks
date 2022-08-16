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
struct xadc {scalar_t__ external_mux_mode; } ;

/* Variables and functions */
 int XADC_CONF1_SEQ_CONTINUOUS ; 
 int XADC_CONF1_SEQ_SIMULTANEOUS ; 
 scalar_t__ XADC_EXTERNAL_MUX_DUAL ; 

__attribute__((used)) static int xadc_get_seq_mode(struct xadc *xadc, unsigned long scan_mode)
{
	unsigned int aux_scan_mode = scan_mode >> 16;

	if (xadc->external_mux_mode == XADC_EXTERNAL_MUX_DUAL)
		return XADC_CONF1_SEQ_SIMULTANEOUS;

	if ((aux_scan_mode & 0xff00) == 0 ||
		(aux_scan_mode & 0x00ff) == 0)
		return XADC_CONF1_SEQ_CONTINUOUS;

	return XADC_CONF1_SEQ_SIMULTANEOUS;
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
          unsigned long scan_mode = 100;
          int _len_xadc0 = 1;
          struct xadc * xadc = (struct xadc *) malloc(_len_xadc0*sizeof(struct xadc));
          for(int _i0 = 0; _i0 < _len_xadc0; _i0++) {
            xadc[_i0].external_mux_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xadc_get_seq_mode(xadc,scan_mode);
          printf("%d\n", benchRet); 
          free(xadc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long scan_mode = 10;
          int _len_xadc0 = 100;
          struct xadc * xadc = (struct xadc *) malloc(_len_xadc0*sizeof(struct xadc));
          for(int _i0 = 0; _i0 < _len_xadc0; _i0++) {
            xadc[_i0].external_mux_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xadc_get_seq_mode(xadc,scan_mode);
          printf("%d\n", benchRet); 
          free(xadc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
