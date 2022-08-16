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
typedef  int /*<<< orphan*/  thread_t ;
struct proc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void 
do_background_socket(struct proc *p, thread_t thread)
{
#if SOCKETS
	struct filedesc                     *fdp;
	struct fileproc                     *fp;
	int                                 i, background;

	proc_fdlock(p);

	if (thread != THREAD_NULL)
		background = proc_get_effective_thread_policy(thread, TASK_POLICY_ALL_SOCKETS_BG);
	else
		background = proc_get_effective_task_policy(proc_task(p), TASK_POLICY_ALL_SOCKETS_BG);

	if (background) {
		/*
		 * For PRIO_DARWIN_PROCESS (thread is NULL), simply mark
		 * the sockets with the background flag.  There's nothing
		 * to do here for the PRIO_DARWIN_THREAD case.
		 */
		if (thread == THREAD_NULL) {
			fdp = p->p_fd;

			for (i = 0; i < fdp->fd_nfiles; i++) {
				fp = fdp->fd_ofiles[i];
				if (fp == NULL || (fdp->fd_ofileflags[i] & UF_RESERVED) != 0) {
					continue;
				}
				if (FILEGLOB_DTYPE(fp->f_fglob) == DTYPE_SOCKET) {
					struct socket *sockp = (struct socket *)fp->f_fglob->fg_data;
					socket_set_traffic_mgt_flags(sockp, TRAFFIC_MGT_SO_BACKGROUND);
					sockp->so_background_thread = NULL;
				}
#if NECP
				else if (FILEGLOB_DTYPE(fp->f_fglob) == DTYPE_NETPOLICY) {
					necp_set_client_as_background(p, fp, background);
				}
#endif /* NECP */
			}
		}
	} else {
		/* disable networking IO throttle.
		 * NOTE - It is a known limitation of the current design that we 
		 * could potentially clear TRAFFIC_MGT_SO_BACKGROUND bit for 
		 * sockets created by other threads within this process.  
		 */
		fdp = p->p_fd;
		for ( i = 0; i < fdp->fd_nfiles; i++ ) {
			struct socket       *sockp;

			fp = fdp->fd_ofiles[ i ];
			if (fp == NULL || (fdp->fd_ofileflags[ i ] & UF_RESERVED) != 0) {
				continue;
			}
			if (FILEGLOB_DTYPE(fp->f_fglob) == DTYPE_SOCKET) {
				sockp = (struct socket *)fp->f_fglob->fg_data;
				/* skip if only clearing this thread's sockets */
				if ((thread) && (sockp->so_background_thread != thread)) {
					continue;
				}
				socket_clear_traffic_mgt_flags(sockp, TRAFFIC_MGT_SO_BACKGROUND);
				sockp->so_background_thread = NULL;
			}
#if NECP
			else if (FILEGLOB_DTYPE(fp->f_fglob) == DTYPE_NETPOLICY) {
				necp_set_client_as_background(p, fp, background);
			}
#endif /* NECP */
		}
	}

	proc_fdunlock(p);
#else
#pragma unused(p, thread)
#endif
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
          int thread = 100;
          int _len_p0 = 1;
          struct proc * p = (struct proc *) malloc(_len_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          do_background_socket(p,thread);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int thread = 10;
          int _len_p0 = 100;
          struct proc * p = (struct proc *) malloc(_len_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          do_background_socket(p,thread);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
