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
struct TYPE_5__ {unsigned int offset; } ;
struct v4l2_buffer {unsigned int index; int flags; unsigned int length; TYPE_2__ m; int /*<<< orphan*/  memory; int /*<<< orphan*/  sequence; int /*<<< orphan*/  timestamp; int /*<<< orphan*/  field; int /*<<< orphan*/  bytesused; } ;
struct file {int dummy; } ;
struct TYPE_6__ {TYPE_1__* grab_buffer; } ;
struct TYPE_4__ {scalar_t__ state; int /*<<< orphan*/  sequence; int /*<<< orphan*/  timestamp; int /*<<< orphan*/  size; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ MEYE_BUF_DONE ; 
 scalar_t__ MEYE_BUF_USING ; 
 int V4L2_BUF_FLAG_DONE ; 
 int V4L2_BUF_FLAG_MAPPED ; 
 int V4L2_BUF_FLAG_QUEUED ; 
 int V4L2_BUF_FLAG_TIMESTAMP_MONOTONIC ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 
 int /*<<< orphan*/  V4L2_MEMORY_MMAP ; 
 unsigned int gbuffers ; 
 unsigned int gbufsize ; 
 TYPE_3__ meye ; 

__attribute__((used)) static int vidioc_querybuf(struct file *file, void *fh, struct v4l2_buffer *buf)
{
	unsigned int index = buf->index;

	if (index >= gbuffers)
		return -EINVAL;

	buf->bytesused = meye.grab_buffer[index].size;
	buf->flags = V4L2_BUF_FLAG_MAPPED | V4L2_BUF_FLAG_TIMESTAMP_MONOTONIC;

	if (meye.grab_buffer[index].state == MEYE_BUF_USING)
		buf->flags |= V4L2_BUF_FLAG_QUEUED;

	if (meye.grab_buffer[index].state == MEYE_BUF_DONE)
		buf->flags |= V4L2_BUF_FLAG_DONE;

	buf->field = V4L2_FIELD_NONE;
	buf->timestamp = meye.grab_buffer[index].timestamp;
	buf->sequence = meye.grab_buffer[index].sequence;
	buf->memory = V4L2_MEMORY_MMAP;
	buf->m.offset = index * gbufsize;
	buf->length = gbufsize;

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
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * fh;
          int _len_buf0 = 1;
          struct v4l2_buffer * buf = (struct v4l2_buffer *) malloc(_len_buf0*sizeof(struct v4l2_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].m.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].memory = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].sequence = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_querybuf(file,fh,buf);
          printf("%d\n", benchRet); 
          free(file);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * fh;
          int _len_buf0 = 65025;
          struct v4l2_buffer * buf = (struct v4l2_buffer *) malloc(_len_buf0*sizeof(struct v4l2_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].m.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].memory = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].sequence = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_querybuf(file,fh,buf);
          printf("%d\n", benchRet); 
          free(file);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * fh;
          int _len_buf0 = 100;
          struct v4l2_buffer * buf = (struct v4l2_buffer *) malloc(_len_buf0*sizeof(struct v4l2_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].m.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].memory = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].sequence = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_querybuf(file,fh,buf);
          printf("%d\n", benchRet); 
          free(file);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
