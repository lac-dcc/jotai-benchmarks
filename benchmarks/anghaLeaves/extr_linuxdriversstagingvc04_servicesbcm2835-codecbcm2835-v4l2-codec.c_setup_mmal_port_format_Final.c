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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_16__ {int /*<<< orphan*/  size; } ;
struct TYPE_13__ {int width; scalar_t__ y; scalar_t__ x; scalar_t__ height; } ;
struct TYPE_12__ {int den; scalar_t__ num; } ;
struct TYPE_14__ {int width; TYPE_5__ crop; TYPE_4__ frame_rate; scalar_t__ height; } ;
struct TYPE_15__ {TYPE_6__ video; } ;
struct TYPE_11__ {int /*<<< orphan*/  bitrate; int /*<<< orphan*/  encoding; } ;
struct vchiq_mmal_port {TYPE_8__ current_buffer; TYPE_7__ es; TYPE_3__ format; } ;
struct bcm2835_codec_q_data {int bytesperline; int crop_width; int /*<<< orphan*/  sizeimage; scalar_t__ crop_height; scalar_t__ height; TYPE_1__* fmt; } ;
struct bcm2835_codec_ctx {int /*<<< orphan*/  bitrate; TYPE_2__* dev; } ;
struct TYPE_10__ {scalar_t__ role; } ;
struct TYPE_9__ {int flags; int depth; int /*<<< orphan*/  mmal_fmt; } ;

/* Variables and functions */
 scalar_t__ DECODE ; 
 int V4L2_FMT_FLAG_COMPRESSED ; 

__attribute__((used)) static void setup_mmal_port_format(struct bcm2835_codec_ctx *ctx,
				   struct bcm2835_codec_q_data *q_data,
				   struct vchiq_mmal_port *port)
{
	port->format.encoding = q_data->fmt->mmal_fmt;

	if (!(q_data->fmt->flags & V4L2_FMT_FLAG_COMPRESSED)) {
		/* Raw image format - set width/height */
		port->es.video.width = (q_data->bytesperline << 3) /
						q_data->fmt->depth;
		port->es.video.height = q_data->height;
		port->es.video.crop.width = q_data->crop_width;
		port->es.video.crop.height = q_data->crop_height;
		port->es.video.frame_rate.num = 0;
		port->es.video.frame_rate.den = 1;
	} else {
		/* Compressed format - leave resolution as 0 for decode */
		if (ctx->dev->role == DECODE) {
			port->es.video.width = 0;
			port->es.video.height = 0;
			port->es.video.crop.width = 0;
			port->es.video.crop.height = 0;
		} else {
			port->es.video.width = q_data->crop_width;
			port->es.video.height = q_data->height;
			port->es.video.crop.width = q_data->crop_width;
			port->es.video.crop.height = q_data->crop_height;
			port->format.bitrate = ctx->bitrate;
		}
		port->es.video.frame_rate.num = 0;
		port->es.video.frame_rate.den = 1;
	}
	port->es.video.crop.x = 0;
	port->es.video.crop.y = 0;

	port->current_buffer.size = q_data->sizeimage;
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
          int _len_ctx0 = 1;
          struct bcm2835_codec_ctx * ctx = (struct bcm2835_codec_ctx *) malloc(_len_ctx0*sizeof(struct bcm2835_codec_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__dev0 = 1;
          ctx[_i0].dev = (struct TYPE_10__ *) malloc(_len_ctx__i0__dev0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__dev0; _j0++) {
            ctx[_i0].dev->role = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q_data0 = 1;
          struct bcm2835_codec_q_data * q_data = (struct bcm2835_codec_q_data *) malloc(_len_q_data0*sizeof(struct bcm2835_codec_q_data));
          for(int _i0 = 0; _i0 < _len_q_data0; _i0++) {
            q_data[_i0].bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].crop_width = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].crop_height = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q_data__i0__fmt0 = 1;
          q_data[_i0].fmt = (struct TYPE_9__ *) malloc(_len_q_data__i0__fmt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_q_data__i0__fmt0; _j0++) {
            q_data[_i0].fmt->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].fmt->depth = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].fmt->mmal_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port0 = 1;
          struct vchiq_mmal_port * port = (struct vchiq_mmal_port *) malloc(_len_port0*sizeof(struct vchiq_mmal_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].current_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.width = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.width = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.y = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.x = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.height = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.frame_rate.den = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.frame_rate.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.height = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].format.bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].format.encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_mmal_port_format(ctx,q_data,port);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].dev);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_q_data0; _aux++) {
          free(q_data[_aux].fmt);
          }
          free(q_data);
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct bcm2835_codec_ctx * ctx = (struct bcm2835_codec_ctx *) malloc(_len_ctx0*sizeof(struct bcm2835_codec_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__dev0 = 1;
          ctx[_i0].dev = (struct TYPE_10__ *) malloc(_len_ctx__i0__dev0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__dev0; _j0++) {
            ctx[_i0].dev->role = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q_data0 = 65025;
          struct bcm2835_codec_q_data * q_data = (struct bcm2835_codec_q_data *) malloc(_len_q_data0*sizeof(struct bcm2835_codec_q_data));
          for(int _i0 = 0; _i0 < _len_q_data0; _i0++) {
            q_data[_i0].bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].crop_width = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].crop_height = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q_data__i0__fmt0 = 1;
          q_data[_i0].fmt = (struct TYPE_9__ *) malloc(_len_q_data__i0__fmt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_q_data__i0__fmt0; _j0++) {
            q_data[_i0].fmt->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].fmt->depth = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].fmt->mmal_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port0 = 65025;
          struct vchiq_mmal_port * port = (struct vchiq_mmal_port *) malloc(_len_port0*sizeof(struct vchiq_mmal_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].current_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.width = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.width = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.y = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.x = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.height = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.frame_rate.den = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.frame_rate.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.height = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].format.bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].format.encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_mmal_port_format(ctx,q_data,port);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].dev);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_q_data0; _aux++) {
          free(q_data[_aux].fmt);
          }
          free(q_data);
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct bcm2835_codec_ctx * ctx = (struct bcm2835_codec_ctx *) malloc(_len_ctx0*sizeof(struct bcm2835_codec_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__dev0 = 1;
          ctx[_i0].dev = (struct TYPE_10__ *) malloc(_len_ctx__i0__dev0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__dev0; _j0++) {
            ctx[_i0].dev->role = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q_data0 = 100;
          struct bcm2835_codec_q_data * q_data = (struct bcm2835_codec_q_data *) malloc(_len_q_data0*sizeof(struct bcm2835_codec_q_data));
          for(int _i0 = 0; _i0 < _len_q_data0; _i0++) {
            q_data[_i0].bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].crop_width = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].crop_height = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q_data__i0__fmt0 = 1;
          q_data[_i0].fmt = (struct TYPE_9__ *) malloc(_len_q_data__i0__fmt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_q_data__i0__fmt0; _j0++) {
            q_data[_i0].fmt->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].fmt->depth = ((-2 * (next_i()%2)) + 1) * next_i();
        q_data[_i0].fmt->mmal_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port0 = 100;
          struct vchiq_mmal_port * port = (struct vchiq_mmal_port *) malloc(_len_port0*sizeof(struct vchiq_mmal_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].current_buffer.size = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.width = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.width = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.y = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.x = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.crop.height = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.frame_rate.den = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.frame_rate.num = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].es.video.height = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].format.bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].format.encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_mmal_port_format(ctx,q_data,port);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].dev);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_q_data0; _aux++) {
          free(q_data[_aux].fmt);
          }
          free(q_data);
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
