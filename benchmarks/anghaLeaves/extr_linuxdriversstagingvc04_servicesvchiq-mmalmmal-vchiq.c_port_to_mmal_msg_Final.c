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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_6__ {int /*<<< orphan*/  size; int /*<<< orphan*/  num; } ;
struct TYPE_5__ {int /*<<< orphan*/  size; int /*<<< orphan*/  num; } ;
struct TYPE_4__ {int /*<<< orphan*/  alignment; int /*<<< orphan*/  size; int /*<<< orphan*/  num; } ;
struct vchiq_mmal_port {TYPE_3__ current_buffer; TYPE_2__ recommended_buffer; TYPE_1__ minimum_buffer; int /*<<< orphan*/  enabled; int /*<<< orphan*/  index; int /*<<< orphan*/  type; } ;
struct mmal_port {scalar_t__ userdata; int /*<<< orphan*/  buffer_size; int /*<<< orphan*/  buffer_num; int /*<<< orphan*/  buffer_size_recommended; int /*<<< orphan*/  buffer_num_recommended; int /*<<< orphan*/  buffer_alignment_min; int /*<<< orphan*/  buffer_size_min; int /*<<< orphan*/  buffer_num_min; int /*<<< orphan*/  is_enabled; scalar_t__ index_all; int /*<<< orphan*/  index; int /*<<< orphan*/  type; } ;

/* Variables and functions */

__attribute__((used)) static void port_to_mmal_msg(struct vchiq_mmal_port *port, struct mmal_port *p)
{
	/* todo do readonly fields need setting at all? */
	p->type = port->type;
	p->index = port->index;
	p->index_all = 0;
	p->is_enabled = port->enabled;
	p->buffer_num_min = port->minimum_buffer.num;
	p->buffer_size_min = port->minimum_buffer.size;
	p->buffer_alignment_min = port->minimum_buffer.alignment;
	p->buffer_num_recommended = port->recommended_buffer.num;
	p->buffer_size_recommended = port->recommended_buffer.size;

	/* only three writable fields in a port */
	p->buffer_num = port->current_buffer.num;
	p->buffer_size = port->current_buffer.size;
	p->userdata = (u32)(unsigned long)port;
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
          int _len_port0 = 1;
          struct vchiq_mmal_port * port = (struct vchiq_mmal_port *) malloc(_len_port0*sizeof(struct vchiq_mmal_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].current_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].current_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].recommended_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].recommended_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct mmal_port * p = (struct mmal_port *) malloc(_len_p0*sizeof(struct mmal_port));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].userdata = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_alignment_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].is_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].index_all = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          port_to_mmal_msg(port,p);
          free(port);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port0 = 65025;
          struct vchiq_mmal_port * port = (struct vchiq_mmal_port *) malloc(_len_port0*sizeof(struct vchiq_mmal_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].current_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].current_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].recommended_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].recommended_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          struct mmal_port * p = (struct mmal_port *) malloc(_len_p0*sizeof(struct mmal_port));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].userdata = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_alignment_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].is_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].index_all = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          port_to_mmal_msg(port,p);
          free(port);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port0 = 100;
          struct vchiq_mmal_port * port = (struct vchiq_mmal_port *) malloc(_len_port0*sizeof(struct vchiq_mmal_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].current_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].current_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].recommended_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].recommended_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.alignment = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].minimum_buffer.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          struct mmal_port * p = (struct mmal_port *) malloc(_len_p0*sizeof(struct mmal_port));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].userdata = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_alignment_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_size_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buffer_num_min = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].is_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].index_all = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          port_to_mmal_msg(port,p);
          free(port);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
