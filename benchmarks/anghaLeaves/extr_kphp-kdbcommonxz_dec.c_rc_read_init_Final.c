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
struct xz_buf {scalar_t__ in_pos; scalar_t__ in_size; int* in; } ;
struct rc_dec {scalar_t__ init_bytes_left; int code; } ;

/* Variables and functions */

__attribute__((used)) static char rc_read_init(struct rc_dec *rc, struct xz_buf *b)
{
	while (rc->init_bytes_left > 0) {
		if (b->in_pos == b->in_size)
			return 0;

		rc->code = (rc->code << 8) + b->in[b->in_pos++];
		--rc->init_bytes_left;
	}

	return 1;
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
          int _len_rc0 = 1;
          struct rc_dec * rc = (struct rc_dec *) malloc(_len_rc0*sizeof(struct rc_dec));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].init_bytes_left = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct xz_buf * b = (struct xz_buf *) malloc(_len_b0*sizeof(struct xz_buf));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].in_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].in_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__in0 = 1;
          b[_i0].in = (int *) malloc(_len_b__i0__in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__in0; _j0++) {
            b[_i0].in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char benchRet = rc_read_init(rc,b);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(rc);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].in);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
