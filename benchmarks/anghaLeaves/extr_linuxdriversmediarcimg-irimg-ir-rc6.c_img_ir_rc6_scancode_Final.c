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
typedef  int u64 ;
struct img_ir_scancode_req {unsigned int scancode; unsigned int toggle; int /*<<< orphan*/  protocol; } ;

/* Variables and functions */
 int EINVAL ; 
 int IMG_IR_SCANCODE ; 
 int /*<<< orphan*/  RC_PROTO_RC6_0 ; 

__attribute__((used)) static int img_ir_rc6_scancode(int len, u64 raw, u64 enabled_protocols,
				struct img_ir_scancode_req *request)
{
	unsigned int addr, cmd, mode, trl1, trl2;

	/*
	 * Due to a side effect of the decoder handling the double length
	 * Trailer bit, the header information is a bit scrambled, and the
	 * raw data is shifted incorrectly.
	 * This workaround effectively recovers the header bits.
	 *
	 * The Header field should look like this:
	 *
	 * StartBit ModeBit2 ModeBit1 ModeBit0 TrailerBit
	 *
	 * But what we get is:
	 *
	 * ModeBit2 ModeBit1 ModeBit0 TrailerBit1 TrailerBit2
	 *
	 * The start bit is not important to recover the scancode.
	 */

	raw	>>= 27;

	trl1	= (raw >>  17)	& 0x01;
	trl2	= (raw >>  16)	& 0x01;

	mode	= (raw >>  18)	& 0x07;
	addr	= (raw >>   8)	& 0xff;
	cmd	=  raw		& 0xff;

	/*
	 * Due to the above explained irregularity the trailer bits cannot
	 * have the same value.
	 */
	if (trl1 == trl2)
		return -EINVAL;

	/* Only mode 0 supported for now */
	if (mode)
		return -EINVAL;

	request->protocol = RC_PROTO_RC6_0;
	request->scancode = addr << 8 | cmd;
	request->toggle	  = trl2;
	return IMG_IR_SCANCODE;
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
          int len = 100;
          int raw = 100;
          int enabled_protocols = 100;
          int _len_request0 = 1;
          struct img_ir_scancode_req * request = (struct img_ir_scancode_req *) malloc(_len_request0*sizeof(struct img_ir_scancode_req));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
            request[_i0].scancode = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].toggle = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = img_ir_rc6_scancode(len,raw,enabled_protocols,request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
