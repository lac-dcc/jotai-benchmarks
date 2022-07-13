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
struct isdnhdlc_vars {int dstpos; int crc; } ;

/* Variables and functions */
 int HDLC_CRC_ERROR ; 
 int HDLC_FRAMING_ERROR ; 

__attribute__((used)) static int
check_frame(struct isdnhdlc_vars *hdlc)
{
	int status;

	if (hdlc->dstpos < 2)	/* too small - framing error */
		status = -HDLC_FRAMING_ERROR;
	else if (hdlc->crc != 0xf0b8)	/* crc error */
		status = -HDLC_CRC_ERROR;
	else {
		/* remove CRC */
		hdlc->dstpos -= 2;
		/* good frame */
		status = hdlc->dstpos;
	}
	return status;
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
          int _len_hdlc0 = 1;
          struct isdnhdlc_vars * hdlc = (struct isdnhdlc_vars *) malloc(_len_hdlc0*sizeof(struct isdnhdlc_vars));
          for(int _i0 = 0; _i0 < _len_hdlc0; _i0++) {
            hdlc[_i0].dstpos = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlc[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_frame(hdlc);
          printf("%d\n", benchRet); 
          free(hdlc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdlc0 = 65025;
          struct isdnhdlc_vars * hdlc = (struct isdnhdlc_vars *) malloc(_len_hdlc0*sizeof(struct isdnhdlc_vars));
          for(int _i0 = 0; _i0 < _len_hdlc0; _i0++) {
            hdlc[_i0].dstpos = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlc[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_frame(hdlc);
          printf("%d\n", benchRet); 
          free(hdlc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdlc0 = 100;
          struct isdnhdlc_vars * hdlc = (struct isdnhdlc_vars *) malloc(_len_hdlc0*sizeof(struct isdnhdlc_vars));
          for(int _i0 = 0; _i0 < _len_hdlc0; _i0++) {
            hdlc[_i0].dstpos = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlc[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_frame(hdlc);
          printf("%d\n", benchRet); 
          free(hdlc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
