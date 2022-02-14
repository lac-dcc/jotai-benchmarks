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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* mbuf_t ;
struct TYPE_4__ {void* ext_buf; } ;
struct TYPE_5__ {int m_flags; void* m_pktdat; void* m_dat; TYPE_1__ m_ext; } ;

/* Variables and functions */
 int M_EXT ; 
 int M_PKTHDR ; 

void *
mbuf_datastart(mbuf_t mbuf)
{
	if (mbuf->m_flags & M_EXT)
		return (mbuf->m_ext.ext_buf);
	if (mbuf->m_flags & M_PKTHDR)
		return (mbuf->m_pktdat);
	return (mbuf->m_dat);
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
          int _len_mbuf0 = 1;
          struct TYPE_5__ * mbuf = (struct TYPE_5__ *) malloc(_len_mbuf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
            mbuf->m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = mbuf_datastart(mbuf);
          printf("{{other_type}} %p\n", &benchRet); 
          free(mbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
