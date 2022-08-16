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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ceph_mdsmap {scalar_t__ m_num_laggy; int m_num_mds; TYPE_1__* m_info; scalar_t__ m_damaged; int /*<<< orphan*/  m_enabled; } ;
struct TYPE_2__ {scalar_t__ state; } ;

/* Variables and functions */
 scalar_t__ CEPH_MDS_STATE_ACTIVE ; 

bool ceph_mdsmap_is_cluster_available(struct ceph_mdsmap *m)
{
	int i, nr_active = 0;
	if (!m->m_enabled)
		return false;
	if (m->m_damaged)
		return false;
	if (m->m_num_laggy > 0)
		return false;
	for (i = 0; i < m->m_num_mds; i++) {
		if (m->m_info[i].state == CEPH_MDS_STATE_ACTIVE)
			nr_active++;
	}
	return nr_active > 0;
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
          struct ceph_mdsmap * m = (struct ceph_mdsmap *) malloc(_len_m0*sizeof(struct ceph_mdsmap));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].m_num_laggy = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_num_mds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__m_info0 = 1;
          m[_i0].m_info = (struct TYPE_2__ *) malloc(_len_m__i0__m_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_m__i0__m_info0; _j0++) {
            m[_i0].m_info->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        m[_i0].m_damaged = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].m_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ceph_mdsmap_is_cluster_available(m);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].m_info);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
