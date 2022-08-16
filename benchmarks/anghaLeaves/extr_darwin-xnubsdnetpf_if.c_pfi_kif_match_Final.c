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
struct pfi_kif {int dummy; } ;

/* Variables and functions */

int
pfi_kif_match(struct pfi_kif *rule_kif, struct pfi_kif *packet_kif)
{

	if (rule_kif == NULL || rule_kif == packet_kif)
		return (1);

	return (0);
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
          int _len_rule_kif0 = 1;
          struct pfi_kif * rule_kif = (struct pfi_kif *) malloc(_len_rule_kif0*sizeof(struct pfi_kif));
          for(int _i0 = 0; _i0 < _len_rule_kif0; _i0++) {
            rule_kif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_packet_kif0 = 1;
          struct pfi_kif * packet_kif = (struct pfi_kif *) malloc(_len_packet_kif0*sizeof(struct pfi_kif));
          for(int _i0 = 0; _i0 < _len_packet_kif0; _i0++) {
            packet_kif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pfi_kif_match(rule_kif,packet_kif);
          printf("%d\n", benchRet); 
          free(rule_kif);
          free(packet_kif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
