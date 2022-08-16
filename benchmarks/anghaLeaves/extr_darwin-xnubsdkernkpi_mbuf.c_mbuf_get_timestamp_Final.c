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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u_int64_t ;
typedef  TYPE_2__* mbuf_t ;
typedef  int /*<<< orphan*/  errno_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_4__ {int pkt_flags; scalar_t__ pkt_timestamp; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int /*<<< orphan*/  FALSE ; 
 int M_PKTHDR ; 
 int PKTF_TS_VALID ; 
 int /*<<< orphan*/  TRUE ; 

errno_t
mbuf_get_timestamp(mbuf_t m, u_int64_t *ts, boolean_t *valid)
{
	if (m == NULL || !(m->m_flags & M_PKTHDR) || ts == NULL)
		return (EINVAL);

	if ((m->m_pkthdr.pkt_flags & PKTF_TS_VALID) == 0) {
		if (valid != NULL)
			*valid = FALSE;
		*ts = 0;
	} else {
		if (valid != NULL)
			*valid = TRUE;
		*ts = m->m_pkthdr.pkt_timestamp;
	}
	return (0);
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
          int _len_m0 = 1;
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.pkt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_pkthdr.pkt_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ts0 = 1;
          long * ts = (long *) malloc(_len_ts0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valid0 = 1;
          int * valid = (int *) malloc(_len_valid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_valid0; _i0++) {
            valid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbuf_get_timestamp(m,ts,valid);
          printf("%d\n", benchRet); 
          free(m);
          free(ts);
          free(valid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
