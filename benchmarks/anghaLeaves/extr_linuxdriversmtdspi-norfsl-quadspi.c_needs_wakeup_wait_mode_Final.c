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
struct fsl_qspi {TYPE_1__* devtype_data; } ;
struct TYPE_2__ {int driver_data; } ;

/* Variables and functions */
 int QUADSPI_QUIRK_TKT245618 ; 

__attribute__((used)) static inline int needs_wakeup_wait_mode(struct fsl_qspi *q)
{
	return q->devtype_data->driver_data & QUADSPI_QUIRK_TKT245618;
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
              int _len_q__i0__devtype_data0 = 1;
          q[_i0].devtype_data = (struct TYPE_2__ *) malloc(_len_q__i0__devtype_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__devtype_data0; _j0++) {
            q[_i0].devtype_data->driver_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = needs_wakeup_wait_mode(q);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].devtype_data);
          }
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
