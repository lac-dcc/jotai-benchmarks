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
struct inpcb {int dummy; } ;

/* Variables and functions */

int
inp_update_policy(struct inpcb *inp)
{
#if CONFIG_PROC_UUID_POLICY
	struct socket *so = inp->inp_socket;
	uint32_t pflags = 0;
	int32_t ogencnt;
	int err = 0;

	if (!net_io_policy_uuid ||
	    so == NULL || inp->inp_state == INPCB_STATE_DEAD)
		return (0);

	/*
	 * Kernel-created sockets that aren't delegating other sockets
	 * are currently exempted from UUID policy checks.
	 */
	if (so->last_pid == 0 && !(so->so_flags & SOF_DELEGATED))
		return (0);

	ogencnt = so->so_policy_gencnt;
	err = proc_uuid_policy_lookup(((so->so_flags & SOF_DELEGATED) ?
	    so->e_uuid : so->last_uuid), &pflags, &so->so_policy_gencnt);

	/*
	 * Discard cached generation count if the entry is gone (ENOENT),
	 * so that we go thru the checks below.
	 */
	if (err == ENOENT && ogencnt != 0)
		so->so_policy_gencnt = 0;

	/*
	 * If the generation count has changed, inspect the policy flags
	 * and act accordingly.  If a policy flag was previously set and
	 * the UUID is no longer present in the table (ENOENT), treat it
	 * as if the flag has been cleared.
	 */
	if ((err == 0 || err == ENOENT) && ogencnt != so->so_policy_gencnt) {
		/* update cellular policy for this socket */
		if (err == 0 && (pflags & PROC_UUID_NO_CELLULAR)) {
			inp_update_cellular_policy(inp, TRUE);
		} else if (!(pflags & PROC_UUID_NO_CELLULAR)) {
			inp_update_cellular_policy(inp, FALSE);
		}
#if NECP
		/* update necp want app policy for this socket */
		if (err == 0 && (pflags & PROC_UUID_NECP_APP_POLICY)) {
			inp_update_necp_want_app_policy(inp, TRUE);
		} else if (!(pflags & PROC_UUID_NECP_APP_POLICY)) {
			inp_update_necp_want_app_policy(inp, FALSE);
		}
#endif /* NECP */
	}

	return ((err == ENOENT) ? 0 : err);
#else /* !CONFIG_PROC_UUID_POLICY */
#pragma unused(inp)
	return (0);
#endif /* !CONFIG_PROC_UUID_POLICY */
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
          int _len_inp0 = 1;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = inp_update_policy(inp);
          printf("%d\n", benchRet); 
          free(inp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_inp0 = 100;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = inp_update_policy(inp);
          printf("%d\n", benchRet); 
          free(inp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
