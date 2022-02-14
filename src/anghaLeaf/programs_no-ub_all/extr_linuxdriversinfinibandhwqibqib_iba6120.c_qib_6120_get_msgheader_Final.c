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
typedef  int /*<<< orphan*/  u64 ;
typedef  int /*<<< orphan*/  u32 ;
struct qib_message_header {int dummy; } ;
struct qib_devdata {int dummy; } ;
typedef  int /*<<< orphan*/  __le32 ;

/* Variables and functions */

__attribute__((used)) static struct qib_message_header *
qib_6120_get_msgheader(struct qib_devdata *dd, __le32 *rhf_addr)
{
	return (struct qib_message_header *)
		&rhf_addr[sizeof(u64) / sizeof(u32)];
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
          int _len_dd0 = 1;
          struct qib_devdata * dd = (struct qib_devdata *) malloc(_len_dd0*sizeof(struct qib_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rhf_addr0 = 65025;
          int * rhf_addr = (int *) malloc(_len_rhf_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rhf_addr0; _i0++) {
            rhf_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qib_message_header * benchRet = qib_6120_get_msgheader(dd,rhf_addr);
          printf("{{struct}} %p\n", &benchRet); 
          free(dd);
          free(rhf_addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
