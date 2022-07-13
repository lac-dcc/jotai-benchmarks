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

/* Type definitions */
struct aio_context {int dummy; } ;
typedef  enum aio_type { ____Placeholder_aio_type } aio_type ;

/* Variables and functions */
 int ENOSYS ; 

__attribute__((used)) static int submit_aio_26(enum aio_type type, int io_fd, char *buf, int len,
			 unsigned long long offset, struct aio_context *aio)
{
	return -ENOSYS;
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
          enum aio_type type = 0;
          int io_fd = 100;
          int len = 100;
          unsigned long long offset = 100;
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aio0 = 1;
          struct aio_context * aio = (struct aio_context *) malloc(_len_aio0*sizeof(struct aio_context));
          for(int _i0 = 0; _i0 < _len_aio0; _i0++) {
            aio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = submit_aio_26(type,io_fd,buf,len,offset,aio);
          printf("%d\n", benchRet); 
          free(buf);
          free(aio);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum aio_type type = 0;
          int io_fd = 255;
          int len = 255;
          unsigned long long offset = 255;
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aio0 = 65025;
          struct aio_context * aio = (struct aio_context *) malloc(_len_aio0*sizeof(struct aio_context));
          for(int _i0 = 0; _i0 < _len_aio0; _i0++) {
            aio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = submit_aio_26(type,io_fd,buf,len,offset,aio);
          printf("%d\n", benchRet); 
          free(buf);
          free(aio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum aio_type type = 0;
          int io_fd = 10;
          int len = 10;
          unsigned long long offset = 10;
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aio0 = 100;
          struct aio_context * aio = (struct aio_context *) malloc(_len_aio0*sizeof(struct aio_context));
          for(int _i0 = 0; _i0 < _len_aio0; _i0++) {
            aio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = submit_aio_26(type,io_fd,buf,len,offset,aio);
          printf("%d\n", benchRet); 
          free(buf);
          free(aio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
