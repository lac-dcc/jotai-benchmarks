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
typedef  int /*<<< orphan*/  u8 ;
struct nfc_digital_dev {scalar_t__ poll_tech_count; struct digital_poll_tech* poll_techs; } ;
struct digital_poll_tech {int /*<<< orphan*/  poll_func; int /*<<< orphan*/  rf_tech; } ;
typedef  int /*<<< orphan*/  digital_poll_t ;

/* Variables and functions */
 scalar_t__ NFC_DIGITAL_POLL_MODE_COUNT_MAX ; 

__attribute__((used)) static void digital_add_poll_tech(struct nfc_digital_dev *ddev, u8 rf_tech,
				  digital_poll_t poll_func)
{
	struct digital_poll_tech *poll_tech;

	if (ddev->poll_tech_count >= NFC_DIGITAL_POLL_MODE_COUNT_MAX)
		return;

	poll_tech = &ddev->poll_techs[ddev->poll_tech_count++];

	poll_tech->rf_tech = rf_tech;
	poll_tech->poll_func = poll_func;
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
          int rf_tech = 100;
          int poll_func = 100;
          int _len_ddev0 = 1;
          struct nfc_digital_dev * ddev = (struct nfc_digital_dev *) malloc(_len_ddev0*sizeof(struct nfc_digital_dev));
          for(int _i0 = 0; _i0 < _len_ddev0; _i0++) {
            ddev[_i0].poll_tech_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ddev__i0__poll_techs0 = 1;
          ddev[_i0].poll_techs = (struct digital_poll_tech *) malloc(_len_ddev__i0__poll_techs0*sizeof(struct digital_poll_tech));
          for(int _j0 = 0; _j0 < _len_ddev__i0__poll_techs0; _j0++) {
            ddev[_i0].poll_techs->poll_func = ((-2 * (next_i()%2)) + 1) * next_i();
        ddev[_i0].poll_techs->rf_tech = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          digital_add_poll_tech(ddev,rf_tech,poll_func);
          for(int _aux = 0; _aux < _len_ddev0; _aux++) {
          free(ddev[_aux].poll_techs);
          }
          free(ddev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rf_tech = 255;
          int poll_func = 255;
          int _len_ddev0 = 65025;
          struct nfc_digital_dev * ddev = (struct nfc_digital_dev *) malloc(_len_ddev0*sizeof(struct nfc_digital_dev));
          for(int _i0 = 0; _i0 < _len_ddev0; _i0++) {
            ddev[_i0].poll_tech_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ddev__i0__poll_techs0 = 1;
          ddev[_i0].poll_techs = (struct digital_poll_tech *) malloc(_len_ddev__i0__poll_techs0*sizeof(struct digital_poll_tech));
          for(int _j0 = 0; _j0 < _len_ddev__i0__poll_techs0; _j0++) {
            ddev[_i0].poll_techs->poll_func = ((-2 * (next_i()%2)) + 1) * next_i();
        ddev[_i0].poll_techs->rf_tech = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          digital_add_poll_tech(ddev,rf_tech,poll_func);
          for(int _aux = 0; _aux < _len_ddev0; _aux++) {
          free(ddev[_aux].poll_techs);
          }
          free(ddev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rf_tech = 10;
          int poll_func = 10;
          int _len_ddev0 = 100;
          struct nfc_digital_dev * ddev = (struct nfc_digital_dev *) malloc(_len_ddev0*sizeof(struct nfc_digital_dev));
          for(int _i0 = 0; _i0 < _len_ddev0; _i0++) {
            ddev[_i0].poll_tech_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ddev__i0__poll_techs0 = 1;
          ddev[_i0].poll_techs = (struct digital_poll_tech *) malloc(_len_ddev__i0__poll_techs0*sizeof(struct digital_poll_tech));
          for(int _j0 = 0; _j0 < _len_ddev__i0__poll_techs0; _j0++) {
            ddev[_i0].poll_techs->poll_func = ((-2 * (next_i()%2)) + 1) * next_i();
        ddev[_i0].poll_techs->rf_tech = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          digital_add_poll_tech(ddev,rf_tech,poll_func);
          for(int _aux = 0; _aux < _len_ddev0; _aux++) {
          free(ddev[_aux].poll_techs);
          }
          free(ddev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
