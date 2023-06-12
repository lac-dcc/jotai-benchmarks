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
       3            empty\n\
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
struct drm_dp_payload {scalar_t__ payload_state; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int drm_dp_destroy_payload_step2(struct drm_dp_mst_topology_mgr *mgr,
					int id,
					struct drm_dp_payload *payload)
{
	payload->payload_state = 0;
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

    // int-bounds
    case 0:
    {
          int id = 100;
        
          int _len_mgr0 = 1;
          struct drm_dp_mst_topology_mgr * mgr = (struct drm_dp_mst_topology_mgr *) malloc(_len_mgr0*sizeof(struct drm_dp_mst_topology_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
              mgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_payload0 = 1;
          struct drm_dp_payload * payload = (struct drm_dp_payload *) malloc(_len_payload0*sizeof(struct drm_dp_payload));
          for(int _i0 = 0; _i0 < _len_payload0; _i0++) {
              payload[_i0].payload_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = drm_dp_destroy_payload_step2(mgr,id,payload);
          printf("%d\n", benchRet); 
          free(mgr);
          free(payload);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
        
          int _len_mgr0 = 65025;
          struct drm_dp_mst_topology_mgr * mgr = (struct drm_dp_mst_topology_mgr *) malloc(_len_mgr0*sizeof(struct drm_dp_mst_topology_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
              mgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_payload0 = 65025;
          struct drm_dp_payload * payload = (struct drm_dp_payload *) malloc(_len_payload0*sizeof(struct drm_dp_payload));
          for(int _i0 = 0; _i0 < _len_payload0; _i0++) {
              payload[_i0].payload_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = drm_dp_destroy_payload_step2(mgr,id,payload);
          printf("%d\n", benchRet); 
          free(mgr);
          free(payload);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
        
          int _len_mgr0 = 100;
          struct drm_dp_mst_topology_mgr * mgr = (struct drm_dp_mst_topology_mgr *) malloc(_len_mgr0*sizeof(struct drm_dp_mst_topology_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
              mgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_payload0 = 100;
          struct drm_dp_payload * payload = (struct drm_dp_payload *) malloc(_len_payload0*sizeof(struct drm_dp_payload));
          for(int _i0 = 0; _i0 < _len_payload0; _i0++) {
              payload[_i0].payload_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = drm_dp_destroy_payload_step2(mgr,id,payload);
          printf("%d\n", benchRet); 
          free(mgr);
          free(payload);
        
        break;
    }
    // empty
    case 3:
    {
          int id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mgr0 = 1;
          struct drm_dp_mst_topology_mgr * mgr = (struct drm_dp_mst_topology_mgr *) malloc(_len_mgr0*sizeof(struct drm_dp_mst_topology_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
              mgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_payload0 = 1;
          struct drm_dp_payload * payload = (struct drm_dp_payload *) malloc(_len_payload0*sizeof(struct drm_dp_payload));
          for(int _i0 = 0; _i0 < _len_payload0; _i0++) {
              payload[_i0].payload_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = drm_dp_destroy_payload_step2(mgr,id,payload);
          printf("%d\n", benchRet); 
          free(mgr);
          free(payload);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
