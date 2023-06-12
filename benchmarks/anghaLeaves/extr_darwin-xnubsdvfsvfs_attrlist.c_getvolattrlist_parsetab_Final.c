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
struct vfs_attr {int /*<<< orphan*/  f_active; } ;
struct user64_timespec {int dummy; } ;
struct user32_timespec {int dummy; } ;
struct getvolattrlist_attrtab {scalar_t__ attr; scalar_t__ size; int /*<<< orphan*/  bits; } ;
typedef  int ssize_t ;
typedef  int attrgroup_t ;

/* Variables and functions */
 scalar_t__ ATTR_TIME_SIZE ; 
 int EINVAL ; 

__attribute__((used)) static int
getvolattrlist_parsetab(struct getvolattrlist_attrtab *tab, attrgroup_t attrs, struct vfs_attr *vsp,
		ssize_t *sizep, int is_64bit, unsigned int maxiter)
{
	attrgroup_t	recognised;

	recognised = 0;
	do {
		/* is this attribute set? */
		if (tab->attr & attrs) {
			recognised |= tab->attr;
			vsp->f_active |= tab->bits;
			if (tab->size == ATTR_TIME_SIZE) {
				if (is_64bit) {
					*sizep += sizeof(struct user64_timespec);
				} else {
					*sizep += sizeof(struct user32_timespec);
				}
			} else {
				*sizep += tab->size;
			}
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
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 11496
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 3839
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 3840
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 3841
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 3841
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 3838
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 3838
          // ------------------------------- 

          int attrs = 255;
        
          int is_64bit = 255;
        
          unsigned int maxiter = 255;
        
          int _len_tab0 = 65025;
          struct getvolattrlist_attrtab * tab = (struct getvolattrlist_attrtab *) malloc(_len_tab0*sizeof(struct getvolattrlist_attrtab));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
              tab[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vsp0 = 65025;
          struct vfs_attr * vsp = (struct vfs_attr *) malloc(_len_vsp0*sizeof(struct vfs_attr));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
              vsp[_i0].f_active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sizep0 = 65025;
          int * sizep = (int *) malloc(_len_sizep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sizep0; _i0++) {
            sizep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = getvolattrlist_parsetab(tab,attrs,vsp,sizep,is_64bit,maxiter);
          printf("%d\n", benchRet); 
          free(tab);
          free(vsp);
          free(sizep);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 471
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 164
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 165
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 166
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 166
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 163
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 163
          // ------------------------------- 

          int attrs = 10;
        
          int is_64bit = 10;
        
          unsigned int maxiter = 10;
        
          int _len_tab0 = 100;
          struct getvolattrlist_attrtab * tab = (struct getvolattrlist_attrtab *) malloc(_len_tab0*sizeof(struct getvolattrlist_attrtab));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
              tab[_i0].attr = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          tab[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vsp0 = 100;
          struct vfs_attr * vsp = (struct vfs_attr *) malloc(_len_vsp0*sizeof(struct vfs_attr));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
              vsp[_i0].f_active = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sizep0 = 100;
          int * sizep = (int *) malloc(_len_sizep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sizep0; _i0++) {
            sizep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = getvolattrlist_parsetab(tab,attrs,vsp,sizep,is_64bit,maxiter);
          printf("%d\n", benchRet); 
          free(tab);
          free(vsp);
          free(sizep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
