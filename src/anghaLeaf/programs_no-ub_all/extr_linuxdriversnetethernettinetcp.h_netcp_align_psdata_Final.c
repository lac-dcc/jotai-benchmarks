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
       0            big-arr\n\
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
struct netcp_packet {int psdata_len; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int netcp_align_psdata(struct netcp_packet *p_info,
				     unsigned int byte_align)
{
	int padding;

	switch (byte_align) {
	case 0:
		padding = -EINVAL;
		break;
	case 1:
	case 2:
	case 4:
		padding = 0;
		break;
	case 8:
		padding = (p_info->psdata_len << 2) % 8;
		break;
	case 16:
		padding = (p_info->psdata_len << 2) % 16;
		break;
	default:
		padding = (p_info->psdata_len << 2) % byte_align;
		break;
	}
	return padding;
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

    // big-arr
    case 0:
    {
          unsigned int byte_align = 255;
          int _len_p_info0 = 1;
          struct netcp_packet * p_info = (struct netcp_packet *) malloc(_len_p_info0*sizeof(struct netcp_packet));
          for(int _i0 = 0; _i0 < _len_p_info0; _i0++) {
            p_info->psdata_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = netcp_align_psdata(p_info,byte_align);
          printf("%d\n", benchRet); 
          free(p_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
