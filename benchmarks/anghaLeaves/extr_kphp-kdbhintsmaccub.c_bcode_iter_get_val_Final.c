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
struct TYPE_3__ {int len; int k; unsigned char* ptr; } ;
typedef  TYPE_1__ bcode_iterator ;

/* Variables and functions */

int bcode_iter_get_val (bcode_iterator *it, int i) {
  if (i >= it->len) {
    return 0;
  }
  int pred = it->k * i;
  const unsigned char *tmp = it->ptr + (pred >> 3);
  pred &= 7;

  if (pred + it->k <= 8) {
    return ( ( *tmp ) >> pred ) & ( (1 << it->k) - 1 );
  }

  int res = ( ( *tmp++ ) >> pred );
  pred = it->k - (8 - pred);

  while (pred > 8) {
    res = (res << 8) + *tmp++;
    pred -= 8;
  }

  res = (res << pred) + ( *tmp & ( (1 << pred) - 1) );
  return res;
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
          int i = 100;
          int _len_it0 = 1;
          struct TYPE_3__ * it = (struct TYPE_3__ *) malloc(_len_it0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
            it[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        it[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_it__i0__ptr0 = 1;
          it[_i0].ptr = (unsigned char *) malloc(_len_it__i0__ptr0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_it__i0__ptr0; _j0++) {
            it[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bcode_iter_get_val(it,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_it0; _aux++) {
          free(it[_aux].ptr);
          }
          free(it);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
