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
struct rpc_cred {int dummy; } ;
struct nfs_server {int dummy; } ;
typedef  int /*<<< orphan*/  nfs4_stateid ;

/* Variables and functions */
 int NFS4ERR_BAD_STATEID ; 

__attribute__((used)) static int nfs40_test_and_free_expired_stateid(struct nfs_server *server,
		nfs4_stateid *stateid,
		struct rpc_cred *cred)
{
	return -NFS4ERR_BAD_STATEID;
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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_server0 = 65025;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              server[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_stateid0 = 65025;
          int * stateid = (int *) malloc(_len_stateid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stateid0; _i0++) {
            stateid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cred0 = 65025;
          struct rpc_cred * cred = (struct rpc_cred *) malloc(_len_cred0*sizeof(struct rpc_cred));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
              cred[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nfs40_test_and_free_expired_stateid(server,stateid,cred);
          printf("%d\n", benchRet); 
          free(server);
          free(stateid);
          free(cred);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_server0 = 100;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              server[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_stateid0 = 100;
          int * stateid = (int *) malloc(_len_stateid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stateid0; _i0++) {
            stateid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cred0 = 100;
          struct rpc_cred * cred = (struct rpc_cred *) malloc(_len_cred0*sizeof(struct rpc_cred));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
              cred[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nfs40_test_and_free_expired_stateid(server,stateid,cred);
          printf("%d\n", benchRet); 
          free(server);
          free(stateid);
          free(cred);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_server0 = 1;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              server[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_stateid0 = 1;
          int * stateid = (int *) malloc(_len_stateid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stateid0; _i0++) {
            stateid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cred0 = 1;
          struct rpc_cred * cred = (struct rpc_cred *) malloc(_len_cred0*sizeof(struct rpc_cred));
          for(int _i0 = 0; _i0 < _len_cred0; _i0++) {
              cred[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nfs40_test_and_free_expired_stateid(server,stateid,cred);
          printf("%d\n", benchRet); 
          free(server);
          free(stateid);
          free(cred);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
