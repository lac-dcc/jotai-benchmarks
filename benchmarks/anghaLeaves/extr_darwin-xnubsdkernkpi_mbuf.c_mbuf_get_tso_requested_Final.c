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
typedef  int /*<<< orphan*/  u_int32_t ;
typedef  int /*<<< orphan*/  mbuf_tso_request_flags_t ;
typedef  TYPE_2__* mbuf_t ;
typedef  int /*<<< orphan*/  errno_t ;
struct TYPE_4__ {int /*<<< orphan*/  tso_segsz; int /*<<< orphan*/  csum_flags; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int M_PKTHDR ; 
 int /*<<< orphan*/  mbuf_valid_tso_request_flags ; 

errno_t
mbuf_get_tso_requested(
	mbuf_t mbuf,
	mbuf_tso_request_flags_t *request,
	u_int32_t *value)
{
	if (mbuf == NULL || (mbuf->m_flags & M_PKTHDR) == 0 ||
			request == NULL || value == NULL)
		return (EINVAL);

	*request = mbuf->m_pkthdr.csum_flags;
	*request &= mbuf_valid_tso_request_flags;
	if (*request && value != NULL)
		*value = mbuf->m_pkthdr.tso_segsz;

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
          int _len_mbuf0 = 1;
          struct TYPE_5__ * mbuf = (struct TYPE_5__ *) malloc(_len_mbuf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
            mbuf[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        mbuf[_i0].m_pkthdr.tso_segsz = ((-2 * (next_i()%2)) + 1) * next_i();
        mbuf[_i0].m_pkthdr.csum_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_request0 = 1;
          int * request = (int *) malloc(_len_request0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
            request[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbuf_get_tso_requested(mbuf,request,value);
          printf("%d\n", benchRet); 
          free(mbuf);
          free(request);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
