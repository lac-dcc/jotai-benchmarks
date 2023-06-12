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
typedef  int /*<<< orphan*/  u8 ;
typedef  scalar_t__ u64 ;
typedef  scalar_t__ u32 ;
struct esas2r_sg_context {scalar_t__ cur_offset; } ;

/* Variables and functions */
 int /*<<< orphan*/ * esas2r_buffered_ioctl ; 
 scalar_t__ esas2r_buffered_ioctl_addr ; 
 scalar_t__ esas2r_buffered_ioctl_size ; 

__attribute__((used)) static u32 get_physaddr_buffered_ioctl(struct esas2r_sg_context *sgc,
				       u64 *addr)
{
	int offset = (u8 *)sgc->cur_offset - esas2r_buffered_ioctl;

	(*addr) = esas2r_buffered_ioctl_addr + offset;
	return esas2r_buffered_ioctl_size - offset;
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
          int _len_sgc0 = 65025;
          struct esas2r_sg_context * sgc = (struct esas2r_sg_context *) malloc(_len_sgc0*sizeof(struct esas2r_sg_context));
          for(int _i0 = 0; _i0 < _len_sgc0; _i0++) {
              sgc[_i0].cur_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addr0 = 65025;
          long * addr = (long *) malloc(_len_addr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = get_physaddr_buffered_ioctl(sgc,addr);
          printf("%ld\n", benchRet); 
          free(sgc);
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_sgc0 = 100;
          struct esas2r_sg_context * sgc = (struct esas2r_sg_context *) malloc(_len_sgc0*sizeof(struct esas2r_sg_context));
          for(int _i0 = 0; _i0 < _len_sgc0; _i0++) {
              sgc[_i0].cur_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addr0 = 100;
          long * addr = (long *) malloc(_len_addr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = get_physaddr_buffered_ioctl(sgc,addr);
          printf("%ld\n", benchRet); 
          free(sgc);
          free(addr);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_sgc0 = 1;
          struct esas2r_sg_context * sgc = (struct esas2r_sg_context *) malloc(_len_sgc0*sizeof(struct esas2r_sg_context));
          for(int _i0 = 0; _i0 < _len_sgc0; _i0++) {
              sgc[_i0].cur_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addr0 = 1;
          long * addr = (long *) malloc(_len_addr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = get_physaddr_buffered_ioctl(sgc,addr);
          printf("%ld\n", benchRet); 
          free(sgc);
          free(addr);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
