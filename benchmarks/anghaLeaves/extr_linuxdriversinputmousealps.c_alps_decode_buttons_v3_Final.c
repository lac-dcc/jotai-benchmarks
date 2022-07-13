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
struct alps_fields {int left; int right; int middle; int ts_left; int ts_right; int ts_middle; } ;

/* Variables and functions */

__attribute__((used)) static void alps_decode_buttons_v3(struct alps_fields *f, unsigned char *p)
{
	f->left = !!(p[3] & 0x01);
	f->right = !!(p[3] & 0x02);
	f->middle = !!(p[3] & 0x04);

	f->ts_left = !!(p[3] & 0x10);
	f->ts_right = !!(p[3] & 0x20);
	f->ts_middle = !!(p[3] & 0x40);
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
          int _len_f0 = 65025;
          struct alps_fields * f = (struct alps_fields *) malloc(_len_f0*sizeof(struct alps_fields));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].middle = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].ts_left = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].ts_right = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].ts_middle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          unsigned char * p = (unsigned char *) malloc(_len_p0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alps_decode_buttons_v3(f,p);
          free(f);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_f0 = 100;
          struct alps_fields * f = (struct alps_fields *) malloc(_len_f0*sizeof(struct alps_fields));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].middle = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].ts_left = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].ts_right = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].ts_middle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          unsigned char * p = (unsigned char *) malloc(_len_p0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alps_decode_buttons_v3(f,p);
          free(f);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
