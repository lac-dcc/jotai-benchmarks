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
typedef  int /*<<< orphan*/  umode_t ;
struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int v9fs_acl_mode(struct inode *dir, umode_t *modep,
				struct posix_acl **dpacl,
				struct posix_acl **pacl)
{
	return 0;
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
          int _len_dir0 = 1;
          struct inode * dir = (struct inode *) malloc(_len_dir0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modep0 = 1;
          int * modep = (int *) malloc(_len_modep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_modep0; _i0++) {
            modep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpacl0 = 1;
          struct posix_acl ** dpacl = (struct posix_acl **) malloc(_len_dpacl0*sizeof(struct posix_acl *));
          for(int _i0 = 0; _i0 < _len_dpacl0; _i0++) {
            int _len_dpacl1 = 1;
            dpacl[_i0] = (struct posix_acl *) malloc(_len_dpacl1*sizeof(struct posix_acl));
            for(int _i1 = 0; _i1 < _len_dpacl1; _i1++) {
              dpacl[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pacl0 = 1;
          struct posix_acl ** pacl = (struct posix_acl **) malloc(_len_pacl0*sizeof(struct posix_acl *));
          for(int _i0 = 0; _i0 < _len_pacl0; _i0++) {
            int _len_pacl1 = 1;
            pacl[_i0] = (struct posix_acl *) malloc(_len_pacl1*sizeof(struct posix_acl));
            for(int _i1 = 0; _i1 < _len_pacl1; _i1++) {
              pacl[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = v9fs_acl_mode(dir,modep,dpacl,pacl);
          printf("%d\n", benchRet); 
          free(dir);
          free(modep);
          for(int i1 = 0; i1 < _len_dpacl0; i1++) {
            int _len_dpacl1 = 1;
              free(dpacl[i1]);
          }
          free(dpacl);
          for(int i1 = 0; i1 < _len_pacl0; i1++) {
            int _len_pacl1 = 1;
              free(pacl[i1]);
          }
          free(pacl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
