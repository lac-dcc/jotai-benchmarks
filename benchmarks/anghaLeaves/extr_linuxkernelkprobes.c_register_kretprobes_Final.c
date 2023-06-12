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
struct kretprobe {int dummy; } ;

/* Variables and functions */
 int ENOSYS ; 

int register_kretprobes(struct kretprobe **rps, int num)
{
	return -ENOSYS;
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
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
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

          int num = 100;
        
          int _len_rps0 = 1;
          struct kretprobe ** rps = (struct kretprobe **) malloc(_len_rps0*sizeof(struct kretprobe *));
          for(int _i0 = 0; _i0 < _len_rps0; _i0++) {
            int _len_rps1 = 1;
            rps[_i0] = (struct kretprobe *) malloc(_len_rps1*sizeof(struct kretprobe));
            for(int _i1 = 0; _i1 < _len_rps1; _i1++) {
                rps[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = register_kretprobes(rps,num);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_rps0; i1++) {
              free(rps[i1]);
          }
          free(rps);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
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

          int num = 255;
        
          int _len_rps0 = 65025;
          struct kretprobe ** rps = (struct kretprobe **) malloc(_len_rps0*sizeof(struct kretprobe *));
          for(int _i0 = 0; _i0 < _len_rps0; _i0++) {
            int _len_rps1 = 1;
            rps[_i0] = (struct kretprobe *) malloc(_len_rps1*sizeof(struct kretprobe));
            for(int _i1 = 0; _i1 < _len_rps1; _i1++) {
                rps[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = register_kretprobes(rps,num);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_rps0; i1++) {
              free(rps[i1]);
          }
          free(rps);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
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

          int num = 10;
        
          int _len_rps0 = 100;
          struct kretprobe ** rps = (struct kretprobe **) malloc(_len_rps0*sizeof(struct kretprobe *));
          for(int _i0 = 0; _i0 < _len_rps0; _i0++) {
            int _len_rps1 = 1;
            rps[_i0] = (struct kretprobe *) malloc(_len_rps1*sizeof(struct kretprobe));
            for(int _i1 = 0; _i1 < _len_rps1; _i1++) {
                rps[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = register_kretprobes(rps,num);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_rps0; i1++) {
              free(rps[i1]);
          }
          free(rps);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 8
          // dynamic_instructions_O0 : 8
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

          int num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rps0 = 1;
          struct kretprobe ** rps = (struct kretprobe **) malloc(_len_rps0*sizeof(struct kretprobe *));
          for(int _i0 = 0; _i0 < _len_rps0; _i0++) {
            int _len_rps1 = 1;
            rps[_i0] = (struct kretprobe *) malloc(_len_rps1*sizeof(struct kretprobe));
            for(int _i1 = 0; _i1 < _len_rps1; _i1++) {
                rps[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = register_kretprobes(rps,num);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_rps0; i1++) {
              free(rps[i1]);
          }
          free(rps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
