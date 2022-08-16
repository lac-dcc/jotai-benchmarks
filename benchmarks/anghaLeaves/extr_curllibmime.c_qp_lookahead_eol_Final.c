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
struct TYPE_3__ {size_t bufend; int* buf; scalar_t__ bufbeg; } ;
typedef  TYPE_1__ mime_encoder_state ;

/* Variables and functions */
 scalar_t__ QP_CR ; 
 scalar_t__ QP_LF ; 
 scalar_t__* qp_class ; 

__attribute__((used)) static int qp_lookahead_eol(mime_encoder_state *st, int ateof, size_t n)
{
  n += st->bufbeg;
  if(n >= st->bufend && ateof)
    return 1;
  if(n + 2 > st->bufend)
    return ateof? 0: -1;
  if(qp_class[st->buf[n] & 0xFF] == QP_CR &&
     qp_class[st->buf[n + 1] & 0xFF] == QP_LF)
    return 1;
  return 0;
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
          int ateof = 100;
          unsigned long n = 100;
          int _len_st0 = 1;
          struct TYPE_3__ * st = (struct TYPE_3__ *) malloc(_len_st0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].bufend = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__buf0 = 1;
          st[_i0].buf = (int *) malloc(_len_st__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_st__i0__buf0; _j0++) {
            st[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        st[_i0].bufbeg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qp_lookahead_eol(st,ateof,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].buf);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
