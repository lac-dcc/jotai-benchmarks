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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int width; int height; scalar_t__** message; } ;
typedef  TYPE_1__ MATRIX_MESSAGE ;

/* Variables and functions */

void ClearMatrixMessage(MATRIX_MESSAGE *msg)
{
	int x, y;

	for(x = 0; x < msg->width; x++)
		for(y = 0; y < msg->height; y++)
			msg->message[x][y] = 0;
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
          int _len_msg0 = 1;
          struct TYPE_3__ * msg = (struct TYPE_3__ *) malloc(_len_msg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__message0 = 1;
          msg[_i0].message = (long **) malloc(_len_msg__i0__message0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_msg__i0__message0; _j0++) {
            int _len_msg__i0__message1 = 1;
            msg[_i0].message[_j0] = (long *) malloc(_len_msg__i0__message1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_msg__i0__message1; _j1++) {
              msg[_i0].message[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          ClearMatrixMessage(msg);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(*(msg[_aux].message));
        free(msg[_aux].message);
          }
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}