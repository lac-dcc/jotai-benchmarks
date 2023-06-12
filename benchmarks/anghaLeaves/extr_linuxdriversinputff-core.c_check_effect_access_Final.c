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
struct file {int dummy; } ;
struct ff_device {int max_effects; struct file** effect_owners; } ;

/* Variables and functions */
 int EACCES ; 
 int EINVAL ; 

__attribute__((used)) static int check_effect_access(struct ff_device *ff, int effect_id,
				struct file *file)
{
	if (effect_id < 0 || effect_id >= ff->max_effects ||
	    !ff->effect_owners[effect_id])
		return -EINVAL;

	if (file && ff->effect_owners[effect_id] != file)
		return -EACCES;

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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int effect_id = 100;
        
          int _len_ff0 = 1;
          struct ff_device * ff = (struct ff_device *) malloc(_len_ff0*sizeof(struct ff_device));
          for(int _i0 = 0; _i0 < _len_ff0; _i0++) {
              ff[_i0].max_effects = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ff__i0__effect_owners0 = 1;
          ff[_i0].effect_owners = (struct file **) malloc(_len_ff__i0__effect_owners0*sizeof(struct file *));
          for(int _j0 = 0; _j0 < _len_ff__i0__effect_owners0; _j0++) {
            int _len_ff__i0__effect_owners1 = 1;
            ff[_i0].effect_owners[_j0] = (struct file *) malloc(_len_ff__i0__effect_owners1*sizeof(struct file));
            for(int _j1 = 0; _j1 < _len_ff__i0__effect_owners1; _j1++) {
                ff[_i0].effect_owners[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_effect_access(ff,effect_id,file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ff0; _aux++) {
          free(*(ff[_aux].effect_owners));
        free(ff[_aux].effect_owners);
          }
          free(ff);
          free(file);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int effect_id = 255;
        
          int _len_ff0 = 65025;
          struct ff_device * ff = (struct ff_device *) malloc(_len_ff0*sizeof(struct ff_device));
          for(int _i0 = 0; _i0 < _len_ff0; _i0++) {
              ff[_i0].max_effects = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ff__i0__effect_owners0 = 1;
          ff[_i0].effect_owners = (struct file **) malloc(_len_ff__i0__effect_owners0*sizeof(struct file *));
          for(int _j0 = 0; _j0 < _len_ff__i0__effect_owners0; _j0++) {
            int _len_ff__i0__effect_owners1 = 1;
            ff[_i0].effect_owners[_j0] = (struct file *) malloc(_len_ff__i0__effect_owners1*sizeof(struct file));
            for(int _j1 = 0; _j1 < _len_ff__i0__effect_owners1; _j1++) {
                ff[_i0].effect_owners[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_effect_access(ff,effect_id,file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ff0; _aux++) {
          free(*(ff[_aux].effect_owners));
        free(ff[_aux].effect_owners);
          }
          free(ff);
          free(file);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int effect_id = 10;
        
          int _len_ff0 = 100;
          struct ff_device * ff = (struct ff_device *) malloc(_len_ff0*sizeof(struct ff_device));
          for(int _i0 = 0; _i0 < _len_ff0; _i0++) {
              ff[_i0].max_effects = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ff__i0__effect_owners0 = 1;
          ff[_i0].effect_owners = (struct file **) malloc(_len_ff__i0__effect_owners0*sizeof(struct file *));
          for(int _j0 = 0; _j0 < _len_ff__i0__effect_owners0; _j0++) {
            int _len_ff__i0__effect_owners1 = 1;
            ff[_i0].effect_owners[_j0] = (struct file *) malloc(_len_ff__i0__effect_owners1*sizeof(struct file));
            for(int _j1 = 0; _j1 < _len_ff__i0__effect_owners1; _j1++) {
                ff[_i0].effect_owners[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_effect_access(ff,effect_id,file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ff0; _aux++) {
          free(*(ff[_aux].effect_owners));
        free(ff[_aux].effect_owners);
          }
          free(ff);
          free(file);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int effect_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ff0 = 1;
          struct ff_device * ff = (struct ff_device *) malloc(_len_ff0*sizeof(struct ff_device));
          for(int _i0 = 0; _i0 < _len_ff0; _i0++) {
              ff[_i0].max_effects = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ff__i0__effect_owners0 = 1;
          ff[_i0].effect_owners = (struct file **) malloc(_len_ff__i0__effect_owners0*sizeof(struct file *));
          for(int _j0 = 0; _j0 < _len_ff__i0__effect_owners0; _j0++) {
            int _len_ff__i0__effect_owners1 = 1;
            ff[_i0].effect_owners[_j0] = (struct file *) malloc(_len_ff__i0__effect_owners1*sizeof(struct file));
            for(int _j1 = 0; _j1 < _len_ff__i0__effect_owners1; _j1++) {
                ff[_i0].effect_owners[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_effect_access(ff,effect_id,file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ff0; _aux++) {
          free(*(ff[_aux].effect_owners));
        free(ff[_aux].effect_owners);
          }
          free(ff);
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
