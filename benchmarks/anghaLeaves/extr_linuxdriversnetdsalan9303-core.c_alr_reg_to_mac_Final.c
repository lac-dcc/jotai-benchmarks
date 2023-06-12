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
       3            empty\n\
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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void alr_reg_to_mac(u32 dat0, u32 dat1, u8 mac[6])
{
	mac[0] = (dat0 >>  0) & 0xff;
	mac[1] = (dat0 >>  8) & 0xff;
	mac[2] = (dat0 >> 16) & 0xff;
	mac[3] = (dat0 >> 24) & 0xff;
	mac[4] = (dat1 >>  0) & 0xff;
	mac[5] = (dat1 >>  8) & 0xff;
}

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
          int dat0 = 100;
        
          int dat1 = 100;
        
          int _len_mac0 = 6;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          alr_reg_to_mac(dat0,dat1,mac);
          free(mac);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dat0 = 255;
        
          int dat1 = 255;
        
          int _len_mac0 = 65025;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          alr_reg_to_mac(dat0,dat1,mac);
          free(mac);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dat0 = 10;
        
          int dat1 = 10;
        
          int _len_mac0 = 100;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          alr_reg_to_mac(dat0,dat1,mac);
          free(mac);
        
        break;
    }
    // empty
    case 3:
    {
          int dat0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dat1 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mac0 = 6;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          alr_reg_to_mac(dat0,dat1,mac);
          free(mac);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
