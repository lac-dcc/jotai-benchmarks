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
struct img_ir_scancode_req {unsigned int scancode; int /*<<< orphan*/  protocol; } ;

/* Variables and functions */
 int EINVAL ; 
 int IMG_IR_SCANCODE ; 
 int RC_PROTO_BIT_SONY12 ; 
 int RC_PROTO_BIT_SONY15 ; 
 int RC_PROTO_BIT_SONY20 ; 
 int /*<<< orphan*/  RC_PROTO_SONY12 ; 
 int /*<<< orphan*/  RC_PROTO_SONY15 ; 
 int /*<<< orphan*/  RC_PROTO_SONY20 ; 

__attribute__((used)) static int img_ir_sony_scancode(int len, u64 raw, u64 enabled_protocols,
				struct img_ir_scancode_req *request)
{
	unsigned int dev, subdev, func;

	switch (len) {
	case 12:
		if (!(enabled_protocols & RC_PROTO_BIT_SONY12))
			return -EINVAL;
		func   = raw & 0x7f;	/* first 7 bits */
		raw    >>= 7;
		dev    = raw & 0x1f;	/* next 5 bits */
		subdev = 0;
		request->protocol = RC_PROTO_SONY12;
		break;
	case 15:
		if (!(enabled_protocols & RC_PROTO_BIT_SONY15))
			return -EINVAL;
		func   = raw & 0x7f;	/* first 7 bits */
		raw    >>= 7;
		dev    = raw & 0xff;	/* next 8 bits */
		subdev = 0;
		request->protocol = RC_PROTO_SONY15;
		break;
	case 20:
		if (!(enabled_protocols & RC_PROTO_BIT_SONY20))
			return -EINVAL;
		func   = raw & 0x7f;	/* first 7 bits */
		raw    >>= 7;
		dev    = raw & 0x1f;	/* next 5 bits */
		raw    >>= 5;
		subdev = raw & 0xff;	/* next 8 bits */
		request->protocol = RC_PROTO_SONY20;
		break;
	default:
		return -EINVAL;
	}
	request->scancode = dev << 16 | subdev << 8 | func;
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
          int benchRet = img_ir_sony_scancode(len,raw,enabled_protocols,request);
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
