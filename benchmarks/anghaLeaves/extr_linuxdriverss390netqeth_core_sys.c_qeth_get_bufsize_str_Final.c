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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int in_buf_size; } ;
struct qeth_card {TYPE_1__ qdio; } ;

/* Variables and functions */

__attribute__((used)) static const char *qeth_get_bufsize_str(struct qeth_card *card)
{
	if (card->qdio.in_buf_size == 16384)
		return "16k";
	else if (card->qdio.in_buf_size == 24576)
		return "24k";
	else if (card->qdio.in_buf_size == 32768)
		return "32k";
	else if (card->qdio.in_buf_size == 40960)
		return "40k";
	else
		return "64k";
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
          int _len_card0 = 1;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].qdio.in_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = qeth_get_bufsize_str(card);
          printf("{{other_type}} %p\n", &benchRet); 
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].qdio.in_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = qeth_get_bufsize_str(card);
          printf("{{other_type}} %p\n", &benchRet); 
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].qdio.in_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = qeth_get_bufsize_str(card);
          printf("{{other_type}} %p\n", &benchRet); 
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
