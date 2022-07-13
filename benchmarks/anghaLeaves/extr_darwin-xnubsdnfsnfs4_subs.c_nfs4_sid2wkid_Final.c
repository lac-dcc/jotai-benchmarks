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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int sid_kind; int sid_authcount; int* sid_authority; int* sid_authorities; } ;
typedef  TYPE_1__ ntsid_t ;

/* Variables and functions */

__attribute__((used)) static const char*
nfs4_sid2wkid(ntsid_t *sp)
{
	if ((sp->sid_kind == 1) && (sp->sid_authcount == 1)) {
		/* check if it's one of our well-known ACE WHO names */
		if (sp->sid_authority[5] == 0) {
			if (sp->sid_authorities[0] == 0) // S-1-0-0
				return ("nobody@localdomain");
		} else if (sp->sid_authority[5] == 1) {
			if (sp->sid_authorities[0] == 0) // S-1-1-0
				return ("EVERYONE@");
		} else if (sp->sid_authority[5] == 3) {
			if (sp->sid_authorities[0] == 0) // S-1-3-0
				return ("OWNER@");
			else if (sp->sid_authorities[0] == 1) // S-1-3-1
				return ("GROUP@");
		} else if (sp->sid_authority[5] == 5) {
			if (sp->sid_authorities[0] == 1) // S-1-5-1
				return ("DIALUP@");
			else if (sp->sid_authorities[0] == 2) // S-1-5-2
				return ("NETWORK@");
			else if (sp->sid_authorities[0] == 3) // S-1-5-3
				return ("BATCH@");
			else if (sp->sid_authorities[0] == 4) // S-1-5-4
				return ("INTERACTIVE@");
			else if (sp->sid_authorities[0] == 6) // S-1-5-6
				return ("SERVICE@");
			else if (sp->sid_authorities[0] == 7) // S-1-5-7
				return ("ANONYMOUS@");
			else if (sp->sid_authorities[0] == 11) // S-1-5-11
				return ("AUTHENTICATED@");
		}
	}
	return (NULL);
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
          int _len_sp0 = 1;
          struct TYPE_3__ * sp = (struct TYPE_3__ *) malloc(_len_sp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].sid_kind = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].sid_authcount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__sid_authority0 = 1;
          sp[_i0].sid_authority = (int *) malloc(_len_sp__i0__sid_authority0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__sid_authority0; _j0++) {
            sp[_i0].sid_authority[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__sid_authorities0 = 1;
          sp[_i0].sid_authorities = (int *) malloc(_len_sp__i0__sid_authorities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__sid_authorities0; _j0++) {
            sp[_i0].sid_authorities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = nfs4_sid2wkid(sp);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].sid_authority);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].sid_authorities);
          }
          free(sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sp0 = 65025;
          struct TYPE_3__ * sp = (struct TYPE_3__ *) malloc(_len_sp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].sid_kind = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].sid_authcount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__sid_authority0 = 1;
          sp[_i0].sid_authority = (int *) malloc(_len_sp__i0__sid_authority0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__sid_authority0; _j0++) {
            sp[_i0].sid_authority[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__sid_authorities0 = 1;
          sp[_i0].sid_authorities = (int *) malloc(_len_sp__i0__sid_authorities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__sid_authorities0; _j0++) {
            sp[_i0].sid_authorities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = nfs4_sid2wkid(sp);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].sid_authority);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].sid_authorities);
          }
          free(sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sp0 = 100;
          struct TYPE_3__ * sp = (struct TYPE_3__ *) malloc(_len_sp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].sid_kind = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].sid_authcount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__sid_authority0 = 1;
          sp[_i0].sid_authority = (int *) malloc(_len_sp__i0__sid_authority0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__sid_authority0; _j0++) {
            sp[_i0].sid_authority[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sp__i0__sid_authorities0 = 1;
          sp[_i0].sid_authorities = (int *) malloc(_len_sp__i0__sid_authorities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sp__i0__sid_authorities0; _j0++) {
            sp[_i0].sid_authorities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = nfs4_sid2wkid(sp);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].sid_authority);
          }
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].sid_authorities);
          }
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
