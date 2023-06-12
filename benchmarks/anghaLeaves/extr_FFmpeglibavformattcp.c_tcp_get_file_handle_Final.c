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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef  TYPE_1__ URLContext ;
struct TYPE_5__ {int fd; } ;
typedef  TYPE_2__ TCPContext ;

/* Variables and functions */

__attribute__((used)) static int tcp_get_file_handle(URLContext *h)
{
    TCPContext *s = h->priv_data;
    return s->fd;
}

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
          int _len_h0 = 65025;
          struct TYPE_4__ * h = (struct TYPE_4__ *) malloc(_len_h0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__priv_data0 = 1;
          h[_i0].priv_data = (struct TYPE_5__ *) malloc(_len_h__i0__priv_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__priv_data0; _j0++) {
              h[_i0].priv_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = tcp_get_file_handle(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].priv_data);
          }
          free(h);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_h0 = 100;
          struct TYPE_4__ * h = (struct TYPE_4__ *) malloc(_len_h0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__priv_data0 = 1;
          h[_i0].priv_data = (struct TYPE_5__ *) malloc(_len_h__i0__priv_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__priv_data0; _j0++) {
              h[_i0].priv_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = tcp_get_file_handle(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].priv_data);
          }
          free(h);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_h0 = 1;
          struct TYPE_4__ * h = (struct TYPE_4__ *) malloc(_len_h0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__priv_data0 = 1;
          h[_i0].priv_data = (struct TYPE_5__ *) malloc(_len_h__i0__priv_data0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_h__i0__priv_data0; _j0++) {
              h[_i0].priv_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = tcp_get_file_handle(h);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].priv_data);
          }
          free(h);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
