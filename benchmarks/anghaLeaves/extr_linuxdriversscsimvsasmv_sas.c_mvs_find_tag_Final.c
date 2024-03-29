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
struct sas_task {struct mvs_slot_info* lldd_task; } ;
struct mvs_slot_info {int /*<<< orphan*/  slot_tag; } ;
struct mvs_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int mvs_find_tag(struct mvs_info *mvi, struct sas_task *task, u32 *tag)
{
	if (task->lldd_task) {
		struct mvs_slot_info *slot;
		slot = task->lldd_task;
		*tag = slot->slot_tag;
		return 1;
	}
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_mvi0 = 65025;
          struct mvs_info * mvi = (struct mvs_info *) malloc(_len_mvi0*sizeof(struct mvs_info));
          for(int _i0 = 0; _i0 < _len_mvi0; _i0++) {
              mvi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_task0 = 65025;
          struct sas_task * task = (struct sas_task *) malloc(_len_task0*sizeof(struct sas_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__lldd_task0 = 1;
          task[_i0].lldd_task = (struct mvs_slot_info *) malloc(_len_task__i0__lldd_task0*sizeof(struct mvs_slot_info));
          for(int _j0 = 0; _j0 < _len_task__i0__lldd_task0; _j0++) {
              task[_i0].lldd_task->slot_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_tag0 = 65025;
          int * tag = (int *) malloc(_len_tag0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mvs_find_tag(mvi,task,tag);
          printf("%d\n", benchRet); 
          free(mvi);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].lldd_task);
          }
          free(task);
          free(tag);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_mvi0 = 100;
          struct mvs_info * mvi = (struct mvs_info *) malloc(_len_mvi0*sizeof(struct mvs_info));
          for(int _i0 = 0; _i0 < _len_mvi0; _i0++) {
              mvi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_task0 = 100;
          struct sas_task * task = (struct sas_task *) malloc(_len_task0*sizeof(struct sas_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__lldd_task0 = 1;
          task[_i0].lldd_task = (struct mvs_slot_info *) malloc(_len_task__i0__lldd_task0*sizeof(struct mvs_slot_info));
          for(int _j0 = 0; _j0 < _len_task__i0__lldd_task0; _j0++) {
              task[_i0].lldd_task->slot_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_tag0 = 100;
          int * tag = (int *) malloc(_len_tag0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mvs_find_tag(mvi,task,tag);
          printf("%d\n", benchRet); 
          free(mvi);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].lldd_task);
          }
          free(task);
          free(tag);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_mvi0 = 1;
          struct mvs_info * mvi = (struct mvs_info *) malloc(_len_mvi0*sizeof(struct mvs_info));
          for(int _i0 = 0; _i0 < _len_mvi0; _i0++) {
              mvi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_task0 = 1;
          struct sas_task * task = (struct sas_task *) malloc(_len_task0*sizeof(struct sas_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__lldd_task0 = 1;
          task[_i0].lldd_task = (struct mvs_slot_info *) malloc(_len_task__i0__lldd_task0*sizeof(struct mvs_slot_info));
          for(int _j0 = 0; _j0 < _len_task__i0__lldd_task0; _j0++) {
              task[_i0].lldd_task->slot_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_tag0 = 1;
          int * tag = (int *) malloc(_len_tag0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mvs_find_tag(mvi,task,tag);
          printf("%d\n", benchRet); 
          free(mvi);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].lldd_task);
          }
          free(task);
          free(tag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
