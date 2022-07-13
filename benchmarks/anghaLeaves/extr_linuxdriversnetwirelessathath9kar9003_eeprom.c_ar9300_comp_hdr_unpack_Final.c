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
typedef  unsigned long u8 ;

/* Variables and functions */

__attribute__((used)) static void ar9300_comp_hdr_unpack(u8 *best, int *code, int *reference,
				   int *length, int *major, int *minor)
{
	unsigned long value[4];

	value[0] = best[0];
	value[1] = best[1];
	value[2] = best[2];
	value[3] = best[3];
	*code = ((value[0] >> 5) & 0x0007);
	*reference = (value[0] & 0x001f) | ((value[1] >> 2) & 0x0020);
	*length = ((value[1] << 4) & 0x07f0) | ((value[2] >> 4) & 0x000f);
	*major = (value[2] & 0x000f);
	*minor = (value[3] & 0x00ff);
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
          int _len_best0 = 65025;
          unsigned long * best = (unsigned long *) malloc(_len_best0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best0; _i0++) {
            best[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 65025;
          int * code = (int *) malloc(_len_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reference0 = 65025;
          int * reference = (int *) malloc(_len_reference0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reference0; _i0++) {
            reference[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 65025;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_major0 = 65025;
          int * major = (int *) malloc(_len_major0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_major0; _i0++) {
            major[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_minor0 = 65025;
          int * minor = (int *) malloc(_len_minor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_minor0; _i0++) {
            minor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar9300_comp_hdr_unpack(best,code,reference,length,major,minor);
          free(best);
          free(code);
          free(reference);
          free(length);
          free(major);
          free(minor);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_best0 = 100;
          unsigned long * best = (unsigned long *) malloc(_len_best0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best0; _i0++) {
            best[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 100;
          int * code = (int *) malloc(_len_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reference0 = 100;
          int * reference = (int *) malloc(_len_reference0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reference0; _i0++) {
            reference[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 100;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_major0 = 100;
          int * major = (int *) malloc(_len_major0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_major0; _i0++) {
            major[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_minor0 = 100;
          int * minor = (int *) malloc(_len_minor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_minor0; _i0++) {
            minor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar9300_comp_hdr_unpack(best,code,reference,length,major,minor);
          free(best);
          free(code);
          free(reference);
          free(length);
          free(major);
          free(minor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
