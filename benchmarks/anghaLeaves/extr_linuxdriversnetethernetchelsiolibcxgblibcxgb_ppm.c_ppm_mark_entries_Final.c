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
       0            big-arr-10x\n\
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
struct cxgbi_ppod_data {unsigned long caller_data; int npods; int color; } ;
struct cxgbi_ppm {struct cxgbi_ppod_data* ppod_data; } ;

/* Variables and functions */
 int PPOD_IDX_SHIFT ; 

__attribute__((used)) static void ppm_mark_entries(struct cxgbi_ppm *ppm, int i, int count,
			     unsigned long caller_data)
{
	struct cxgbi_ppod_data *pdata = ppm->ppod_data + i;

	pdata->caller_data = caller_data;
	pdata->npods = count;

	if (pdata->color == ((1 << PPOD_IDX_SHIFT) - 1))
		pdata->color = 0;
	else
		pdata->color++;
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

    // big-arr-10x
    case 0:
    {
          int i = 10;
          int count = 10;
          unsigned long caller_data = 10;
          int _len_ppm0 = 100;
          struct cxgbi_ppm * ppm = (struct cxgbi_ppm *) malloc(_len_ppm0*sizeof(struct cxgbi_ppm));
          for(int _i0 = 0; _i0 < _len_ppm0; _i0++) {
              int _len_ppm__i0__ppod_data0 = 1;
          ppm[_i0].ppod_data = (struct cxgbi_ppod_data *) malloc(_len_ppm__i0__ppod_data0*sizeof(struct cxgbi_ppod_data));
          for(int _j0 = 0; _j0 < _len_ppm__i0__ppod_data0; _j0++) {
            ppm[_i0].ppod_data->caller_data = ((-2 * (next_i()%2)) + 1) * next_i();
        ppm[_i0].ppod_data->npods = ((-2 * (next_i()%2)) + 1) * next_i();
        ppm[_i0].ppod_data->color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ppm_mark_entries(ppm,i,count,caller_data);
          for(int _aux = 0; _aux < _len_ppm0; _aux++) {
          free(ppm[_aux].ppod_data);
          }
          free(ppm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
