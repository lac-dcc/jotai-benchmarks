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
       0            big-arr-10x\n\
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
typedef  size_t uint32_t ;
struct link_packet {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int
get_bits(struct link_packet *packet, int offset, int width)
{
	uint32_t *data = (uint32_t *) packet;
	uint32_t index, shift, mask;

	index = offset / 32 + 1;
	shift = 32 - (offset & 31) - width;
	mask = width == 32 ? ~0 : (1 << width) - 1;

	return (data[index] >> shift) & mask;
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

    // big-arr-10x
    case 0:
    {
          int offset = 10;
          int width = 10;
          int _len_packet0 = 100;
          struct link_packet * packet = (struct link_packet *) malloc(_len_packet0*sizeof(struct link_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_bits(packet,offset,width);
          printf("%u\n", benchRet); 
          free(packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
