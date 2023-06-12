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
typedef  int mach_error_t ;

/* Variables and functions */
 int IPC_RCV_MOD ; 
 int IPC_SEND_MOD ; 
 int MACH_IPC_MIG_MOD ; 
 int SERV_ENV_MOD ; 
 int SERV_EXECD_MOD ; 
 int SERV_NETNAME_MOD ; 

__attribute__((used)) static void
do_compat(mach_error_t *org_err)
{
	mach_error_t		err = *org_err;

	/* 
	 * map old error numbers to 
	 * to new error sys & subsystem 
	 */

	if ((-200 < err) && (err <= -100))
		err = -(err + 100) | IPC_SEND_MOD;
	else if ((-300 < err) && (err <= -200))
		err = -(err + 200) | IPC_RCV_MOD;
	else if ((-400 < err) && (err <= -300))
		err = -(err + 300) | MACH_IPC_MIG_MOD;
	else if ((1000 <= err) && (err < 1100))
		err = (err - 1000) | SERV_NETNAME_MOD;
	else if ((1600 <= err) && (err < 1700))
		err = (err - 1600) | SERV_ENV_MOD;
	else if ((27600 <= err) && (err < 27700))
		err = (err - 27600) | SERV_EXECD_MOD;

	*org_err = err;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_org_err0 = 65025;
          int * org_err = (int *) malloc(_len_org_err0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_org_err0; _i0++) {
            org_err[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_compat(org_err);
          free(org_err);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_org_err0 = 100;
          int * org_err = (int *) malloc(_len_org_err0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_org_err0; _i0++) {
            org_err[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_compat(org_err);
          free(org_err);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_org_err0 = 1;
          int * org_err = (int *) malloc(_len_org_err0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_org_err0; _i0++) {
            org_err[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_compat(org_err);
          free(org_err);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
