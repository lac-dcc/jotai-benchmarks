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
struct vnop_pathconf_args {int a_name; int* a_retval; } ;

/* Variables and functions */
 int /*<<< orphan*/  DEVMAXNAMESIZE ; 
 int /*<<< orphan*/  DEVMAXPATHSIZE ; 
 int EINVAL ; 
#define  _PC_CASE_PRESERVING 134 
#define  _PC_CASE_SENSITIVE 133 
#define  _PC_CHOWN_RESTRICTED 132 
#define  _PC_LINK_MAX 131 
#define  _PC_NAME_MAX 130 
#define  _PC_NO_TRUNC 129 
#define  _PC_PATH_MAX 128 

__attribute__((used)) static int
devs_vnop_pathconf(
	struct vnop_pathconf_args /* {
		struct vnode *a_vp;
		int a_name;
		int *a_retval;
		vfs_context_t a_context;
	} */ *ap)
{
	switch (ap->a_name) {
	case _PC_LINK_MAX:
		/* arbitrary limit matching HFS; devfs has no hard limit */
		*ap->a_retval = 32767;
		break;
	case _PC_NAME_MAX:
		*ap->a_retval = DEVMAXNAMESIZE - 1;	/* includes NUL */
		break;
	case _PC_PATH_MAX:
		*ap->a_retval = DEVMAXPATHSIZE - 1;	/* XXX nonconformant */
		break;
	case _PC_CHOWN_RESTRICTED:
		*ap->a_retval = 200112;		/* _POSIX_CHOWN_RESTRICTED */
		break;
	case _PC_NO_TRUNC:
		*ap->a_retval = 0;
		break;
	case _PC_CASE_SENSITIVE:
		*ap->a_retval = 1;
		break;
	case _PC_CASE_PRESERVING:
		*ap->a_retval = 1;
		break;
	default:
		return (EINVAL);
	}

	return (0);
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
          int _len_ap0 = 1;
          struct vnop_pathconf_args * ap = (struct vnop_pathconf_args *) malloc(_len_ap0*sizeof(struct vnop_pathconf_args));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
            ap[_i0].a_name = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ap__i0__a_retval0 = 1;
          ap[_i0].a_retval = (int *) malloc(_len_ap__i0__a_retval0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ap__i0__a_retval0; _j0++) {
            ap[_i0].a_retval[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = devs_vnop_pathconf(ap);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].a_retval);
          }
          free(ap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
