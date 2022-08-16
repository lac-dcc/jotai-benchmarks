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
struct pipe_buffer {int /*<<< orphan*/ * ops; } ;

/* Variables and functions */
 int /*<<< orphan*/  default_pipe_buf_ops ; 

__attribute__((used)) static inline bool allocated(struct pipe_buffer *buf)
{
	return buf->ops == &default_pipe_buf_ops;
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
          int _len_buf0 = 1;
          struct pipe_buffer * buf = (struct pipe_buffer *) malloc(_len_buf0*sizeof(struct pipe_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__ops0 = 1;
          buf[_i0].ops = (int *) malloc(_len_buf__i0__ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buf__i0__ops0; _j0++) {
            buf[_i0].ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = allocated(buf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].ops);
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
