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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */

__attribute__((used)) static inline unsigned int
make_scp_header(unsigned int target_id, unsigned int source_id,
		unsigned int get_flag, unsigned int req,
		unsigned int device_flag, unsigned int resp_flag,
		unsigned int error_flag, unsigned int data_size)
{
	unsigned int header = 0;

	header = (data_size & 0x1f) << 27;
	header |= (error_flag & 0x01) << 26;
	header |= (resp_flag & 0x01) << 25;
	header |= (device_flag & 0x01) << 24;
	header |= (req & 0x7f) << 17;
	header |= (get_flag & 0x01) << 16;
	header |= (source_id & 0xff) << 8;
	header |= target_id & 0xff;

	return header;
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
          unsigned int target_id = 100;
          unsigned int source_id = 100;
          unsigned int get_flag = 100;
          unsigned int req = 100;
          unsigned int device_flag = 100;
          unsigned int resp_flag = 100;
          unsigned int error_flag = 100;
          unsigned int data_size = 100;
          unsigned int benchRet = make_scp_header(target_id,source_id,get_flag,req,device_flag,resp_flag,error_flag,data_size);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int target_id = 255;
          unsigned int source_id = 255;
          unsigned int get_flag = 255;
          unsigned int req = 255;
          unsigned int device_flag = 255;
          unsigned int resp_flag = 255;
          unsigned int error_flag = 255;
          unsigned int data_size = 255;
          unsigned int benchRet = make_scp_header(target_id,source_id,get_flag,req,device_flag,resp_flag,error_flag,data_size);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int target_id = 10;
          unsigned int source_id = 10;
          unsigned int get_flag = 10;
          unsigned int req = 10;
          unsigned int device_flag = 10;
          unsigned int resp_flag = 10;
          unsigned int error_flag = 10;
          unsigned int data_size = 10;
          unsigned int benchRet = make_scp_header(target_id,source_id,get_flag,req,device_flag,resp_flag,error_flag,data_size);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
