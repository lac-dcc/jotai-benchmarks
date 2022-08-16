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
struct tmc_drvdata {scalar_t__ len; char* buf; } ;
typedef  scalar_t__ ssize_t ;
typedef  scalar_t__ loff_t ;

/* Variables and functions */

ssize_t tmc_etb_get_sysfs_trace(struct tmc_drvdata *drvdata,
				loff_t pos, size_t len, char **bufpp)
{
	ssize_t actual = len;

	/* Adjust the len to available size @pos */
	if (pos + actual > drvdata->len)
		actual = drvdata->len - pos;
	if (actual > 0)
		*bufpp = drvdata->buf + pos;
	return actual;
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
          long pos = 100;
          unsigned long len = 100;
          int _len_drvdata0 = 1;
          struct tmc_drvdata * drvdata = (struct tmc_drvdata *) malloc(_len_drvdata0*sizeof(struct tmc_drvdata));
          for(int _i0 = 0; _i0 < _len_drvdata0; _i0++) {
            drvdata[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drvdata__i0__buf0 = 1;
          drvdata[_i0].buf = (char *) malloc(_len_drvdata__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_drvdata__i0__buf0; _j0++) {
            drvdata[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bufpp0 = 1;
          char ** bufpp = (char **) malloc(_len_bufpp0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_bufpp0; _i0++) {
            int _len_bufpp1 = 1;
            bufpp[_i0] = (char *) malloc(_len_bufpp1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_bufpp1; _i1++) {
              bufpp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          long benchRet = tmc_etb_get_sysfs_trace(drvdata,pos,len,bufpp);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_drvdata0; _aux++) {
          free(drvdata[_aux].buf);
          }
          free(drvdata);
          for(int i1 = 0; i1 < _len_bufpp0; i1++) {
            int _len_bufpp1 = 1;
              free(bufpp[i1]);
          }
          free(bufpp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
