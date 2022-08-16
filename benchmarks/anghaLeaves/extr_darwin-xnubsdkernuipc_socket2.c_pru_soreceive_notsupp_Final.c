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
struct uio {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

int
pru_soreceive_notsupp(struct socket *so, struct sockaddr **paddr,
    struct uio *uio, struct mbuf **mp0, struct mbuf **controlp, int *flagsp)
{
#pragma unused(so, paddr, uio, mp0, controlp, flagsp)
	return (EOPNOTSUPP);
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
          int _len_so0 = 1;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
            so[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_paddr0 = 1;
          struct sockaddr ** paddr = (struct sockaddr **) malloc(_len_paddr0*sizeof(struct sockaddr *));
          for(int _i0 = 0; _i0 < _len_paddr0; _i0++) {
            int _len_paddr1 = 1;
            paddr[_i0] = (struct sockaddr *) malloc(_len_paddr1*sizeof(struct sockaddr));
            for(int _i1 = 0; _i1 < _len_paddr1; _i1++) {
              paddr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_uio0 = 1;
          struct uio * uio = (struct uio *) malloc(_len_uio0*sizeof(struct uio));
          for(int _i0 = 0; _i0 < _len_uio0; _i0++) {
            uio[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mp00 = 1;
          struct mbuf ** mp0 = (struct mbuf **) malloc(_len_mp00*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_mp00; _i0++) {
            int _len_mp01 = 1;
            mp0[_i0] = (struct mbuf *) malloc(_len_mp01*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_mp01; _i1++) {
              mp0[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_controlp0 = 1;
          struct mbuf ** controlp = (struct mbuf **) malloc(_len_controlp0*sizeof(struct mbuf *));
          for(int _i0 = 0; _i0 < _len_controlp0; _i0++) {
            int _len_controlp1 = 1;
            controlp[_i0] = (struct mbuf *) malloc(_len_controlp1*sizeof(struct mbuf));
            for(int _i1 = 0; _i1 < _len_controlp1; _i1++) {
              controlp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_flagsp0 = 1;
          int * flagsp = (int *) malloc(_len_flagsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flagsp0; _i0++) {
            flagsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pru_soreceive_notsupp(so,paddr,uio,mp0,controlp,flagsp);
          printf("%d\n", benchRet); 
          free(so);
          for(int i1 = 0; i1 < _len_paddr0; i1++) {
            int _len_paddr1 = 1;
              free(paddr[i1]);
          }
          free(paddr);
          free(uio);
          for(int i1 = 0; i1 < _len_mp00; i1++) {
            int _len_mp01 = 1;
              free(mp0[i1]);
          }
          free(mp0);
          for(int i1 = 0; i1 < _len_controlp0; i1++) {
            int _len_controlp1 = 1;
              free(controlp[i1]);
          }
          free(controlp);
          free(flagsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
