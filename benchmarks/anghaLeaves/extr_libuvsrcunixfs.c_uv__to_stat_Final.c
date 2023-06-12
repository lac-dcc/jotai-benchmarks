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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {scalar_t__ tv_nsec; int /*<<< orphan*/  tv_sec; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; int /*<<< orphan*/  tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; int /*<<< orphan*/  tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; int /*<<< orphan*/  tv_sec; } ;
struct TYPE_11__ {scalar_t__ st_gen; scalar_t__ st_flags; TYPE_4__ st_birthtim; TYPE_3__ st_ctim; TYPE_2__ st_mtim; TYPE_1__ st_atim; int /*<<< orphan*/  st_blocks; int /*<<< orphan*/  st_blksize; int /*<<< orphan*/  st_size; int /*<<< orphan*/  st_ino; int /*<<< orphan*/  st_rdev; int /*<<< orphan*/  st_gid; int /*<<< orphan*/  st_uid; int /*<<< orphan*/  st_nlink; int /*<<< orphan*/  st_mode; int /*<<< orphan*/  st_dev; } ;
typedef  TYPE_5__ uv_stat_t ;
struct stat {int /*<<< orphan*/  st_ctime; int /*<<< orphan*/  st_mtime; int /*<<< orphan*/  st_atime; int /*<<< orphan*/  st_blocks; int /*<<< orphan*/  st_blksize; int /*<<< orphan*/  st_size; int /*<<< orphan*/  st_ino; int /*<<< orphan*/  st_rdev; int /*<<< orphan*/  st_gid; int /*<<< orphan*/  st_uid; int /*<<< orphan*/  st_nlink; int /*<<< orphan*/  st_mode; int /*<<< orphan*/  st_dev; } ;

/* Variables and functions */

__attribute__((used)) static void uv__to_stat(struct stat* src, uv_stat_t* dst) {
  dst->st_dev = src->st_dev;
  dst->st_mode = src->st_mode;
  dst->st_nlink = src->st_nlink;
  dst->st_uid = src->st_uid;
  dst->st_gid = src->st_gid;
  dst->st_rdev = src->st_rdev;
  dst->st_ino = src->st_ino;
  dst->st_size = src->st_size;
  dst->st_blksize = src->st_blksize;
  dst->st_blocks = src->st_blocks;

#if defined(__APPLE__)
  dst->st_atim.tv_sec = src->st_atimespec.tv_sec;
  dst->st_atim.tv_nsec = src->st_atimespec.tv_nsec;
  dst->st_mtim.tv_sec = src->st_mtimespec.tv_sec;
  dst->st_mtim.tv_nsec = src->st_mtimespec.tv_nsec;
  dst->st_ctim.tv_sec = src->st_ctimespec.tv_sec;
  dst->st_ctim.tv_nsec = src->st_ctimespec.tv_nsec;
  dst->st_birthtim.tv_sec = src->st_birthtimespec.tv_sec;
  dst->st_birthtim.tv_nsec = src->st_birthtimespec.tv_nsec;
  dst->st_flags = src->st_flags;
  dst->st_gen = src->st_gen;
#elif defined(__ANDROID__)
  dst->st_atim.tv_sec = src->st_atime;
  dst->st_atim.tv_nsec = src->st_atimensec;
  dst->st_mtim.tv_sec = src->st_mtime;
  dst->st_mtim.tv_nsec = src->st_mtimensec;
  dst->st_ctim.tv_sec = src->st_ctime;
  dst->st_ctim.tv_nsec = src->st_ctimensec;
  dst->st_birthtim.tv_sec = src->st_ctime;
  dst->st_birthtim.tv_nsec = src->st_ctimensec;
  dst->st_flags = 0;
  dst->st_gen = 0;
#elif !defined(_AIX) && (       \
    defined(__DragonFly__)   || \
    defined(__FreeBSD__)     || \
    defined(__OpenBSD__)     || \
    defined(__NetBSD__)      || \
    defined(_GNU_SOURCE)     || \
    defined(_BSD_SOURCE)     || \
    defined(_SVID_SOURCE)    || \
    defined(_XOPEN_SOURCE)   || \
    defined(_DEFAULT_SOURCE))
  dst->st_atim.tv_sec = src->st_atim.tv_sec;
  dst->st_atim.tv_nsec = src->st_atim.tv_nsec;
  dst->st_mtim.tv_sec = src->st_mtim.tv_sec;
  dst->st_mtim.tv_nsec = src->st_mtim.tv_nsec;
  dst->st_ctim.tv_sec = src->st_ctim.tv_sec;
  dst->st_ctim.tv_nsec = src->st_ctim.tv_nsec;
# if defined(__FreeBSD__)    || \
     defined(__NetBSD__)
  dst->st_birthtim.tv_sec = src->st_birthtim.tv_sec;
  dst->st_birthtim.tv_nsec = src->st_birthtim.tv_nsec;
  dst->st_flags = src->st_flags;
  dst->st_gen = src->st_gen;
# else
  dst->st_birthtim.tv_sec = src->st_ctim.tv_sec;
  dst->st_birthtim.tv_nsec = src->st_ctim.tv_nsec;
  dst->st_flags = 0;
  dst->st_gen = 0;
# endif
#else
  dst->st_atim.tv_sec = src->st_atime;
  dst->st_atim.tv_nsec = 0;
  dst->st_mtim.tv_sec = src->st_mtime;
  dst->st_mtim.tv_nsec = 0;
  dst->st_ctim.tv_sec = src->st_ctime;
  dst->st_ctim.tv_nsec = 0;
  dst->st_birthtim.tv_sec = src->st_ctime;
  dst->st_birthtim.tv_nsec = 0;
  dst->st_flags = 0;
  dst->st_gen = 0;
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
          // static_instructions_O0 : 74
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 26
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int _len_src0 = 65025;
          struct stat * src = (struct stat *) malloc(_len_src0*sizeof(struct stat));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].st_ctime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_mtime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_atime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_blksize = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_rdev = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dst0 = 65025;
          struct TYPE_11__ * dst = (struct TYPE_11__ *) malloc(_len_dst0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].st_gen = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_birthtim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_birthtim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_ctim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_ctim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_mtim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_mtim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_atim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_atim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_blksize = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_rdev = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          uv__to_stat(src,dst);
          free(src);
          free(dst);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 74
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 26
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int _len_src0 = 100;
          struct stat * src = (struct stat *) malloc(_len_src0*sizeof(struct stat));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].st_ctime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_mtime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_atime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_blksize = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_rdev = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dst0 = 100;
          struct TYPE_11__ * dst = (struct TYPE_11__ *) malloc(_len_dst0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].st_gen = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_birthtim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_birthtim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_ctim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_ctim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_mtim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_mtim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_atim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_atim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_blksize = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_rdev = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          uv__to_stat(src,dst);
          free(src);
          free(dst);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 74
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 26
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int _len_src0 = 1;
          struct stat * src = (struct stat *) malloc(_len_src0*sizeof(struct stat));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              src[_i0].st_ctime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_mtime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_atime = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_blksize = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_rdev = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          src[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dst0 = 1;
          struct TYPE_11__ * dst = (struct TYPE_11__ *) malloc(_len_dst0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].st_gen = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_birthtim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_birthtim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_ctim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_ctim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_mtim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_mtim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_atim.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_atim.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          dst[_i0].st_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_blksize = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_rdev = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_nlink = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].st_dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          uv__to_stat(src,dst);
          free(src);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
