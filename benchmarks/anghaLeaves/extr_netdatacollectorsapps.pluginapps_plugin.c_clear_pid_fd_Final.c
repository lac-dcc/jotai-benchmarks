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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct pid_fd {scalar_t__ cache_iterations_reset; scalar_t__ cache_iterations_counter; scalar_t__ inode; scalar_t__ link_hash; scalar_t__ fd; } ;

/* Variables and functions */

__attribute__((used)) static inline void clear_pid_fd(struct pid_fd *pfd) {
    pfd->fd = 0;

    #ifndef __FreeBSD__
    pfd->link_hash = 0;
    pfd->inode = 0;
    pfd->cache_iterations_counter = 0;
    pfd->cache_iterations_reset = 0;
#endif
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_pfd0 = 65025;
          struct pid_fd * pfd = (struct pid_fd *) malloc(_len_pfd0*sizeof(struct pid_fd));
          for(int _i0 = 0; _i0 < _len_pfd0; _i0++) {
              pfd[_i0].cache_iterations_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].cache_iterations_counter = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].link_hash = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          clear_pid_fd(pfd);
          free(pfd);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_pfd0 = 100;
          struct pid_fd * pfd = (struct pid_fd *) malloc(_len_pfd0*sizeof(struct pid_fd));
          for(int _i0 = 0; _i0 < _len_pfd0; _i0++) {
              pfd[_i0].cache_iterations_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].cache_iterations_counter = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].link_hash = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          clear_pid_fd(pfd);
          free(pfd);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_pfd0 = 1;
          struct pid_fd * pfd = (struct pid_fd *) malloc(_len_pfd0*sizeof(struct pid_fd));
          for(int _i0 = 0; _i0 < _len_pfd0; _i0++) {
              pfd[_i0].cache_iterations_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].cache_iterations_counter = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].link_hash = ((-2 * (next_i()%2)) + 1) * next_i();
          pfd[_i0].fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          clear_pid_fd(pfd);
          free(pfd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
