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
struct amdtp_stream {int flags; int syt_interval; int data_block_quadlets; } ;

/* Variables and functions */
 int CIP_JUMBO_PAYLOAD ; 
 int CIP_NO_HEADER ; 

unsigned int amdtp_stream_get_max_payload(struct amdtp_stream *s)
{
	unsigned int multiplier = 1;
	unsigned int header_size = 0;

	if (s->flags & CIP_JUMBO_PAYLOAD)
		multiplier = 5;
	if (!(s->flags & CIP_NO_HEADER))
		header_size = 8;

	return header_size +
		s->syt_interval * s->data_block_quadlets * 4 * multiplier;
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
          int _len_s0 = 1;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].syt_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].data_block_quadlets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = amdtp_stream_get_max_payload(s);
          printf("%u\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
