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
typedef  int /*<<< orphan*/  u32 ;
struct smack_known {int /*<<< orphan*/  smk_secid; } ;
struct kern_ipc_perm {struct smack_known* security; } ;

/* Variables and functions */

__attribute__((used)) static void smack_ipc_getsecid(struct kern_ipc_perm *ipp, u32 *secid)
{
	struct smack_known *iskp = ipp->security;

	*secid = iskp->smk_secid;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_ipp0 = 65025;
          struct kern_ipc_perm * ipp = (struct kern_ipc_perm *) malloc(_len_ipp0*sizeof(struct kern_ipc_perm));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              int _len_ipp__i0__security0 = 1;
          ipp[_i0].security = (struct smack_known *) malloc(_len_ipp__i0__security0*sizeof(struct smack_known));
          for(int _j0 = 0; _j0 < _len_ipp__i0__security0; _j0++) {
              ipp[_i0].security->smk_secid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_secid0 = 65025;
          int * secid = (int *) malloc(_len_secid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secid0; _i0++) {
            secid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          smack_ipc_getsecid(ipp,secid);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].security);
          }
          free(ipp);
          free(secid);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_ipp0 = 100;
          struct kern_ipc_perm * ipp = (struct kern_ipc_perm *) malloc(_len_ipp0*sizeof(struct kern_ipc_perm));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              int _len_ipp__i0__security0 = 1;
          ipp[_i0].security = (struct smack_known *) malloc(_len_ipp__i0__security0*sizeof(struct smack_known));
          for(int _j0 = 0; _j0 < _len_ipp__i0__security0; _j0++) {
              ipp[_i0].security->smk_secid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_secid0 = 100;
          int * secid = (int *) malloc(_len_secid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secid0; _i0++) {
            secid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          smack_ipc_getsecid(ipp,secid);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].security);
          }
          free(ipp);
          free(secid);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_ipp0 = 1;
          struct kern_ipc_perm * ipp = (struct kern_ipc_perm *) malloc(_len_ipp0*sizeof(struct kern_ipc_perm));
          for(int _i0 = 0; _i0 < _len_ipp0; _i0++) {
              int _len_ipp__i0__security0 = 1;
          ipp[_i0].security = (struct smack_known *) malloc(_len_ipp__i0__security0*sizeof(struct smack_known));
          for(int _j0 = 0; _j0 < _len_ipp__i0__security0; _j0++) {
              ipp[_i0].security->smk_secid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_secid0 = 1;
          int * secid = (int *) malloc(_len_secid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secid0; _i0++) {
            secid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          smack_ipc_getsecid(ipp,secid);
          for(int _aux = 0; _aux < _len_ipp0; _aux++) {
          free(ipp[_aux].security);
          }
          free(ipp);
          free(secid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
