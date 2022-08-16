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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct mlx5e_port_buffer {TYPE_1__* buffer; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ xoff; scalar_t__ xon; scalar_t__ lossy; } ;

/* Variables and functions */
 int ENOMEM ; 
 int MLX5E_BUFFER_CELL_SHIFT ; 
 int MLX5E_MAX_BUFFER ; 

__attribute__((used)) static int update_xoff_threshold(struct mlx5e_port_buffer *port_buffer,
				 u32 xoff, unsigned int max_mtu)
{
	int i;

	for (i = 0; i < MLX5E_MAX_BUFFER; i++) {
		if (port_buffer->buffer[i].lossy) {
			port_buffer->buffer[i].xoff = 0;
			port_buffer->buffer[i].xon  = 0;
			continue;
		}

		if (port_buffer->buffer[i].size <
		    (xoff + max_mtu + (1 << MLX5E_BUFFER_CELL_SHIFT)))
			return -ENOMEM;

		port_buffer->buffer[i].xoff = port_buffer->buffer[i].size - xoff;
		port_buffer->buffer[i].xon  =
			port_buffer->buffer[i].xoff - max_mtu;
	}

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
          long xoff = 100;
          unsigned int max_mtu = 100;
          int _len_port_buffer0 = 1;
          struct mlx5e_port_buffer * port_buffer = (struct mlx5e_port_buffer *) malloc(_len_port_buffer0*sizeof(struct mlx5e_port_buffer));
          for(int _i0 = 0; _i0 < _len_port_buffer0; _i0++) {
              int _len_port_buffer__i0__buffer0 = 1;
          port_buffer[_i0].buffer = (struct TYPE_2__ *) malloc(_len_port_buffer__i0__buffer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port_buffer__i0__buffer0; _j0++) {
            port_buffer[_i0].buffer->size = ((-2 * (next_i()%2)) + 1) * next_i();
        port_buffer[_i0].buffer->xoff = ((-2 * (next_i()%2)) + 1) * next_i();
        port_buffer[_i0].buffer->xon = ((-2 * (next_i()%2)) + 1) * next_i();
        port_buffer[_i0].buffer->lossy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = update_xoff_threshold(port_buffer,xoff,max_mtu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_port_buffer0; _aux++) {
          free(port_buffer[_aux].buffer);
          }
          free(port_buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
