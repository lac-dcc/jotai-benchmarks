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
typedef  void* u8 ;
typedef  size_t u32 ;
struct qed_hwfn {size_t dp_module; void* dp_level; } ;
struct qed_dev {size_t dp_module; struct qed_hwfn* hwfns; void* dp_level; } ;

/* Variables and functions */
 size_t MAX_HWFNS_PER_DEVICE ; 

void qed_init_dp(struct qed_dev *cdev, u32 dp_module, u8 dp_level)
{
	u32 i;

	cdev->dp_level = dp_level;
	cdev->dp_module = dp_module;
	for (i = 0; i < MAX_HWFNS_PER_DEVICE; i++) {
		struct qed_hwfn *p_hwfn = &cdev->hwfns[i];

		p_hwfn->dp_level = dp_level;
		p_hwfn->dp_module = dp_module;
	}
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned long dp_module = 100;
        
          int _len_cdev0 = 1;
          struct qed_dev * cdev = (struct qed_dev *) malloc(_len_cdev0*sizeof(struct qed_dev));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              cdev[_i0].dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cdev__i0__hwfns0 = 1;
          cdev[_i0].hwfns = (struct qed_hwfn *) malloc(_len_cdev__i0__hwfns0*sizeof(struct qed_hwfn));
          for(int _j0 = 0; _j0 < _len_cdev__i0__hwfns0; _j0++) {
              cdev[_i0].hwfns->dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * dp_level;
        
          qed_init_dp(cdev,dp_module,dp_level);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].hwfns);
          }
          free(cdev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned long dp_module = 255;
        
          int _len_cdev0 = 65025;
          struct qed_dev * cdev = (struct qed_dev *) malloc(_len_cdev0*sizeof(struct qed_dev));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              cdev[_i0].dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cdev__i0__hwfns0 = 1;
          cdev[_i0].hwfns = (struct qed_hwfn *) malloc(_len_cdev__i0__hwfns0*sizeof(struct qed_hwfn));
          for(int _j0 = 0; _j0 < _len_cdev__i0__hwfns0; _j0++) {
              cdev[_i0].hwfns->dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * dp_level;
        
          qed_init_dp(cdev,dp_module,dp_level);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].hwfns);
          }
          free(cdev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned long dp_module = 10;
        
          int _len_cdev0 = 100;
          struct qed_dev * cdev = (struct qed_dev *) malloc(_len_cdev0*sizeof(struct qed_dev));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              cdev[_i0].dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cdev__i0__hwfns0 = 1;
          cdev[_i0].hwfns = (struct qed_hwfn *) malloc(_len_cdev__i0__hwfns0*sizeof(struct qed_hwfn));
          for(int _j0 = 0; _j0 < _len_cdev__i0__hwfns0; _j0++) {
              cdev[_i0].hwfns->dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * dp_level;
        
          qed_init_dp(cdev,dp_module,dp_level);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].hwfns);
          }
          free(cdev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned long dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cdev0 = 1;
          struct qed_dev * cdev = (struct qed_dev *) malloc(_len_cdev0*sizeof(struct qed_dev));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              cdev[_i0].dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cdev__i0__hwfns0 = 1;
          cdev[_i0].hwfns = (struct qed_hwfn *) malloc(_len_cdev__i0__hwfns0*sizeof(struct qed_hwfn));
          for(int _j0 = 0; _j0 < _len_cdev__i0__hwfns0; _j0++) {
              cdev[_i0].hwfns->dp_module = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          void * dp_level;
        
          qed_init_dp(cdev,dp_module,dp_level);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].hwfns);
          }
          free(cdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
