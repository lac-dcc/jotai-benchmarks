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
struct i2c_client {unsigned short addr; int flags; } ;

/* Variables and functions */
 unsigned short I2C_ADDR_OFFSET_SLAVE ; 
 unsigned short I2C_ADDR_OFFSET_TEN_BIT ; 
 int I2C_CLIENT_SLAVE ; 
 int I2C_CLIENT_TEN ; 

__attribute__((used)) static unsigned short i2c_encode_flags_to_addr(struct i2c_client *client)
{
	unsigned short addr = client->addr;

	/* For some client flags, add an arbitrary offset to avoid collisions */
	if (client->flags & I2C_CLIENT_TEN)
		addr |= I2C_ADDR_OFFSET_TEN_BIT;

	if (client->flags & I2C_CLIENT_SLAVE)
		addr |= I2C_ADDR_OFFSET_SLAVE;

	return addr;
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
          int _len_client0 = 1;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        client->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = i2c_encode_flags_to_addr(client);
          printf("{{other_type}} %p\n", &benchRet); 
          free(client);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
