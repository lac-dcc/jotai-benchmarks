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
typedef  int u_int32_t ;
struct pf_poolhashkey {int* key32; } ;
struct pf_addr {int dummy; } ;
typedef  int sa_family_t ;

/* Variables and functions */

__attribute__((used)) static void
pf_hash(struct pf_addr *inaddr, struct pf_addr *hash,
    struct pf_poolhashkey *key, sa_family_t af)
{
	u_int32_t	a = 0x9e3779b9, b = 0x9e3779b9, c = key->key32[0];

	switch (af) {
#if INET
	case AF_INET:
		a += inaddr->addr32[0];
		b += key->key32[1];
		mix(a, b, c);
		hash->addr32[0] = c + key->key32[2];
		break;
#endif /* INET */
#if INET6
	case AF_INET6:
		a += inaddr->addr32[0];
		b += inaddr->addr32[2];
		mix(a, b, c);
		hash->addr32[0] = c;
		a += inaddr->addr32[1];
		b += inaddr->addr32[3];
		c += key->key32[1];
		mix(a, b, c);
		hash->addr32[1] = c;
		a += inaddr->addr32[2];
		b += inaddr->addr32[1];
		c += key->key32[2];
		mix(a, b, c);
		hash->addr32[2] = c;
		a += inaddr->addr32[3];
		b += inaddr->addr32[0];
		c += key->key32[3];
		mix(a, b, c);
		hash->addr32[3] = c;
		break;
#endif /* INET6 */
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
          int af = 100;
          int _len_inaddr0 = 1;
          struct pf_addr * inaddr = (struct pf_addr *) malloc(_len_inaddr0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_inaddr0; _i0++) {
            inaddr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hash0 = 1;
          struct pf_addr * hash = (struct pf_addr *) malloc(_len_hash0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          struct pf_poolhashkey * key = (struct pf_poolhashkey *) malloc(_len_key0*sizeof(struct pf_poolhashkey));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
              int _len_key__i0__key320 = 1;
          key[_i0].key32 = (int *) malloc(_len_key__i0__key320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__key320; _j0++) {
            key[_i0].key32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pf_hash(inaddr,hash,key,af);
          free(inaddr);
          free(hash);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].key32);
          }
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
