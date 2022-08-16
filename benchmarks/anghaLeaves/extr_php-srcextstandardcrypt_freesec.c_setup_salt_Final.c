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
typedef  int uint32_t ;
struct php_crypt_extended_data {int old_salt; int saltbits; } ;

/* Variables and functions */

__attribute__((used)) static void
setup_salt(uint32_t salt, struct php_crypt_extended_data *data)
{
	uint32_t	obit, saltbit, saltbits;
	int	i;

	if (salt == data->old_salt)
		return;
	data->old_salt = salt;

	saltbits = 0;
	saltbit = 1;
	obit = 0x800000;
	for (i = 0; i < 24; i++) {
		if (salt & saltbit)
			saltbits |= obit;
		saltbit <<= 1;
		obit >>= 1;
	}
	data->saltbits = saltbits;
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
          int salt = 100;
          int _len_data0 = 1;
          struct php_crypt_extended_data * data = (struct php_crypt_extended_data *) malloc(_len_data0*sizeof(struct php_crypt_extended_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].old_salt = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].saltbits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_salt(salt,data);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
