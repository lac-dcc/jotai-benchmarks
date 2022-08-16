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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int* rose_addr; } ;
typedef  TYPE_1__ rose_address ;

/* Variables and functions */

int rosecmpm(rose_address *addr1, rose_address *addr2, unsigned short mask)
{
	unsigned int i, j;

	if (mask > 10)
		return 1;

	for (i = 0; i < mask; i++) {
		j = i / 2;

		if ((i % 2) != 0) {
			if ((addr1->rose_addr[j] & 0x0F) != (addr2->rose_addr[j] & 0x0F))
				return 1;
		} else {
			if ((addr1->rose_addr[j] & 0xF0) != (addr2->rose_addr[j] & 0xF0))
				return 1;
		}
	}

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
          unsigned short mask = 100;
          int _len_addr10 = 1;
          struct TYPE_4__ * addr1 = (struct TYPE_4__ *) malloc(_len_addr10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_addr10; _i0++) {
              int _len_addr1__i0__rose_addr0 = 1;
          addr1[_i0].rose_addr = (int *) malloc(_len_addr1__i0__rose_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr1__i0__rose_addr0; _j0++) {
            addr1[_i0].rose_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_addr20 = 1;
          struct TYPE_4__ * addr2 = (struct TYPE_4__ *) malloc(_len_addr20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_addr20; _i0++) {
              int _len_addr2__i0__rose_addr0 = 1;
          addr2[_i0].rose_addr = (int *) malloc(_len_addr2__i0__rose_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_addr2__i0__rose_addr0; _j0++) {
            addr2[_i0].rose_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rosecmpm(addr1,addr2,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_addr10; _aux++) {
          free(addr1[_aux].rose_addr);
          }
          free(addr1);
          for(int _aux = 0; _aux < _len_addr20; _aux++) {
          free(addr2[_aux].rose_addr);
          }
          free(addr2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
