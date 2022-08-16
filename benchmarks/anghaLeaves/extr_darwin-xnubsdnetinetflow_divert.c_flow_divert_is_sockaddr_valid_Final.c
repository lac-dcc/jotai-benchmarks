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
struct sockaddr {int sa_family; int sa_len; } ;
typedef  int /*<<< orphan*/  boolean_t ;

/* Variables and functions */
#define  AF_INET 128 
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static boolean_t
flow_divert_is_sockaddr_valid(struct sockaddr *addr)
{
	switch(addr->sa_family)
	{
		case AF_INET:
			if (addr->sa_len != sizeof(struct sockaddr_in)) {
				return FALSE;
			}
			break;
#if INET6
		case AF_INET6:
			if (addr->sa_len != sizeof(struct sockaddr_in6)) {
				return FALSE;
			}
			break;
#endif	/* INET6 */
		default:
			return FALSE;
	}
	return TRUE;
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
          int _len_addr0 = 1;
          struct sockaddr * addr = (struct sockaddr *) malloc(_len_addr0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].sa_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flow_divert_is_sockaddr_valid(addr);
          printf("%d\n", benchRet); 
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
