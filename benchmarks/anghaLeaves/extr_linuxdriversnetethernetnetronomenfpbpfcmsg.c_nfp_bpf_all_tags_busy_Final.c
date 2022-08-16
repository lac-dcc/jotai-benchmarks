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
typedef  scalar_t__ u16 ;
struct nfp_app_bpf {scalar_t__ tag_alloc_next; scalar_t__ tag_alloc_last; } ;

/* Variables and functions */
 scalar_t__ NFP_BPF_TAG_ALLOC_SPAN ; 

__attribute__((used)) static bool nfp_bpf_all_tags_busy(struct nfp_app_bpf *bpf)
{
	u16 used_tags;

	used_tags = bpf->tag_alloc_next - bpf->tag_alloc_last;

	return used_tags > NFP_BPF_TAG_ALLOC_SPAN;
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
          int _len_bpf0 = 1;
          struct nfp_app_bpf * bpf = (struct nfp_app_bpf *) malloc(_len_bpf0*sizeof(struct nfp_app_bpf));
          for(int _i0 = 0; _i0 < _len_bpf0; _i0++) {
            bpf[_i0].tag_alloc_next = ((-2 * (next_i()%2)) + 1) * next_i();
        bpf[_i0].tag_alloc_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfp_bpf_all_tags_busy(bpf);
          printf("%d\n", benchRet); 
          free(bpf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
