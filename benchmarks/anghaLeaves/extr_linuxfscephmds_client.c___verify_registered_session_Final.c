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
struct ceph_mds_session {size_t s_mds; } ;
struct ceph_mds_client {size_t max_sessions; struct ceph_mds_session** sessions; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int __verify_registered_session(struct ceph_mds_client *mdsc,
				       struct ceph_mds_session *s)
{
	if (s->s_mds >= mdsc->max_sessions ||
	    mdsc->sessions[s->s_mds] != s)
		return -ENOENT;
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
          int _len_mdsc0 = 1;
          struct ceph_mds_client * mdsc = (struct ceph_mds_client *) malloc(_len_mdsc0*sizeof(struct ceph_mds_client));
          for(int _i0 = 0; _i0 < _len_mdsc0; _i0++) {
            mdsc[_i0].max_sessions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdsc__i0__sessions0 = 1;
          mdsc[_i0].sessions = (struct ceph_mds_session **) malloc(_len_mdsc__i0__sessions0*sizeof(struct ceph_mds_session *));
          for(int _j0 = 0; _j0 < _len_mdsc__i0__sessions0; _j0++) {
            int _len_mdsc__i0__sessions1 = 1;
            mdsc[_i0].sessions[_j0] = (struct ceph_mds_session *) malloc(_len_mdsc__i0__sessions1*sizeof(struct ceph_mds_session));
            for(int _j1 = 0; _j1 < _len_mdsc__i0__sessions1; _j1++) {
              mdsc[_i0].sessions[_j0]->s_mds = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_s0 = 1;
          struct ceph_mds_session * s = (struct ceph_mds_session *) malloc(_len_s0*sizeof(struct ceph_mds_session));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].s_mds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __verify_registered_session(mdsc,s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdsc0; _aux++) {
          free(*(mdsc[_aux].sessions));
        free(mdsc[_aux].sessions);
          }
          free(mdsc);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
