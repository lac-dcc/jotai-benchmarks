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
struct vnode_attr {int /*<<< orphan*/  va_active; } ;
struct user64_timespec {int dummy; } ;
struct user32_timespec {int dummy; } ;
struct getattrlist_attrtab {scalar_t__ attr; scalar_t__ size; int /*<<< orphan*/  action; int /*<<< orphan*/  bits; } ;
typedef  int ssize_t ;
typedef  int /*<<< orphan*/  kauth_action_t ;
typedef  int attrgroup_t ;

/* Variables and functions */
 scalar_t__ ATTR_TIME_SIZE ; 
 int EINVAL ; 

__attribute__((used)) static int
getattrlist_parsetab(struct getattrlist_attrtab *tab, attrgroup_t attrs,
    struct vnode_attr *vap, ssize_t *sizep, kauth_action_t *actionp,
    int is_64bit, unsigned int maxiter)
{
	attrgroup_t	recognised;
	recognised = 0;
	if (!tab)
		return EINVAL;

	do {
		/* is this attribute set? */
		if (tab->attr & attrs) {
			recognised |= tab->attr;
			if (vap)
				vap->va_active |= tab->bits;
			if (sizep) {
				if (tab->size == ATTR_TIME_SIZE) {
					if (is_64bit) {
						*sizep += sizeof(
						    struct user64_timespec);
					} else {
						*sizep += sizeof(
						    struct user32_timespec);
					}
				} else {
					*sizep += tab->size;
				}
			}
			if (actionp)
				*actionp |= tab->action;
			if (attrs == recognised)
				break;  /* all done, get out */
		}
	} while (((++tab)->attr != 0) && (--maxiter > 0));
	
	/* check to make sure that we recognised all of the passed-in attributes */
	if (attrs & ~recognised)
		return(EINVAL);
	return(0);
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
          // static_instructions_O0 : 85
          // dynamic_instructions_O0 : 15325
          // ------------------------------- 
          // static_instructions_O1 : 49
          // dynamic_instructions_O1 : 6396
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 6396
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 5888
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 5888
          // ------------------------------- 
          // static_instructions_Os : 49
          // dynamic_instructions_Os : 6395
          // ------------------------------- 
          // static_instructions_Oz : 49
          // dynamic_instructions_Oz : 6395
          // ------------------------------- 

          int attrs = 255;
        
          int is_64bit = 255;
        
          unsigned int maxiter = 255;
        
          int _len_tab0 = 65025;
          struct getattrlist_attrtab * tab = (struct getattrlist_attrtab *) malloc(_len_tab0*sizeof(struct getattrlist_attrtab));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
              tab[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vap0 = 65025;
          struct vnode_attr * vap = (struct vnode_attr *) malloc(_len_vap0*sizeof(struct vnode_attr));
          for(int _i0 = 0; _i0 < _len_vap0; _i0++) {
              vap[_i0].va_active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sizep0 = 65025;
          int * sizep = (int *) malloc(_len_sizep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sizep0; _i0++) {
            sizep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_actionp0 = 65025;
          int * actionp = (int *) malloc(_len_actionp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_actionp0; _i0++) {
            actionp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = getattrlist_parsetab(tab,attrs,vap,sizep,actionp,is_64bit,maxiter);
          printf("%d\n", benchRet); 
          free(tab);
          free(vap);
          free(sizep);
          free(actionp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 85
          // dynamic_instructions_O0 : 625
          // ------------------------------- 
          // static_instructions_O1 : 49
          // dynamic_instructions_O1 : 271
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 271
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 253
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 253
          // ------------------------------- 
          // static_instructions_Os : 49
          // dynamic_instructions_Os : 270
          // ------------------------------- 
          // static_instructions_Oz : 49
          // dynamic_instructions_Oz : 270
          // ------------------------------- 

          int attrs = 10;
        
          int is_64bit = 10;
        
          unsigned int maxiter = 10;
        
          int _len_tab0 = 100;
          struct getattrlist_attrtab * tab = (struct getattrlist_attrtab *) malloc(_len_tab0*sizeof(struct getattrlist_attrtab));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
              tab[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vap0 = 100;
          struct vnode_attr * vap = (struct vnode_attr *) malloc(_len_vap0*sizeof(struct vnode_attr));
          for(int _i0 = 0; _i0 < _len_vap0; _i0++) {
              vap[_i0].va_active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sizep0 = 100;
          int * sizep = (int *) malloc(_len_sizep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sizep0; _i0++) {
            sizep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_actionp0 = 100;
          int * actionp = (int *) malloc(_len_actionp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_actionp0; _i0++) {
            actionp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = getattrlist_parsetab(tab,attrs,vap,sizep,actionp,is_64bit,maxiter);
          printf("%d\n", benchRet); 
          free(tab);
          free(vap);
          free(sizep);
          free(actionp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 65
          // dynamic_instructions_O0 : 65
          // ------------------------------- 
          // static_instructions_O1 : 43
          // dynamic_instructions_O1 : 43
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 44
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 45
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 45
          // ------------------------------- 
          // static_instructions_Os : 43
          // dynamic_instructions_Os : 43
          // ------------------------------- 
          // static_instructions_Oz : 43
          // dynamic_instructions_Oz : 43
          // ------------------------------- 

          int attrs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int is_64bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int maxiter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_tab0 = 1;
          struct getattrlist_attrtab * tab = (struct getattrlist_attrtab *) malloc(_len_tab0*sizeof(struct getattrlist_attrtab));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
              tab[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vap0 = 1;
          struct vnode_attr * vap = (struct vnode_attr *) malloc(_len_vap0*sizeof(struct vnode_attr));
          for(int _i0 = 0; _i0 < _len_vap0; _i0++) {
              vap[_i0].va_active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sizep0 = 1;
          int * sizep = (int *) malloc(_len_sizep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sizep0; _i0++) {
            sizep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_actionp0 = 1;
          int * actionp = (int *) malloc(_len_actionp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_actionp0; _i0++) {
            actionp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = getattrlist_parsetab(tab,attrs,vap,sizep,actionp,is_64bit,maxiter);
          printf("%d\n", benchRet); 
          free(tab);
          free(vap);
          free(sizep);
          free(actionp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
