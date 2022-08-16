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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */

void *
mac_mbuf_alloc(int len, int wait)
{
#if CONFIG_MACF_SOCKET_SUBSET
	struct m_tag *t;

	t = m_tag_alloc(KERNEL_MODULE_TAG_ID, KERNEL_TAG_TYPE_MAC_POLICY_LABEL,
			len, wait);
	if (t == NULL)
		return (NULL);

	return ((void *)(t + 1));
#else
#pragma unused(len, wait)
	return NULL;
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
          int len = 100;
          int wait = 100;
          void * benchRet = mac_mbuf_alloc(len,wait);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int wait = 255;
          void * benchRet = mac_mbuf_alloc(len,wait);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int wait = 10;
          void * benchRet = mac_mbuf_alloc(len,wait);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
