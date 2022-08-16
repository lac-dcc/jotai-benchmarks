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
struct audit_krule {scalar_t__ listnr; struct audit_field* inode_f; scalar_t__ tree; scalar_t__ watch; } ;
struct audit_field {scalar_t__ op; } ;

/* Variables and functions */
 scalar_t__ AUDIT_FILTER_EXIT ; 
 scalar_t__ Audit_equal ; 
 scalar_t__ Audit_not_equal ; 
 int EINVAL ; 

__attribute__((used)) static inline int audit_to_inode(struct audit_krule *krule,
				 struct audit_field *f)
{
	if (krule->listnr != AUDIT_FILTER_EXIT ||
	    krule->inode_f || krule->watch || krule->tree ||
	    (f->op != Audit_equal && f->op != Audit_not_equal))
		return -EINVAL;

	krule->inode_f = f;
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
          int _len_krule0 = 1;
          struct audit_krule * krule = (struct audit_krule *) malloc(_len_krule0*sizeof(struct audit_krule));
          for(int _i0 = 0; _i0 < _len_krule0; _i0++) {
            krule[_i0].listnr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_krule__i0__inode_f0 = 1;
          krule[_i0].inode_f = (struct audit_field *) malloc(_len_krule__i0__inode_f0*sizeof(struct audit_field));
          for(int _j0 = 0; _j0 < _len_krule__i0__inode_f0; _j0++) {
            krule[_i0].inode_f->op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        krule[_i0].tree = ((-2 * (next_i()%2)) + 1) * next_i();
        krule[_i0].watch = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 1;
          struct audit_field * f = (struct audit_field *) malloc(_len_f0*sizeof(struct audit_field));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audit_to_inode(krule,f);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_krule0; _aux++) {
          free(krule[_aux].inode_f);
          }
          free(krule);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
