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
       1            big-arr-10x\n\
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
struct st_h2o_evloop_socket_t {int /*<<< orphan*/  _flags; } ;
typedef  int /*<<< orphan*/  h2o_socket_t ;

/* Variables and functions */
 int /*<<< orphan*/  H2O_SOCKET_FLAG_DONT_READ ; 

void h2o_socket_dont_read(h2o_socket_t *_sock, int dont_read)
{
    struct st_h2o_evloop_socket_t *sock = (struct st_h2o_evloop_socket_t *)_sock;

    if (dont_read) {
        sock->_flags |= H2O_SOCKET_FLAG_DONT_READ;
    } else {
        sock->_flags &= ~H2O_SOCKET_FLAG_DONT_READ;
    }
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
          int dont_read = 100;
          int _len__sock0 = 1;
          int * _sock = (int *) malloc(_len__sock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__sock0; _i0++) {
            _sock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          h2o_socket_dont_read(_sock,dont_read);
          free(_sock);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int dont_read = 10;
          int _len__sock0 = 100;
          int * _sock = (int *) malloc(_len__sock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__sock0; _i0++) {
            _sock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          h2o_socket_dont_read(_sock,dont_read);
          free(_sock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
