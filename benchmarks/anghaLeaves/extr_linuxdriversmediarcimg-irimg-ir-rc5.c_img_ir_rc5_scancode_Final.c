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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
 int /*<<< orphan*/  RC_PROTO_RC5 ; 

__attribute__((used)) static int img_ir_rc5_scancode(int len, u64 raw, u64 enabled_protocols,
				struct img_ir_scancode_req *request)
{
	unsigned int addr, cmd, tgl, start;

	/* Quirk in the decoder shifts everything by 2 to the left. */
	raw   >>= 2;

	start	=  (raw >> 13)	& 0x01;
	tgl	=  (raw >> 11)	& 0x01;
	addr	=  (raw >>  6)	& 0x1f;
	cmd	=   raw		& 0x3f;
	/*
	 * 12th bit is used to extend the command in extended RC5 and has
	 * no effect on standard RC5.
	 */
	cmd	+= ((raw >> 12) & 0x01) ? 0 : 0x40;

	if (!start)
		return -EINVAL;

	request->protocol = RC_PROTO_RC5;
	request->scancode = addr << 8 | cmd;
	request->toggle   = tgl;
	return IMG_IR_SCANCODE;
}

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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

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
        
          int benchRet = img_ir_rc5_scancode(len,raw,enabled_protocols,request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int len = 255;
        
          int raw = 255;
        
          int enabled_protocols = 255;
        
          int _len_request0 = 65025;
          struct img_ir_scancode_req * request = (struct img_ir_scancode_req *) malloc(_len_request0*sizeof(struct img_ir_scancode_req));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              request[_i0].scancode = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].toggle = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = img_ir_rc5_scancode(len,raw,enabled_protocols,request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int len = 10;
        
          int raw = 10;
        
          int enabled_protocols = 10;
        
          int _len_request0 = 100;
          struct img_ir_scancode_req * request = (struct img_ir_scancode_req *) malloc(_len_request0*sizeof(struct img_ir_scancode_req));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              request[_i0].scancode = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].toggle = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = img_ir_rc5_scancode(len,raw,enabled_protocols,request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 51
          // dynamic_instructions_O0 : 51
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 24
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int raw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int enabled_protocols = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_request0 = 1;
          struct img_ir_scancode_req * request = (struct img_ir_scancode_req *) malloc(_len_request0*sizeof(struct img_ir_scancode_req));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              request[_i0].scancode = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].toggle = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = img_ir_rc5_scancode(len,raw,enabled_protocols,request);
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
