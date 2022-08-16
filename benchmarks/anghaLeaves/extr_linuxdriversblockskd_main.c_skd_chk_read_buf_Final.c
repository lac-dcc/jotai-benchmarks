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
struct skd_special_context {unsigned char* data_buf; } ;
struct skd_device {int dummy; } ;

/* Variables and functions */
 int WR_BUF_SIZE ; 

__attribute__((used)) static int skd_chk_read_buf(struct skd_device *skdev,
			    struct skd_special_context *skspcl)
{
	unsigned char *buf = skspcl->data_buf;
	int i;

	/* check for incrementing byte pattern */
	for (i = 0; i < WR_BUF_SIZE; i++)
		if (buf[i] != (i & 0xFF))
			return 1;

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
          int _len_skdev0 = 1;
          struct skd_device * skdev = (struct skd_device *) malloc(_len_skdev0*sizeof(struct skd_device));
          for(int _i0 = 0; _i0 < _len_skdev0; _i0++) {
            skdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skspcl0 = 1;
          struct skd_special_context * skspcl = (struct skd_special_context *) malloc(_len_skspcl0*sizeof(struct skd_special_context));
          for(int _i0 = 0; _i0 < _len_skspcl0; _i0++) {
              int _len_skspcl__i0__data_buf0 = 1;
          skspcl[_i0].data_buf = (unsigned char *) malloc(_len_skspcl__i0__data_buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_skspcl__i0__data_buf0; _j0++) {
            skspcl[_i0].data_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = skd_chk_read_buf(skdev,skspcl);
          printf("%d\n", benchRet); 
          free(skdev);
          for(int _aux = 0; _aux < _len_skspcl0; _aux++) {
          free(skspcl[_aux].data_buf);
          }
          free(skspcl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
