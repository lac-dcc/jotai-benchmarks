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
struct fsg_lun {int /*<<< orphan*/  sense_data; } ;
struct fsg_dev {struct fsg_lun* curlun; } ;
struct fsg_buffhd {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  SS_INVALID_COMMAND ; 

__attribute__((used)) static int do_mode_select(struct fsg_dev *fsg, struct fsg_buffhd *bh)
{
	struct fsg_lun	*curlun = fsg->curlun;

	/* We don't support MODE SELECT */
	curlun->sense_data = SS_INVALID_COMMAND;
	return -EINVAL;
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
          int _len_fsg0 = 1;
          struct fsg_dev * fsg = (struct fsg_dev *) malloc(_len_fsg0*sizeof(struct fsg_dev));
          for(int _i0 = 0; _i0 < _len_fsg0; _i0++) {
              int _len_fsg__i0__curlun0 = 1;
          fsg[_i0].curlun = (struct fsg_lun *) malloc(_len_fsg__i0__curlun0*sizeof(struct fsg_lun));
          for(int _j0 = 0; _j0 < _len_fsg__i0__curlun0; _j0++) {
            fsg[_i0].curlun->sense_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bh0 = 1;
          struct fsg_buffhd * bh = (struct fsg_buffhd *) malloc(_len_bh0*sizeof(struct fsg_buffhd));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = do_mode_select(fsg,bh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fsg0; _aux++) {
          free(fsg[_aux].curlun);
          }
          free(fsg);
          free(bh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
