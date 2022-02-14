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
struct hists {int socket_filter; } ;
struct hist_entry {int socket; int filtered; } ;

/* Variables and functions */
 int HIST_FILTER__SOCKET ; 

__attribute__((used)) static bool hists__filter_entry_by_socket(struct hists *hists,
					  struct hist_entry *he)
{
	if ((hists->socket_filter > -1) &&
	    (he->socket != hists->socket_filter)) {
		he->filtered |= (1 << HIST_FILTER__SOCKET);
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

    // big-arr
    case 0:
    {
          int _len_hists0 = 1;
          struct hists * hists = (struct hists *) malloc(_len_hists0*sizeof(struct hists));
          for(int _i0 = 0; _i0 < _len_hists0; _i0++) {
            hists->socket_filter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_he0 = 1;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he->socket = ((-2 * (next_i()%2)) + 1) * next_i();
        he->filtered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hists__filter_entry_by_socket(hists,he);
          printf("%d\n", benchRet); 
          free(hists);
          free(he);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
