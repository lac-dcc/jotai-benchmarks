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
struct fsg_lun {int /*<<< orphan*/  sense_data; } ;
struct fsg_dev {int* cmnd; struct fsg_lun* curlun; } ;
struct TYPE_2__ {int /*<<< orphan*/  removable; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  SS_INVALID_COMMAND ; 
 TYPE_1__ mod_data ; 

__attribute__((used)) static int do_start_stop(struct fsg_dev *fsg)
{
	struct fsg_lun	*curlun = fsg->curlun;
	int		loej, start;

	if (!mod_data.removable) {
		curlun->sense_data = SS_INVALID_COMMAND;
		return -EINVAL;
	}

	// int immed = fsg->cmnd[1] & 0x01;
	loej = fsg->cmnd[4] & 0x02;
	start = fsg->cmnd[4] & 0x01;

#ifdef CONFIG_USB_FILE_STORAGE_TEST
	if ((fsg->cmnd[1] & ~0x01) != 0 ||		// Mask away Immed
			(fsg->cmnd[4] & ~0x03) != 0) {	// Mask LoEj, Start
		curlun->sense_data = SS_INVALID_FIELD_IN_CDB;
		return -EINVAL;
	}

	if (!start) {

		/* Are we allowed to unload the media? */
		if (curlun->prevent_medium_removal) {
			LDBG(curlun, "unload attempt prevented\n");
			curlun->sense_data = SS_MEDIUM_REMOVAL_PREVENTED;
			return -EINVAL;
		}
		if (loej) {		// Simulate an unload/eject
			up_read(&fsg->filesem);
			down_write(&fsg->filesem);
			fsg_lun_close(curlun);
			up_write(&fsg->filesem);
			down_read(&fsg->filesem);
		}
	} else {

		/* Our emulation doesn't support mounting; the medium is
		 * available for use as soon as it is loaded. */
		if (!fsg_lun_is_open(curlun)) {
			curlun->sense_data = SS_MEDIUM_NOT_PRESENT;
			return -EINVAL;
		}
	}
#endif
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
          int _len_fsg0 = 1;
          struct fsg_dev * fsg = (struct fsg_dev *) malloc(_len_fsg0*sizeof(struct fsg_dev));
          for(int _i0 = 0; _i0 < _len_fsg0; _i0++) {
              int _len_fsg__i0__cmnd0 = 1;
          fsg[_i0].cmnd = (int *) malloc(_len_fsg__i0__cmnd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fsg__i0__cmnd0; _j0++) {
            fsg[_i0].cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fsg__i0__curlun0 = 1;
          fsg[_i0].curlun = (struct fsg_lun *) malloc(_len_fsg__i0__curlun0*sizeof(struct fsg_lun));
          for(int _j0 = 0; _j0 < _len_fsg__i0__curlun0; _j0++) {
            fsg[_i0].curlun->sense_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = do_start_stop(fsg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fsg0; _aux++) {
          free(fsg[_aux].cmnd);
          }
          for(int _aux = 0; _aux < _len_fsg0; _aux++) {
          free(fsg[_aux].curlun);
          }
          free(fsg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
