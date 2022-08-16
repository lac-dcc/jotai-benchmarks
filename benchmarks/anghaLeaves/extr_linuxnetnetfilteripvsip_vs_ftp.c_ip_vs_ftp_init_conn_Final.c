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
struct ip_vs_conn {int /*<<< orphan*/  flags; } ;
struct ip_vs_app {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  IP_VS_CONN_F_NFCT ; 

__attribute__((used)) static int
ip_vs_ftp_init_conn(struct ip_vs_app *app, struct ip_vs_conn *cp)
{
	/* We use connection tracking for the command connection */
	cp->flags |= IP_VS_CONN_F_NFCT;
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
          int _len_app0 = 1;
          struct ip_vs_app * app = (struct ip_vs_app *) malloc(_len_app0*sizeof(struct ip_vs_app));
          for(int _i0 = 0; _i0 < _len_app0; _i0++) {
            app[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cp0 = 1;
          struct ip_vs_conn * cp = (struct ip_vs_conn *) malloc(_len_cp0*sizeof(struct ip_vs_conn));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ip_vs_ftp_init_conn(app,cp);
          printf("%d\n", benchRet); 
          free(app);
          free(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
