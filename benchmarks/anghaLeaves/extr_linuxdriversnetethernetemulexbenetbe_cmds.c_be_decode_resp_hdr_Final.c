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
typedef  unsigned long u32 ;
typedef  void be_cmd_resp_hdr ;

/* Variables and functions */

__attribute__((used)) static struct be_cmd_resp_hdr *be_decode_resp_hdr(u32 tag0, u32 tag1)
{
	unsigned long addr;

	addr = tag1;
	addr = ((addr << 16) << 16) | tag0;
	return (void *)addr;
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
          unsigned long tag0 = 100;
          unsigned long tag1 = 100;
          struct be_cmd_resp_hdr * benchRet = be_decode_resp_hdr(tag0,tag1);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long tag0 = 255;
          unsigned long tag1 = 255;
          struct be_cmd_resp_hdr * benchRet = be_decode_resp_hdr(tag0,tag1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long tag0 = 10;
          unsigned long tag1 = 10;
          struct be_cmd_resp_hdr * benchRet = be_decode_resp_hdr(tag0,tag1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
