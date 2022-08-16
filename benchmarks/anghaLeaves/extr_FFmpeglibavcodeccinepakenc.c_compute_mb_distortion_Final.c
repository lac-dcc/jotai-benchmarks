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
typedef  int uint8_t ;
struct TYPE_3__ {scalar_t__ pix_fmt; } ;
typedef  TYPE_1__ CinepakEncContext ;

/* Variables and functions */
 scalar_t__ AV_PIX_FMT_RGB24 ; 
 int MB_SIZE ; 

__attribute__((used)) static int compute_mb_distortion(CinepakEncContext *s,
                                 uint8_t *a_data[4], int a_linesize[4],
                                 uint8_t *b_data[4], int b_linesize[4])
{
    int x, y, p, d, ret = 0;

    for (y = 0; y < MB_SIZE; y++)
        for (x = 0; x < MB_SIZE; x++) {
            d = a_data[0][x + y * a_linesize[0]] - b_data[0][x + y * b_linesize[0]];
            ret += d * d;
        }

    if (s->pix_fmt == AV_PIX_FMT_RGB24) {
        for (p = 1; p <= 2; p++) {
            for (y = 0; y < MB_SIZE / 2; y++)
                for (x = 0; x < MB_SIZE / 2; x++) {
                    d = a_data[p][x + y * a_linesize[p]] - b_data[p][x + y * b_linesize[p]];
                    ret += d * d;
                }
        }
    }

    return ret;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a_data0 = 4;
          int ** a_data = (int **) malloc(_len_a_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_a_data0; _i0++) {
            int _len_a_data1 = 1;
            a_data[_i0] = (int *) malloc(_len_a_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_a_data1; _i1++) {
              a_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_a_linesize0 = 4;
          int * a_linesize = (int *) malloc(_len_a_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a_linesize0; _i0++) {
            a_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b_data0 = 4;
          int ** b_data = (int **) malloc(_len_b_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_b_data0; _i0++) {
            int _len_b_data1 = 1;
            b_data[_i0] = (int *) malloc(_len_b_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_b_data1; _i1++) {
              b_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b_linesize0 = 4;
          int * b_linesize = (int *) malloc(_len_b_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b_linesize0; _i0++) {
            b_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_mb_distortion(s,a_data,a_linesize,b_data,b_linesize);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_a_data0; i1++) {
            int _len_a_data1 = 1;
              free(a_data[i1]);
          }
          free(a_data);
          free(a_linesize);
          for(int i1 = 0; i1 < _len_b_data0; i1++) {
            int _len_b_data1 = 1;
              free(b_data[i1]);
          }
          free(b_data);
          free(b_linesize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
