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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct sg_io_v4 {scalar_t__ protocol; scalar_t__ subprotocol; } ;

/* Variables and functions */
 scalar_t__ BSG_PROTOCOL_SCSI ; 
 scalar_t__ BSG_SUB_PROTOCOL_SCSI_CMD ; 
 int EINVAL ; 

__attribute__((used)) static int bsg_scsi_check_proto(struct sg_io_v4 *hdr)
{
	if (hdr->protocol != BSG_PROTOCOL_SCSI  ||
	    hdr->subprotocol != BSG_SUB_PROTOCOL_SCSI_CMD)
		return -EINVAL;
	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_hdr0 = 65025;
          struct sg_io_v4 * hdr = (struct sg_io_v4 *) malloc(_len_hdr0*sizeof(struct sg_io_v4));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              hdr[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          hdr[_i0].subprotocol = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bsg_scsi_check_proto(hdr);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_hdr0 = 100;
          struct sg_io_v4 * hdr = (struct sg_io_v4 *) malloc(_len_hdr0*sizeof(struct sg_io_v4));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              hdr[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          hdr[_i0].subprotocol = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bsg_scsi_check_proto(hdr);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_hdr0 = 1;
          struct sg_io_v4 * hdr = (struct sg_io_v4 *) malloc(_len_hdr0*sizeof(struct sg_io_v4));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              hdr[_i0].protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          hdr[_i0].subprotocol = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bsg_scsi_check_proto(hdr);
          printf("%d\n", benchRet); 
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
