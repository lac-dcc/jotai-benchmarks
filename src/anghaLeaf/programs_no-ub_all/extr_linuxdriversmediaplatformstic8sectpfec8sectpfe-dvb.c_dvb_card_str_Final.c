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

/* Variables and functions */
#define  STV0367_TDA18212_NIMA_1 133 
#define  STV0367_TDA18212_NIMA_2 132 
#define  STV0367_TDA18212_NIMB_1 131 
#define  STV0367_TDA18212_NIMB_2 130 
#define  STV0903_6110_LNB24_NIMA 129 
#define  STV0903_6110_LNB24_NIMB 128 

__attribute__((used)) static inline const char *dvb_card_str(unsigned int c)
{
	switch (c) {
	case STV0367_TDA18212_NIMA_1:	return "STV0367_TDA18212_NIMA_1";
	case STV0367_TDA18212_NIMA_2:	return "STV0367_TDA18212_NIMA_2";
	case STV0367_TDA18212_NIMB_1:	return "STV0367_TDA18212_NIMB_1";
	case STV0367_TDA18212_NIMB_2:	return "STV0367_TDA18212_NIMB_2";
	case STV0903_6110_LNB24_NIMA:	return "STV0903_6110_LNB24_NIMA";
	case STV0903_6110_LNB24_NIMB:	return "STV0903_6110_LNB24_NIMB";
	default:			return "unknown dvb frontend card";
	}
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
          unsigned int c = 255;
          const char * benchRet = dvb_card_str(c);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
