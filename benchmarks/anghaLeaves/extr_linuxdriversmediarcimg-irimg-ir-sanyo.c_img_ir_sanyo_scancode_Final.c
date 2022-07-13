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
typedef  int u64 ;
struct img_ir_scancode_req {unsigned int scancode; int /*<<< orphan*/  protocol; } ;

/* Variables and functions */
 int EINVAL ; 
 int IMG_IR_REPEATCODE ; 
 int IMG_IR_SCANCODE ; 
 int /*<<< orphan*/  RC_PROTO_SANYO ; 

__attribute__((used)) static int img_ir_sanyo_scancode(int len, u64 raw, u64 enabled_protocols,
				 struct img_ir_scancode_req *request)
{
	unsigned int addr, addr_inv, data, data_inv;
	/* a repeat code has no data */
	if (!len)
		return IMG_IR_REPEATCODE;
	if (len != 42)
		return -EINVAL;
	addr     = (raw >>  0) & 0x1fff;
	addr_inv = (raw >> 13) & 0x1fff;
	data     = (raw >> 26) & 0xff;
	data_inv = (raw >> 34) & 0xff;
	/* Validate data */
	if ((data_inv ^ data) != 0xff)
		return -EINVAL;
	/* Validate address */
	if ((addr_inv ^ addr) != 0x1fff)
		return -EINVAL;

	/* Normal Sanyo */
	request->protocol = RC_PROTO_SANYO;
	request->scancode = addr << 8 | data;
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
        request[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = img_ir_sanyo_scancode(len,raw,enabled_protocols,request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int raw = 255;
          int enabled_protocols = 255;
          int _len_request0 = 65025;
          struct img_ir_scancode_req * request = (struct img_ir_scancode_req *) malloc(_len_request0*sizeof(struct img_ir_scancode_req));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
            request[_i0].scancode = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = img_ir_sanyo_scancode(len,raw,enabled_protocols,request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int raw = 10;
          int enabled_protocols = 10;
          int _len_request0 = 100;
          struct img_ir_scancode_req * request = (struct img_ir_scancode_req *) malloc(_len_request0*sizeof(struct img_ir_scancode_req));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
            request[_i0].scancode = ((-2 * (next_i()%2)) + 1) * next_i();
        request[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = img_ir_sanyo_scancode(len,raw,enabled_protocols,request);
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
