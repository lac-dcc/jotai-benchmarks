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
       1            big-arr-10x\n\
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
struct udphdr {int dummy; } ;
struct ip_tunnel_encap {int flags; } ;
struct guehdr {int dummy; } ;

/* Variables and functions */
 size_t GUE_LEN_PRIV ; 
 scalar_t__ GUE_PLEN_REMCSUM ; 
 int TUNNEL_ENCAP_FLAG_REMCSUM ; 

size_t gue_encap_hlen(struct ip_tunnel_encap *e)
{
	size_t len;
	bool need_priv = false;

	len = sizeof(struct udphdr) + sizeof(struct guehdr);

	if (e->flags & TUNNEL_ENCAP_FLAG_REMCSUM) {
		len += GUE_PLEN_REMCSUM;
		need_priv = true;
	}

	len += need_priv ? GUE_LEN_PRIV : 0;

	return len;
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
          int _len_e0 = 1;
          struct ip_tunnel_encap * e = (struct ip_tunnel_encap *) malloc(_len_e0*sizeof(struct ip_tunnel_encap));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = gue_encap_hlen(e);
          printf("%lu\n", benchRet); 
          free(e);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_e0 = 100;
          struct ip_tunnel_encap * e = (struct ip_tunnel_encap *) malloc(_len_e0*sizeof(struct ip_tunnel_encap));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = gue_encap_hlen(e);
          printf("%lu\n", benchRet); 
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
