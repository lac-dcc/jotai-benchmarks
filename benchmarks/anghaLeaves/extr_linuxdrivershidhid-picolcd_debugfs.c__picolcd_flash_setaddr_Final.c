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
typedef  long u8 ;
struct picolcd_data {int addr_sz; } ;

/* Variables and functions */

__attribute__((used)) static int _picolcd_flash_setaddr(struct picolcd_data *data, u8 *buf, long off)
{
	buf[0] = off & 0xff;
	buf[1] = (off >> 8) & 0xff;
	if (data->addr_sz == 3)
		buf[2] = (off >> 16) & 0xff;
	return data->addr_sz == 2 ? 2 : 3;
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
          long off = 255;
        
          int _len_data0 = 65025;
          struct picolcd_data * data = (struct picolcd_data *) malloc(_len_data0*sizeof(struct picolcd_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              data[_i0].addr_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf0 = 65025;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _picolcd_flash_setaddr(data,buf,off);
          printf("%d\n", benchRet); 
          free(data);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long off = 10;
        
          int _len_data0 = 100;
          struct picolcd_data * data = (struct picolcd_data *) malloc(_len_data0*sizeof(struct picolcd_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              data[_i0].addr_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf0 = 100;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = _picolcd_flash_setaddr(data,buf,off);
          printf("%d\n", benchRet); 
          free(data);
          free(buf);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
