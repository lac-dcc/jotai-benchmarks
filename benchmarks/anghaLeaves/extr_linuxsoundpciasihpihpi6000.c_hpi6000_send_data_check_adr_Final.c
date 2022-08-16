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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */

__attribute__((used)) static short hpi6000_send_data_check_adr(u32 address, u32 length_in_dwords)
{
/*#define CHECKING       // comment this line in to enable checking */
#ifdef CHECKING
	if (address < (u32)MSG_ADDRESS)
		return 0;
	if (address > (u32)(QUEUE_START + QUEUE_SIZE))
		return 0;
	if ((address + (length_in_dwords << 2)) >
		(u32)(QUEUE_START + QUEUE_SIZE))
		return 0;
#else
	(void)address;
	(void)length_in_dwords;
	return 1;
#endif
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
          int address = 100;
          int length_in_dwords = 100;
          short benchRet = hpi6000_send_data_check_adr(address,length_in_dwords);
          printf("%hi\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int address = 255;
          int length_in_dwords = 255;
          short benchRet = hpi6000_send_data_check_adr(address,length_in_dwords);
          printf("%hi\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int address = 10;
          int length_in_dwords = 10;
          short benchRet = hpi6000_send_data_check_adr(address,length_in_dwords);
          printf("%hi\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
