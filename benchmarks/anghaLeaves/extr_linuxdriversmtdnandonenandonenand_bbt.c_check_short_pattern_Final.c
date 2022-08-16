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
typedef  scalar_t__ uint8_t ;
struct nand_bbt_descr {int len; scalar_t__* pattern; } ;

/* Variables and functions */

__attribute__((used)) static int check_short_pattern(uint8_t *buf, int len, int paglen, struct nand_bbt_descr *td)
{
	int i;
	uint8_t *p = buf;

	/* Compare the pattern */
	for (i = 0; i < td->len; i++) {
		if (p[i] != td->pattern[i])
			return -1;
	}
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
          int len = 100;
          int paglen = 100;
          int _len_buf0 = 1;
          long * buf = (long *) malloc(_len_buf0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_td0 = 1;
          struct nand_bbt_descr * td = (struct nand_bbt_descr *) malloc(_len_td0*sizeof(struct nand_bbt_descr));
          for(int _i0 = 0; _i0 < _len_td0; _i0++) {
            td[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_td__i0__pattern0 = 1;
          td[_i0].pattern = (long *) malloc(_len_td__i0__pattern0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_td__i0__pattern0; _j0++) {
            td[_i0].pattern[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_short_pattern(buf,len,paglen,td);
          printf("%d\n", benchRet); 
          free(buf);
          for(int _aux = 0; _aux < _len_td0; _aux++) {
          free(td[_aux].pattern);
          }
          free(td);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
