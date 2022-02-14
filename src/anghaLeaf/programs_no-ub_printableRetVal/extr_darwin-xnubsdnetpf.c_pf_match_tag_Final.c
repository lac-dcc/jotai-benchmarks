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
struct pf_rule {int match_tag; scalar_t__ match_tag_not; } ;
struct pf_mtag {int pftag_tag; } ;

/* Variables and functions */

__attribute__((used)) static int
pf_match_tag(struct pf_rule *r, struct pf_mtag *pf_mtag,
    int *tag)
{
	if (*tag == -1)
		*tag = pf_mtag->pftag_tag;

	return ((!r->match_tag_not && r->match_tag == *tag) ||
	    (r->match_tag_not && r->match_tag != *tag));
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
          int _len_r0 = 1;
          struct pf_rule * r = (struct pf_rule *) malloc(_len_r0*sizeof(struct pf_rule));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r->match_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        r->match_tag_not = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf_mtag0 = 1;
          struct pf_mtag * pf_mtag = (struct pf_mtag *) malloc(_len_pf_mtag0*sizeof(struct pf_mtag));
          for(int _i0 = 0; _i0 < _len_pf_mtag0; _i0++) {
            pf_mtag->pftag_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tag0 = 65025;
          int * tag = (int *) malloc(_len_tag0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pf_match_tag(r,pf_mtag,tag);
          printf("%d\n", benchRet); 
          free(r);
          free(pf_mtag);
          free(tag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
