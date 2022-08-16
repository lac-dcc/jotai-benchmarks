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
struct stat {scalar_t__ st_mode; scalar_t__ st_uid; scalar_t__ st_gid; scalar_t__ st_size; scalar_t__ st_mtime; } ;

/* Variables and functions */

__attribute__((used)) static int get_changed_attrs (struct stat *a, struct stat *b) {
  int attrib_mask = 0;
  if (a->st_mode != b->st_mode) {
    attrib_mask |= 1;
  }
  if (a->st_uid != b->st_uid) {
    attrib_mask |= 2;
  }
  if (a->st_gid != b->st_gid) {
    attrib_mask |= 4;
  }
  if (a->st_size != b->st_size) {
    attrib_mask |= 8;
  }
  if (a->st_mtime != b->st_mtime) {
    attrib_mask |= 16;
  }
  return attrib_mask;
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
          int _len_a0 = 1;
          struct stat * a = (struct stat *) malloc(_len_a0*sizeof(struct stat));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].st_mtime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct stat * b = (struct stat *) malloc(_len_b0*sizeof(struct stat));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].st_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].st_uid = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].st_gid = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].st_size = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].st_mtime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_changed_attrs(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
