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
struct spi_nor {int dummy; } ;
struct fsl_qspi {int chip_base_addr; int nor_size; struct spi_nor* nor; } ;

/* Variables and functions */

__attribute__((used)) static void fsl_qspi_set_base_addr(struct fsl_qspi *q, struct spi_nor *nor)
{
	q->chip_base_addr = q->nor_size * (nor - q->nor);
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
          int _len_q0 = 1;
          struct fsl_qspi * q = (struct fsl_qspi *) malloc(_len_q0*sizeof(struct fsl_qspi));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].chip_base_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nor_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__nor0 = 1;
          q[_i0].nor = (struct spi_nor *) malloc(_len_q__i0__nor0*sizeof(struct spi_nor));
          for(int _j0 = 0; _j0 < _len_q__i0__nor0; _j0++) {
            q[_i0].nor->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_nor0 = 1;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
            nor[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fsl_qspi_set_base_addr(q,nor);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].nor);
          }
          free(q);
          free(nor);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_q0 = 65025;
          struct fsl_qspi * q = (struct fsl_qspi *) malloc(_len_q0*sizeof(struct fsl_qspi));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].chip_base_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nor_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__nor0 = 1;
          q[_i0].nor = (struct spi_nor *) malloc(_len_q__i0__nor0*sizeof(struct spi_nor));
          for(int _j0 = 0; _j0 < _len_q__i0__nor0; _j0++) {
            q[_i0].nor->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_nor0 = 65025;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
            nor[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fsl_qspi_set_base_addr(q,nor);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].nor);
          }
          free(q);
          free(nor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_q0 = 100;
          struct fsl_qspi * q = (struct fsl_qspi *) malloc(_len_q0*sizeof(struct fsl_qspi));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].chip_base_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nor_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__nor0 = 1;
          q[_i0].nor = (struct spi_nor *) malloc(_len_q__i0__nor0*sizeof(struct spi_nor));
          for(int _j0 = 0; _j0 < _len_q__i0__nor0; _j0++) {
            q[_i0].nor->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_nor0 = 100;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
            nor[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fsl_qspi_set_base_addr(q,nor);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].nor);
          }
          free(q);
          free(nor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
