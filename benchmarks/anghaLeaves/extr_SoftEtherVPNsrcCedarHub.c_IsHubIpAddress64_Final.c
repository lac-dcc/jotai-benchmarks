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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* Value; } ;
typedef  TYPE_1__ IPV6_ADDR ;

/* Variables and functions */

bool IsHubIpAddress64(IPV6_ADDR *addr)
{
	// Validate arguments
	if (addr == NULL)
	{
		return false;
	}

	if (addr->Value[0] == 0xfe && addr->Value[1] == 0x80 &&
		addr->Value[2] == 0 &&
		addr->Value[3] == 0 &&
		addr->Value[4] == 0 &&
		addr->Value[5] == 0 &&
		addr->Value[6] == 0 &&
		addr->Value[7] == 0 &&
		addr->Value[8] == 0x02 && addr->Value[9] == 0xae && 
		addr->Value[11] == 0xff && addr->Value[12] == 0xfe)
	{
		return true;
	}

	return false;
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
          int _len_addr0 = 1;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__Value0 = 1;
          addr[_i0].Value = (int *) malloc(_len_addr__i0__Value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr__i0__Value0; _j0++) {
            addr[_i0].Value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = IsHubIpAddress64(addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].Value);
          }
          free(addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_addr0 = 65025;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__Value0 = 1;
          addr[_i0].Value = (int *) malloc(_len_addr__i0__Value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr__i0__Value0; _j0++) {
            addr[_i0].Value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = IsHubIpAddress64(addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].Value);
          }
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_addr0 = 100;
          struct TYPE_3__ * addr = (struct TYPE_3__ *) malloc(_len_addr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              int _len_addr__i0__Value0 = 1;
          addr[_i0].Value = (int *) malloc(_len_addr__i0__Value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr__i0__Value0; _j0++) {
            addr[_i0].Value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = IsHubIpAddress64(addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_addr0; _aux++) {
          free(addr[_aux].Value);
          }
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
