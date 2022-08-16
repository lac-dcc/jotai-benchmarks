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
typedef  int /*<<< orphan*/  u32 ;
struct kern_ipc_perm {struct ipc_security_struct* security; } ;
struct ipc_security_struct {int /*<<< orphan*/  sid; } ;

/* Variables and functions */

__attribute__((used)) static void selinux_ipc_getsecid(struct kern_ipc_perm *ipcp, u32 *secid)
{
	struct ipc_security_struct *isec = ipcp->security;
	*secid = isec->sid;
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
          int _len_ipcp0 = 1;
          struct kern_ipc_perm * ipcp = (struct kern_ipc_perm *) malloc(_len_ipcp0*sizeof(struct kern_ipc_perm));
          for(int _i0 = 0; _i0 < _len_ipcp0; _i0++) {
              int _len_ipcp__i0__security0 = 1;
          ipcp[_i0].security = (struct ipc_security_struct *) malloc(_len_ipcp__i0__security0*sizeof(struct ipc_security_struct));
          for(int _j0 = 0; _j0 < _len_ipcp__i0__security0; _j0++) {
            ipcp[_i0].security->sid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_secid0 = 1;
          int * secid = (int *) malloc(_len_secid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secid0; _i0++) {
            secid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          selinux_ipc_getsecid(ipcp,secid);
          for(int _aux = 0; _aux < _len_ipcp0; _aux++) {
          free(ipcp[_aux].security);
          }
          free(ipcp);
          free(secid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
