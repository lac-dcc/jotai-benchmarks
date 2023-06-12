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
struct selinux_state {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;

/* Variables and functions */
 int EIDRM ; 

__attribute__((used)) static inline int security_netlbl_secattr_to_sid(struct selinux_state *state,
					    struct netlbl_lsm_secattr *secattr,
					    u32 *sid)
{
	return -EIDRM;
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

          int _len_state0 = 65025;
          struct selinux_state * state = (struct selinux_state *) malloc(_len_state0*sizeof(struct selinux_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_secattr0 = 65025;
          struct netlbl_lsm_secattr * secattr = (struct netlbl_lsm_secattr *) malloc(_len_secattr0*sizeof(struct netlbl_lsm_secattr));
          for(int _i0 = 0; _i0 < _len_secattr0; _i0++) {
              secattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sid0 = 65025;
          int * sid = (int *) malloc(_len_sid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sid0; _i0++) {
            sid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = security_netlbl_secattr_to_sid(state,secattr,sid);
          printf("%d\n", benchRet); 
          free(state);
          free(secattr);
          free(sid);
        
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

          int _len_state0 = 100;
          struct selinux_state * state = (struct selinux_state *) malloc(_len_state0*sizeof(struct selinux_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_secattr0 = 100;
          struct netlbl_lsm_secattr * secattr = (struct netlbl_lsm_secattr *) malloc(_len_secattr0*sizeof(struct netlbl_lsm_secattr));
          for(int _i0 = 0; _i0 < _len_secattr0; _i0++) {
              secattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sid0 = 100;
          int * sid = (int *) malloc(_len_sid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sid0; _i0++) {
            sid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = security_netlbl_secattr_to_sid(state,secattr,sid);
          printf("%d\n", benchRet); 
          free(state);
          free(secattr);
          free(sid);
        
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

          int _len_state0 = 1;
          struct selinux_state * state = (struct selinux_state *) malloc(_len_state0*sizeof(struct selinux_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_secattr0 = 1;
          struct netlbl_lsm_secattr * secattr = (struct netlbl_lsm_secattr *) malloc(_len_secattr0*sizeof(struct netlbl_lsm_secattr));
          for(int _i0 = 0; _i0 < _len_secattr0; _i0++) {
              secattr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_sid0 = 1;
          int * sid = (int *) malloc(_len_sid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sid0; _i0++) {
            sid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = security_netlbl_secattr_to_sid(state,secattr,sid);
          printf("%d\n", benchRet); 
          free(state);
          free(secattr);
          free(sid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
