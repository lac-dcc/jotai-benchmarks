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
typedef  int /*<<< orphan*/  uint ;
struct pkt_file {scalar_t__ buf_start; scalar_t__ cur_addr; scalar_t__ buf_len; } ;
typedef  scalar_t__ addr_t ;

/* Variables and functions */

__attribute__((used)) static uint remainder_len(struct pkt_file *pfile)
{
	return (uint)(pfile->buf_len - ((addr_t)(pfile->cur_addr) -
	       (addr_t)(pfile->buf_start)));
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
          int _len_pfile0 = 1;
          struct pkt_file * pfile = (struct pkt_file *) malloc(_len_pfile0*sizeof(struct pkt_file));
          for(int _i0 = 0; _i0 < _len_pfile0; _i0++) {
            pfile[_i0].buf_start = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].cur_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        pfile[_i0].buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = remainder_len(pfile);
          printf("%d\n", benchRet); 
          free(pfile);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
