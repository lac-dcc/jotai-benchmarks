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
struct regulator_config {int dummy; } ;
struct platform_device {int dummy; } ;
struct da9055_regulator {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static inline int da9055_regulator_dt_init(struct platform_device *pdev,
				       struct da9055_regulator *regulator,
				       struct regulator_config *config,
				       int regid)
{
	return -ENODEV;
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int regid = 100;
        
          int _len_pdev0 = 1;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regulator0 = 1;
          struct da9055_regulator * regulator = (struct da9055_regulator *) malloc(_len_regulator0*sizeof(struct da9055_regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              regulator[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_config0 = 1;
          struct regulator_config * config = (struct regulator_config *) malloc(_len_config0*sizeof(struct regulator_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
              config[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = da9055_regulator_dt_init(pdev,regulator,config,regid);
          printf("%d\n", benchRet); 
          free(pdev);
          free(regulator);
          free(config);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int regid = 255;
        
          int _len_pdev0 = 65025;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regulator0 = 65025;
          struct da9055_regulator * regulator = (struct da9055_regulator *) malloc(_len_regulator0*sizeof(struct da9055_regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              regulator[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_config0 = 65025;
          struct regulator_config * config = (struct regulator_config *) malloc(_len_config0*sizeof(struct regulator_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
              config[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = da9055_regulator_dt_init(pdev,regulator,config,regid);
          printf("%d\n", benchRet); 
          free(pdev);
          free(regulator);
          free(config);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int regid = 10;
        
          int _len_pdev0 = 100;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regulator0 = 100;
          struct da9055_regulator * regulator = (struct da9055_regulator *) malloc(_len_regulator0*sizeof(struct da9055_regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              regulator[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_config0 = 100;
          struct regulator_config * config = (struct regulator_config *) malloc(_len_config0*sizeof(struct regulator_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
              config[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = da9055_regulator_dt_init(pdev,regulator,config,regid);
          printf("%d\n", benchRet); 
          free(pdev);
          free(regulator);
          free(config);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int regid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pdev0 = 1;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
              pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_regulator0 = 1;
          struct da9055_regulator * regulator = (struct da9055_regulator *) malloc(_len_regulator0*sizeof(struct da9055_regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              regulator[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_config0 = 1;
          struct regulator_config * config = (struct regulator_config *) malloc(_len_config0*sizeof(struct regulator_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
              config[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = da9055_regulator_dt_init(pdev,regulator,config,regid);
          printf("%d\n", benchRet); 
          free(pdev);
          free(regulator);
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
