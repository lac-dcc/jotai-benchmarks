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
struct sockaddr_in {int dummy; } ;
struct dst_entry {int dummy; } ;

/* Variables and functions */
 int ENETUNREACH ; 

__attribute__((used)) static int cnic_get_v4_route(struct sockaddr_in *dst_addr,
			     struct dst_entry **dst)
{
#if defined(CONFIG_INET)
	struct rtable *rt;

	rt = ip_route_output(&init_net, dst_addr->sin_addr.s_addr, 0, 0, 0);
	if (!IS_ERR(rt)) {
		*dst = &rt->dst;
		return 0;
	}
	return PTR_ERR(rt);
#else
	return -ENETUNREACH;
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
          int _len_dst_addr0 = 1;
          struct sockaddr_in * dst_addr = (struct sockaddr_in *) malloc(_len_dst_addr0*sizeof(struct sockaddr_in));
          for(int _i0 = 0; _i0 < _len_dst_addr0; _i0++) {
            dst_addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          struct dst_entry ** dst = (struct dst_entry **) malloc(_len_dst0*sizeof(struct dst_entry *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (struct dst_entry *) malloc(_len_dst1*sizeof(struct dst_entry));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = cnic_get_v4_route(dst_addr,dst);
          printf("%d\n", benchRet); 
          free(dst_addr);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
