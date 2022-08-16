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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ type; scalar_t__ id; scalar_t__ off; } ;
struct TYPE_3__ {scalar_t__ off; } ;
struct nfp_insn_meta {TYPE_2__ ptr; TYPE_1__ insn; } ;
struct bpf_insn {scalar_t__ off; } ;
typedef  scalar_t__ s16 ;

/* Variables and functions */

__attribute__((used)) static bool
cross_mem_access(struct bpf_insn *ld, struct nfp_insn_meta *head_ld_meta,
		 struct nfp_insn_meta *head_st_meta)
{
	s16 head_ld_off, head_st_off, ld_off;

	/* Different pointer types does not overlap. */
	if (head_ld_meta->ptr.type != head_st_meta->ptr.type)
		return false;

	/* load and store are both PTR_TO_PACKET, check ID info.  */
	if (head_ld_meta->ptr.id != head_st_meta->ptr.id)
		return true;

	/* Canonicalize the offsets. Turn all of them against the original
	 * base register.
	 */
	head_ld_off = head_ld_meta->insn.off + head_ld_meta->ptr.off;
	head_st_off = head_st_meta->insn.off + head_st_meta->ptr.off;
	ld_off = ld->off + head_ld_meta->ptr.off;

	/* Ascending order cross. */
	if (ld_off > head_ld_off &&
	    head_ld_off < head_st_off && ld_off >= head_st_off)
		return true;

	/* Descending order cross. */
	if (ld_off < head_ld_off &&
	    head_ld_off > head_st_off && ld_off <= head_st_off)
		return true;

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

    // int-bounds
    case 0:
    {
          int _len_ld0 = 1;
          struct bpf_insn * ld = (struct bpf_insn *) malloc(_len_ld0*sizeof(struct bpf_insn));
          for(int _i0 = 0; _i0 < _len_ld0; _i0++) {
            ld[_i0].off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_head_ld_meta0 = 1;
          struct nfp_insn_meta * head_ld_meta = (struct nfp_insn_meta *) malloc(_len_head_ld_meta0*sizeof(struct nfp_insn_meta));
          for(int _i0 = 0; _i0 < _len_head_ld_meta0; _i0++) {
            head_ld_meta[_i0].ptr.type = ((-2 * (next_i()%2)) + 1) * next_i();
        head_ld_meta[_i0].ptr.id = ((-2 * (next_i()%2)) + 1) * next_i();
        head_ld_meta[_i0].ptr.off = ((-2 * (next_i()%2)) + 1) * next_i();
        head_ld_meta[_i0].insn.off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_head_st_meta0 = 1;
          struct nfp_insn_meta * head_st_meta = (struct nfp_insn_meta *) malloc(_len_head_st_meta0*sizeof(struct nfp_insn_meta));
          for(int _i0 = 0; _i0 < _len_head_st_meta0; _i0++) {
            head_st_meta[_i0].ptr.type = ((-2 * (next_i()%2)) + 1) * next_i();
        head_st_meta[_i0].ptr.id = ((-2 * (next_i()%2)) + 1) * next_i();
        head_st_meta[_i0].ptr.off = ((-2 * (next_i()%2)) + 1) * next_i();
        head_st_meta[_i0].insn.off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cross_mem_access(ld,head_ld_meta,head_st_meta);
          printf("%d\n", benchRet); 
          free(ld);
          free(head_ld_meta);
          free(head_st_meta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
