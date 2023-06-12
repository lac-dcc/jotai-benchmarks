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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int spiffs_file ;
struct TYPE_4__ {scalar_t__ file_nbr; } ;
typedef  TYPE_1__ spiffs_fd ;
struct TYPE_5__ {scalar_t__ fd_space; scalar_t__ fd_count; } ;
typedef  TYPE_2__ spiffs ;
typedef  int /*<<< orphan*/  s32_t ;
typedef  int s16_t ;

/* Variables and functions */
 int /*<<< orphan*/  SPIFFS_ERR_BAD_DESCRIPTOR ; 
 int /*<<< orphan*/  SPIFFS_ERR_FILE_CLOSED ; 
 int /*<<< orphan*/  SPIFFS_OK ; 

s32_t spiffs_fd_return(spiffs *fs, spiffs_file f) {
  if (f <= 0 || f > (s16_t)fs->fd_count) {
    return SPIFFS_ERR_BAD_DESCRIPTOR;
  }
  spiffs_fd *fds = (spiffs_fd *)fs->fd_space;
  spiffs_fd *fd = &fds[f-1];
  if (fd->file_nbr == 0) {
    return SPIFFS_ERR_FILE_CLOSED;
  }
  fd->file_nbr = 0;
#if SPIFFS_IX_MAP
  fd->ix_map = 0;
#endif
  return SPIFFS_OK;
}

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
          struct TYPE_5__ * fs = (struct TYPE_5__ *) malloc(_len_fs0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
          fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = spiffs_fd_return(fs,f);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int f = 255;
        
          int _len_fs0 = 65025;
          struct TYPE_5__ * fs = (struct TYPE_5__ *) malloc(_len_fs0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
          fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = spiffs_fd_return(fs,f);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int f = 10;
        
          int _len_fs0 = 100;
          struct TYPE_5__ * fs = (struct TYPE_5__ *) malloc(_len_fs0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
          fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = spiffs_fd_return(fs,f);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }
    // empty
    case 3:
    {
          int f = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_fs0 = 1;
          struct TYPE_5__ * fs = (struct TYPE_5__ *) malloc(_len_fs0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              fs[_i0].fd_space = ((-2 * (next_i()%2)) + 1) * next_i();
          fs[_i0].fd_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = spiffs_fd_return(fs,f);
          printf("%d\n", benchRet); 
          free(fs);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
