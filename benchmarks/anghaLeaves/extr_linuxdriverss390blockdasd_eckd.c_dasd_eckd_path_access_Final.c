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
       0            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int identifier; } ;
struct dasd_gneq {TYPE_1__ flags; } ;

/* Variables and functions */

__attribute__((used)) static unsigned char dasd_eckd_path_access(void *conf_data, int conf_len)
{
	struct dasd_gneq *gneq;
	int i, count, found;

	count = conf_len / sizeof(*gneq);
	gneq = (struct dasd_gneq *)conf_data;
	found = 0;
	for (i = 0; i < count; ++i) {
		if (gneq->flags.identifier == 2) {
			found = 1;
			break;
		}
		gneq++;
	}
	if (found)
		return ((char *)gneq)[18] & 0x07;
	else
		return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int conf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * conf_data;
        
          unsigned char benchRet = dasd_eckd_path_access(conf_data,conf_len);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
