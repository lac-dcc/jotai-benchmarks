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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
typedef  scalar_t__ u_int8_t ;
struct pf_addr {int dummy; } ;
typedef  int sa_family_t ;

/* Variables and functions */

int
pf_match_addr(u_int8_t n, struct pf_addr *a, struct pf_addr *m,
    struct pf_addr *b, sa_family_t af)
{
	int	match = 0;

	switch (af) {
#if INET
	case AF_INET:
		if ((a->addr32[0] & m->addr32[0]) ==
		    (b->addr32[0] & m->addr32[0]))
			match++;
		break;
#endif /* INET */
#if INET6
	case AF_INET6:
		if (((a->addr32[0] & m->addr32[0]) ==
		     (b->addr32[0] & m->addr32[0])) &&
		    ((a->addr32[1] & m->addr32[1]) ==
		     (b->addr32[1] & m->addr32[1])) &&
		    ((a->addr32[2] & m->addr32[2]) ==
		     (b->addr32[2] & m->addr32[2])) &&
		    ((a->addr32[3] & m->addr32[3]) ==
		     (b->addr32[3] & m->addr32[3])))
			match++;
		break;
#endif /* INET6 */
	}
	if (match) {
		if (n)
			return (0);
		else
			return (1);
	} else {
		if (n)
			return (1);
		else
			return (0);
	}
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
          long n = 100;
          int af = 100;
          int _len_a0 = 1;
          struct pf_addr * a = (struct pf_addr *) malloc(_len_a0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 1;
          struct pf_addr * m = (struct pf_addr *) malloc(_len_m0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct pf_addr * b = (struct pf_addr *) malloc(_len_b0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pf_match_addr(n,a,m,b,af);
          printf("%d\n", benchRet); 
          free(a);
          free(m);
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          long n = 255;
          int af = 255;
          int _len_a0 = 65025;
          struct pf_addr * a = (struct pf_addr *) malloc(_len_a0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 65025;
          struct pf_addr * m = (struct pf_addr *) malloc(_len_m0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 65025;
          struct pf_addr * b = (struct pf_addr *) malloc(_len_b0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pf_match_addr(n,a,m,b,af);
          printf("%d\n", benchRet); 
          free(a);
          free(m);
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long n = 10;
          int af = 10;
          int _len_a0 = 100;
          struct pf_addr * a = (struct pf_addr *) malloc(_len_a0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 100;
          struct pf_addr * m = (struct pf_addr *) malloc(_len_m0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 100;
          struct pf_addr * b = (struct pf_addr *) malloc(_len_b0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pf_match_addr(n,a,m,b,af);
          printf("%d\n", benchRet); 
          free(a);
          free(m);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
