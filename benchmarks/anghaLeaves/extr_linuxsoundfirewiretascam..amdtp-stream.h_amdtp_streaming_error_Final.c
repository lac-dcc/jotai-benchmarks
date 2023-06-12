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
struct amdtp_stream {scalar_t__ packet_index; } ;

/* Variables and functions */

__attribute__((used)) static inline bool amdtp_streaming_error(struct amdtp_stream *s)
{
	return s->packet_index < 0;
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
          int _len_s0 = 65025;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].packet_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = amdtp_streaming_error(s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_s0 = 100;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].packet_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = amdtp_streaming_error(s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_s0 = 1;
          struct amdtp_stream * s = (struct amdtp_stream *) malloc(_len_s0*sizeof(struct amdtp_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].packet_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = amdtp_streaming_error(s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
