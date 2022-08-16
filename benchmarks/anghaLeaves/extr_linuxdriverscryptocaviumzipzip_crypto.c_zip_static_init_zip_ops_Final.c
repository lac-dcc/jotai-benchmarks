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
struct zip_operation {int speed; int ccode; int lzs_flag; int begin_file; int end_file; int csum; scalar_t__ compcode; scalar_t__ history_len; int /*<<< orphan*/  format; int /*<<< orphan*/  flush; } ;

/* Variables and functions */
 int /*<<< orphan*/  LZS_FORMAT ; 
 int /*<<< orphan*/  ZIP_FLUSH_FINISH ; 
 int /*<<< orphan*/  ZLIB_FORMAT ; 

__attribute__((used)) static void zip_static_init_zip_ops(struct zip_operation *zip_ops,
				    int lzs_flag)
{
	zip_ops->flush        = ZIP_FLUSH_FINISH;

	/* equivalent to level 6 of opensource zlib */
	zip_ops->speed          = 1;

	if (!lzs_flag) {
		zip_ops->ccode		= 0; /* Auto Huffman */
		zip_ops->lzs_flag	= 0;
		zip_ops->format		= ZLIB_FORMAT;
	} else {
		zip_ops->ccode		= 3; /* LZS Encoding */
		zip_ops->lzs_flag	= 1;
		zip_ops->format		= LZS_FORMAT;
	}
	zip_ops->begin_file   = 1;
	zip_ops->history_len  = 0;
	zip_ops->end_file     = 1;
	zip_ops->compcode     = 0;
	zip_ops->csum	      = 1; /* Adler checksum desired */
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
          int lzs_flag = 100;
          int _len_zip_ops0 = 1;
          struct zip_operation * zip_ops = (struct zip_operation *) malloc(_len_zip_ops0*sizeof(struct zip_operation));
          for(int _i0 = 0; _i0 < _len_zip_ops0; _i0++) {
            zip_ops[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].ccode = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].lzs_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].begin_file = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].end_file = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].csum = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].compcode = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].history_len = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
        zip_ops[_i0].flush = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zip_static_init_zip_ops(zip_ops,lzs_flag);
          free(zip_ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
