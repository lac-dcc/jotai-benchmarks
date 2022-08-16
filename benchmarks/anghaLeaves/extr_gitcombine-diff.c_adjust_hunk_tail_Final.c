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
struct sline {unsigned long flag; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long adjust_hunk_tail(struct sline *sline,
				      unsigned long all_mask,
				      unsigned long hunk_begin,
				      unsigned long i)
{
	/* i points at the first uninteresting line.  If the last line
	 * of the hunk was interesting only because it has some
	 * deletion, then it is not all that interesting for the
	 * purpose of giving trailing context lines.  This is because
	 * we output '-' line and then unmodified sline[i-1] itself in
	 * that case which gives us one extra context line.
	 */
	if ((hunk_begin + 1 <= i) && !(sline[i-1].flag & all_mask))
		i--;
	return i;
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
          unsigned long all_mask = 100;
          unsigned long hunk_begin = 100;
          unsigned long i = 100;
          int _len_sline0 = 1;
          struct sline * sline = (struct sline *) malloc(_len_sline0*sizeof(struct sline));
          for(int _i0 = 0; _i0 < _len_sline0; _i0++) {
            sline[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = adjust_hunk_tail(sline,all_mask,hunk_begin,i);
          printf("%lu\n", benchRet); 
          free(sline);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long all_mask = 10;
          unsigned long hunk_begin = 10;
          unsigned long i = 10;
          int _len_sline0 = 100;
          struct sline * sline = (struct sline *) malloc(_len_sline0*sizeof(struct sline));
          for(int _i0 = 0; _i0 < _len_sline0; _i0++) {
            sline[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = adjust_hunk_tail(sline,all_mask,hunk_begin,i);
          printf("%lu\n", benchRet); 
          free(sline);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
