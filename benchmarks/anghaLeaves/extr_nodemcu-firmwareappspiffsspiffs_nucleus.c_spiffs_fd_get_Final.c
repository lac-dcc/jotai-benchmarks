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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int spiffs_file ;
struct TYPE_5__ {scalar_t__ file_nbr; } ;
typedef  TYPE_1__ spiffs_fd ;
struct TYPE_6__ {scalar_t__ fd_space; scalar_t__ fd_count; } ;
typedef  TYPE_2__ spiffs ;
typedef  int /*<<< orphan*/  s32_t ;
typedef  int s16_t ;

/* Variables and functions */
 int /*<<< orphan*/  SPIFFS_ERR_BAD_DESCRIPTOR ; 
 int /*<<< orphan*/  SPIFFS_ERR_FILE_CLOSED ; 
 int /*<<< orphan*/  SPIFFS_OK ; 

s32_t spiffs_fd_get(spiffs *fs, spiffs_file f, spiffs_fd **fd) {
  if (f <= 0 || f > (s16_t)fs->fd_count) {
    return SPIFFS_ERR_BAD_DESCRIPTOR;
  }
  spiffs_fd *fds = (spiffs_fd *)fs->fd_space;
  *fd = &fds[f-1];
  if ((*fd)->file_nbr == 0) {
    return SPIFFS_ERR_FILE_CLOSED;
  }
  return SPIFFS_OK;
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
          int f = 100;
          int _len_fs0 = 1;
          struct TYPE_6__ * fs = (struct TYPE_6__ *) malloc(_len_fs0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 1;
          struct TYPE_5__ ** fd = (struct TYPE_5__ **) malloc(_len_fd0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            int _len_fd1 = 1;
            fd[_i0] = (struct TYPE_5__ *) malloc(_len_fd1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_fd1; _i1++) {
              fd[_i0][_i1].file_nbr = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = spiffs_fd_get(fs,f,fd);
          printf("%d\n", benchRet); 
          free(fs);
          for(int i1 = 0; i1 < _len_fd0; i1++) {
            int _len_fd1 = 1;
              free(fd[i1]);
          }
          free(fd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
