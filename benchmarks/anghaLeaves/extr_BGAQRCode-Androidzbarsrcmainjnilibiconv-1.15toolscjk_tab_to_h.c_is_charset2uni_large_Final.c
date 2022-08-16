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
struct TYPE_3__ {int rows; int cols; int** charset2uni; } ;
typedef  TYPE_1__ Encoding ;

/* Variables and functions */

__attribute__((used)) static bool is_charset2uni_large (Encoding* enc)
{
  int row, col;

  for (row = 0; row < enc->rows; row++)
    for (col = 0; col < enc->cols; col++)
      if (enc->charset2uni[row][col] >= 0x10000)
        return true;
  return false;
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
          int _len_enc0 = 1;
          struct TYPE_3__ * enc = (struct TYPE_3__ *) malloc(_len_enc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
            enc[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        enc[_i0].cols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc__i0__charset2uni0 = 1;
          enc[_i0].charset2uni = (int **) malloc(_len_enc__i0__charset2uni0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_enc__i0__charset2uni0; _j0++) {
            int _len_enc__i0__charset2uni1 = 1;
            enc[_i0].charset2uni[_j0] = (int *) malloc(_len_enc__i0__charset2uni1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_enc__i0__charset2uni1; _j1++) {
              enc[_i0].charset2uni[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = is_charset2uni_large(enc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_enc0; _aux++) {
          free(*(enc[_aux].charset2uni));
        free(enc[_aux].charset2uni);
          }
          free(enc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
