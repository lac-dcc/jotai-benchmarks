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
struct qib_ctxtdata {TYPE_1__* dd; } ;
struct qib_base_info {int spi_runtime_flags; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int QIB_RUNTIME_NODMA_RTAIL ; 
 int QIB_RUNTIME_PCIE ; 
 int QIB_RUNTIME_SDMA ; 
 int QIB_RUNTIME_SPECIAL_TRIGGER ; 
 int QIB_USE_SPCL_TRIG ; 

__attribute__((used)) static int qib_7220_get_base_info(struct qib_ctxtdata *rcd,
				  struct qib_base_info *kinfo)
{
	kinfo->spi_runtime_flags |= QIB_RUNTIME_PCIE |
		QIB_RUNTIME_NODMA_RTAIL | QIB_RUNTIME_SDMA;

	if (rcd->dd->flags & QIB_USE_SPCL_TRIG)
		kinfo->spi_runtime_flags |= QIB_RUNTIME_SPECIAL_TRIGGER;

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
          int _len_rcd0 = 1;
          struct qib_ctxtdata * rcd = (struct qib_ctxtdata *) malloc(_len_rcd0*sizeof(struct qib_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
              int _len_rcd__i0__dd0 = 1;
          rcd[_i0].dd = (struct TYPE_2__ *) malloc(_len_rcd__i0__dd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rcd__i0__dd0; _j0++) {
            rcd[_i0].dd->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_kinfo0 = 1;
          struct qib_base_info * kinfo = (struct qib_base_info *) malloc(_len_kinfo0*sizeof(struct qib_base_info));
          for(int _i0 = 0; _i0 < _len_kinfo0; _i0++) {
            kinfo[_i0].spi_runtime_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qib_7220_get_base_info(rcd,kinfo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].dd);
          }
          free(rcd);
          free(kinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
