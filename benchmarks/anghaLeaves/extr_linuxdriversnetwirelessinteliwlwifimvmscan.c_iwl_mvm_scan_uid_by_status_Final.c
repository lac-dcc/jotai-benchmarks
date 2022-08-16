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
struct iwl_mvm {int max_scans; int* scan_uid_status; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int iwl_mvm_scan_uid_by_status(struct iwl_mvm *mvm, int status)
{
	int i;

	for (i = 0; i < mvm->max_scans; i++)
		if (mvm->scan_uid_status[i] == status)
			return i;

	return -ENOENT;
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
          int status = 100;
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
            mvm[_i0].max_scans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mvm__i0__scan_uid_status0 = 1;
          mvm[_i0].scan_uid_status = (int *) malloc(_len_mvm__i0__scan_uid_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mvm__i0__scan_uid_status0; _j0++) {
            mvm[_i0].scan_uid_status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iwl_mvm_scan_uid_by_status(mvm,status);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].scan_uid_status);
          }
          free(mvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
