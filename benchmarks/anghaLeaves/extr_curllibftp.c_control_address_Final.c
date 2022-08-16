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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {scalar_t__ socksproxy; scalar_t__ tunnel_proxy; } ;
struct connectdata {char* ip_addr_str; TYPE_2__ host; TYPE_1__ bits; } ;

/* Variables and functions */

__attribute__((used)) static char *control_address(struct connectdata *conn)
{
  /* Returns the control connection IP address.
     If a proxy tunnel is used, returns the original host name instead, because
     the effective control connection address is the proxy address,
     not the ftp host. */
  if(conn->bits.tunnel_proxy || conn->bits.socksproxy)
    return conn->host.name;

  return conn->ip_addr_str;
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
          int _len_conn0 = 1;
          struct connectdata * conn = (struct connectdata *) malloc(_len_conn0*sizeof(struct connectdata));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              int _len_conn__i0__ip_addr_str0 = 1;
          conn[_i0].ip_addr_str = (char *) malloc(_len_conn__i0__ip_addr_str0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_conn__i0__ip_addr_str0; _j0++) {
            conn[_i0].ip_addr_str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conn__i0__host_name0 = 1;
          conn[_i0].host.name = (char *) malloc(_len_conn__i0__host_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_conn__i0__host_name0; _j0++) {
            conn[_i0].host.name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        conn[_i0].bits.socksproxy = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].bits.tunnel_proxy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = control_address(conn);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].ip_addr_str);
          }
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
