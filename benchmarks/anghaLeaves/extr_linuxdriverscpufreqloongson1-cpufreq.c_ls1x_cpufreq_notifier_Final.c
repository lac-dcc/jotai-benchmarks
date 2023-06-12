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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct notifier_block {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  udelay_val; } ;

/* Variables and functions */
 unsigned long CPUFREQ_POSTCHANGE ; 
 int NOTIFY_OK ; 
 TYPE_1__ current_cpu_data ; 
 int /*<<< orphan*/  loops_per_jiffy ; 

__attribute__((used)) static int ls1x_cpufreq_notifier(struct notifier_block *nb,
				 unsigned long val, void *data)
{
	if (val == CPUFREQ_POSTCHANGE)
		current_cpu_data.udelay_val = loops_per_jiffy;

	return NOTIFY_OK;
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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

          unsigned long val = 100;
        
          int _len_nb0 = 1;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = ls1x_cpufreq_notifier(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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

          unsigned long val = 255;
        
          int _len_nb0 = 65025;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = ls1x_cpufreq_notifier(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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

          unsigned long val = 10;
        
          int _len_nb0 = 100;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = ls1x_cpufreq_notifier(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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

          unsigned long val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_nb0 = 1;
          struct notifier_block * nb = (struct notifier_block *) malloc(_len_nb0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_nb0; _i0++) {
              nb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * data;
        
          int benchRet = ls1x_cpufreq_notifier(nb,val,data);
          printf("%d\n", benchRet); 
          free(nb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
