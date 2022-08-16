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
struct tifm_device_id {scalar_t__ type; } ;
struct tifm_dev {scalar_t__ type; } ;

/* Variables and functions */

__attribute__((used)) static int tifm_dev_match(struct tifm_dev *sock, struct tifm_device_id *id)
{
	if (sock->type == id->type)
		return 1;
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

    // int-bounds
    case 0:
    {
          int _len_sock0 = 1;
          struct tifm_dev * sock = (struct tifm_dev *) malloc(_len_sock0*sizeof(struct tifm_dev));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id0 = 1;
          struct tifm_device_id * id = (struct tifm_device_id *) malloc(_len_id0*sizeof(struct tifm_device_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tifm_dev_match(sock,id);
          printf("%d\n", benchRet); 
          free(sock);
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
