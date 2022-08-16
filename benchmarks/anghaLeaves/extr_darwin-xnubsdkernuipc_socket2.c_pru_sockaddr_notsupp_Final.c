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
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

int
pru_sockaddr_notsupp(struct socket *so, struct sockaddr **nam)
{
#pragma unused(so, nam)
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
          int _len_nam0 = 1;
          struct sockaddr ** nam = (struct sockaddr **) malloc(_len_nam0*sizeof(struct sockaddr *));
          for(int _i0 = 0; _i0 < _len_nam0; _i0++) {
            int _len_nam1 = 1;
            nam[_i0] = (struct sockaddr *) malloc(_len_nam1*sizeof(struct sockaddr));
            for(int _i1 = 0; _i1 < _len_nam1; _i1++) {
              nam[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = pru_sockaddr_notsupp(so,nam);
          printf("%d\n", benchRet); 
          free(so);
          for(int i1 = 0; i1 < _len_nam0; i1++) {
            int _len_nam1 = 1;
              free(nam[i1]);
          }
          free(nam);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
