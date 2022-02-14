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
struct mce {int status; int mcgstatus; } ;

/* Variables and functions */
 int MCG_STATUS_RIPV ; 
 int MCI_STATUS_DEFERRED ; 
 int MCI_STATUS_PCC ; 
 int MCI_STATUS_UC ; 

__attribute__((used)) static const char *decode_error_status(struct mce *m)
{
	if (m->status & MCI_STATUS_UC) {
		if (m->status & MCI_STATUS_PCC)
			return "System Fatal error.";
		if (m->mcgstatus & MCG_STATUS_RIPV)
			return "Uncorrected, software restartable error.";
		return "Uncorrected, software containable error.";
	}

	if (m->status & MCI_STATUS_DEFERRED)
		return "Deferred error, no action required.";

	return "Corrected error, no action required.";
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
          int _len_m0 = 1;
          struct mce * m = (struct mce *) malloc(_len_m0*sizeof(struct mce));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m->status = ((-2 * (next_i()%2)) + 1) * next_i();
        m->mcgstatus = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = decode_error_status(m);
          printf("{{other_type}} %p\n", &benchRet); 
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
