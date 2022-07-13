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
       1            big-arr-10x\n\
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
typedef  void* u8 ;

/* Variables and functions */
 int /*<<< orphan*/  IUU_SET_LED ; 

__attribute__((used)) static void iuu_rgbf_fill_buffer(u8 *buf, u8 r1, u8 r2, u8 g1, u8 g2, u8 b1,
				 u8 b2, u8 freq)
{
	*buf++ = IUU_SET_LED;
	*buf++ = r1;
	*buf++ = r2;
	*buf++ = g1;
	*buf++ = g2;
	*buf++ = b1;
	*buf++ = b2;
	*buf = freq;
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
          int _len_buf0 = 65025;
          void ** buf = (void **) malloc(_len_buf0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
          }
          void * r1;
          void * r2;
          void * g1;
          void * g2;
          void * b1;
          void * b2;
          void * freq;
          iuu_rgbf_fill_buffer(buf,r1,r2,g1,g2,b1,b2,freq);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
            int _len_buf1 = 1;
              }
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_buf0 = 100;
          void ** buf = (void **) malloc(_len_buf0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
          }
          void * r1;
          void * r2;
          void * g1;
          void * g2;
          void * b1;
          void * b2;
          void * freq;
          iuu_rgbf_fill_buffer(buf,r1,r2,g1,g2,b1,b2,freq);
          for(int i1 = 0; i1 < _len_buf0; i1++) {
            int _len_buf1 = 1;
              }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
