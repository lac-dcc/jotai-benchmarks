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
typedef  int /*<<< orphan*/  u8 ;
struct cm_rep_msg {int offset26; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 cm_rep_get_failover(struct cm_rep_msg *rep_msg)
{
	return (u8) ((rep_msg->offset26 & 0x06) >> 1);
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

          int _len_rep_msg0 = 65025;
          struct cm_rep_msg * rep_msg = (struct cm_rep_msg *) malloc(_len_rep_msg0*sizeof(struct cm_rep_msg));
          for(int _i0 = 0; _i0 < _len_rep_msg0; _i0++) {
              rep_msg[_i0].offset26 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cm_rep_get_failover(rep_msg);
          printf("%d\n", benchRet); 
          free(rep_msg);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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

          int _len_rep_msg0 = 100;
          struct cm_rep_msg * rep_msg = (struct cm_rep_msg *) malloc(_len_rep_msg0*sizeof(struct cm_rep_msg));
          for(int _i0 = 0; _i0 < _len_rep_msg0; _i0++) {
              rep_msg[_i0].offset26 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cm_rep_get_failover(rep_msg);
          printf("%d\n", benchRet); 
          free(rep_msg);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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

          int _len_rep_msg0 = 1;
          struct cm_rep_msg * rep_msg = (struct cm_rep_msg *) malloc(_len_rep_msg0*sizeof(struct cm_rep_msg));
          for(int _i0 = 0; _i0 < _len_rep_msg0; _i0++) {
              rep_msg[_i0].offset26 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cm_rep_get_failover(rep_msg);
          printf("%d\n", benchRet); 
          free(rep_msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
