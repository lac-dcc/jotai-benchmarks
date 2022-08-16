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
struct key_match_data {int /*<<< orphan*/  cmp; int /*<<< orphan*/  lookup_type; } ;

/* Variables and functions */
 int /*<<< orphan*/  KEYRING_SEARCH_LOOKUP_ITERATE ; 
 int /*<<< orphan*/  dns_resolver_cmp ; 

__attribute__((used)) static int dns_resolver_match_preparse(struct key_match_data *match_data)
{
	match_data->lookup_type = KEYRING_SEARCH_LOOKUP_ITERATE;
	match_data->cmp = dns_resolver_cmp;
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
          int _len_match_data0 = 1;
          struct key_match_data * match_data = (struct key_match_data *) malloc(_len_match_data0*sizeof(struct key_match_data));
          for(int _i0 = 0; _i0 < _len_match_data0; _i0++) {
            match_data[_i0].cmp = ((-2 * (next_i()%2)) + 1) * next_i();
        match_data[_i0].lookup_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dns_resolver_match_preparse(match_data);
          printf("%d\n", benchRet); 
          free(match_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
