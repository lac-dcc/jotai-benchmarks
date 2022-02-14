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
       0            big-arr\n\
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
typedef  int u32 ;
struct i2c_client {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int max2175_refout_load_to_bits(struct i2c_client *client, u32 load,
				       u32 *bits)
{
	if (load <= 40)
		*bits = load / 10;
	else if (load >= 60 && load <= 70)
		*bits = load / 10 - 1;
	else
		return -EINVAL;

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

    // big-arr
    case 0:
    {
          int load = 255;
          int _len_client0 = 1;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bits0 = 65025;
          int * bits = (int *) malloc(_len_bits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = max2175_refout_load_to_bits(client,load,bits);
          printf("%d\n", benchRet); 
          free(client);
          free(bits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
