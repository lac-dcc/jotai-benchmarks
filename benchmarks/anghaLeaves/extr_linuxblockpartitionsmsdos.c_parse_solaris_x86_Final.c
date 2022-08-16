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
       1            big-arr-10x\n\
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
struct parsed_partitions {int dummy; } ;
typedef  int /*<<< orphan*/  sector_t ;

/* Variables and functions */

__attribute__((used)) static void parse_solaris_x86(struct parsed_partitions *state,
			      sector_t offset, sector_t size, int origin)
{
#ifdef CONFIG_SOLARIS_X86_PARTITION
	Sector sect;
	struct solaris_x86_vtoc *v;
	int i;
	short max_nparts;

	v = read_part_sector(state, offset + 1, &sect);
	if (!v)
		return;
	if (le32_to_cpu(v->v_sanity) != SOLARIS_X86_VTOC_SANE) {
		put_dev_sector(sect);
		return;
	}
	{
		char tmp[1 + BDEVNAME_SIZE + 10 + 11 + 1];

		snprintf(tmp, sizeof(tmp), " %s%d: <solaris:", state->name, origin);
		strlcat(state->pp_buf, tmp, PAGE_SIZE);
	}
	if (le32_to_cpu(v->v_version) != 1) {
		char tmp[64];

		snprintf(tmp, sizeof(tmp), "  cannot handle version %d vtoc>\n",
			 le32_to_cpu(v->v_version));
		strlcat(state->pp_buf, tmp, PAGE_SIZE);
		put_dev_sector(sect);
		return;
	}
	/* Ensure we can handle previous case of VTOC with 8 entries gracefully */
	max_nparts = le16_to_cpu(v->v_nparts) > 8 ? SOLARIS_X86_NUMSLICE : 8;
	for (i = 0; i < max_nparts && state->next < state->limit; i++) {
		struct solaris_x86_slice *s = &v->v_slice[i];
		char tmp[3 + 10 + 1 + 1];

		if (s->s_size == 0)
			continue;
		snprintf(tmp, sizeof(tmp), " [s%d]", i);
		strlcat(state->pp_buf, tmp, PAGE_SIZE);
		/* solaris partitions are relative to current MS-DOS
		 * one; must add the offset of the current partition */
		put_partition(state, state->next++,
				 le32_to_cpu(s->s_start)+offset,
				 le32_to_cpu(s->s_size));
	}
	put_dev_sector(sect);
	strlcat(state->pp_buf, " >\n", PAGE_SIZE);
#endif
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
          int offset = 100;
          int size = 100;
          int origin = 100;
          int _len_state0 = 1;
          struct parsed_partitions * state = (struct parsed_partitions *) malloc(_len_state0*sizeof(struct parsed_partitions));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_solaris_x86(state,offset,size,origin);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int offset = 10;
          int size = 10;
          int origin = 10;
          int _len_state0 = 100;
          struct parsed_partitions * state = (struct parsed_partitions *) malloc(_len_state0*sizeof(struct parsed_partitions));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parse_solaris_x86(state,offset,size,origin);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
