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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int uint32_t ;

/* Variables and functions */
 int EBADRPC ; 
 int KAUTH_ACE_ALARM ; 
 int KAUTH_ACE_AUDIT ; 
 int KAUTH_ACE_DENY ; 
 int KAUTH_ACE_PERMIT ; 
#define  NFS_ACE_ACCESS_ALLOWED_ACE_TYPE 131 
#define  NFS_ACE_ACCESS_DENIED_ACE_TYPE 130 
#define  NFS_ACE_SYSTEM_ALARM_ACE_TYPE 129 
#define  NFS_ACE_SYSTEM_AUDIT_ACE_TYPE 128 

uint32_t
nfs4_ace_nfstype_to_vfstype(uint32_t nfsacetype, int *errorp)
{
	switch (nfsacetype) {
	case NFS_ACE_ACCESS_ALLOWED_ACE_TYPE:
		return KAUTH_ACE_PERMIT;
	case NFS_ACE_ACCESS_DENIED_ACE_TYPE:
		return KAUTH_ACE_DENY;
	case NFS_ACE_SYSTEM_AUDIT_ACE_TYPE:
		return KAUTH_ACE_AUDIT;
	case NFS_ACE_SYSTEM_ALARM_ACE_TYPE:
		return KAUTH_ACE_ALARM;
	}
	*errorp = EBADRPC;
	return 0;
}

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
          int nfsacetype = 100;
        
          int _len_errorp0 = 1;
          int * errorp = (int *) malloc(_len_errorp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_errorp0; _i0++) {
            errorp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = nfs4_ace_nfstype_to_vfstype(nfsacetype,errorp);
          printf("%d\n", benchRet); 
          free(errorp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nfsacetype = 255;
        
          int _len_errorp0 = 65025;
          int * errorp = (int *) malloc(_len_errorp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_errorp0; _i0++) {
            errorp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = nfs4_ace_nfstype_to_vfstype(nfsacetype,errorp);
          printf("%d\n", benchRet); 
          free(errorp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nfsacetype = 10;
        
          int _len_errorp0 = 100;
          int * errorp = (int *) malloc(_len_errorp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_errorp0; _i0++) {
            errorp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = nfs4_ace_nfstype_to_vfstype(nfsacetype,errorp);
          printf("%d\n", benchRet); 
          free(errorp);
        
        break;
    }
    // empty
    case 3:
    {
          int nfsacetype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_errorp0 = 1;
          int * errorp = (int *) malloc(_len_errorp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_errorp0; _i0++) {
            errorp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = nfs4_ace_nfstype_to_vfstype(nfsacetype,errorp);
          printf("%d\n", benchRet); 
          free(errorp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
