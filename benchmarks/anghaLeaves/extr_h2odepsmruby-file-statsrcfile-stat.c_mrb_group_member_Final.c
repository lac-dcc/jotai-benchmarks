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
typedef  int /*<<< orphan*/  mrb_state ;
typedef  int /*<<< orphan*/  GETGROUPS_T ;

/* Variables and functions */
 int FALSE ; 

__attribute__((used)) static int
mrb_group_member(mrb_state *mrb, GETGROUPS_T gid)
{
#if defined(_WIN32) || !defined(HAVE_GETGROUPS)
  return FALSE;
#else
  int rv = FALSE;
  int groups = 16;
  GETGROUPS_T *gary = NULL;
  int anum = -1;

  if (getgid() == gid || getegid() == gid)
    return TRUE;

  /*
   * On Mac OS X (Mountain Lion), NGROUPS is 16. But libc and kernel
   * accept more larger value.
   * So we don't trunk NGROUPS anymore.
   */
  while (groups <= MRB_MAX_GROUPS) {
    gary = (GETGROUPS_T*)mrb_malloc(mrb, sizeof(GETGROUPS_T) * (unsigned int)groups);
    anum = getgroups(groups, gary);
    if (anum != -1 && anum != groups)
      break;
    groups *= 2;
    if (gary) {
      mrb_free(mrb, gary);
      gary = 0;
    }
  }
  if (anum == -1)
    return FALSE;

  while (--anum >= 0) {
    if (gary[anum] == gid) {
      rv = TRUE;
      break;
    }
  }

  if (gary) {
    mrb_free(mrb, gary);
  }
  return rv;
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
          int gid = 100;
          int _len_mrb0 = 1;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mrb_group_member(mrb,gid);
          printf("%d\n", benchRet); 
          free(mrb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int gid = 10;
          int _len_mrb0 = 100;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mrb_group_member(mrb,gid);
          printf("%d\n", benchRet); 
          free(mrb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
