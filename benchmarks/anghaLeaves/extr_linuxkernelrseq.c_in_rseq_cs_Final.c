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
struct rseq_cs {unsigned long start_ip; unsigned long post_commit_offset; } ;

/* Variables and functions */

__attribute__((used)) static bool in_rseq_cs(unsigned long ip, struct rseq_cs *rseq_cs)
{
	return ip - rseq_cs->start_ip < rseq_cs->post_commit_offset;
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
          unsigned long ip = 100;
          int _len_rseq_cs0 = 1;
          struct rseq_cs * rseq_cs = (struct rseq_cs *) malloc(_len_rseq_cs0*sizeof(struct rseq_cs));
          for(int _i0 = 0; _i0 < _len_rseq_cs0; _i0++) {
            rseq_cs[_i0].start_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        rseq_cs[_i0].post_commit_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = in_rseq_cs(ip,rseq_cs);
          printf("%d\n", benchRet); 
          free(rseq_cs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
