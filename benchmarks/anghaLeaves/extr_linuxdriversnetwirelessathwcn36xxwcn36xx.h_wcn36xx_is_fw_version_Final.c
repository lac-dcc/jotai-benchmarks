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
typedef  scalar_t__ u8 ;
struct wcn36xx {scalar_t__ fw_major; scalar_t__ fw_minor; scalar_t__ fw_version; scalar_t__ fw_revision; } ;

/* Variables and functions */

__attribute__((used)) static inline bool wcn36xx_is_fw_version(struct wcn36xx *wcn,
					 u8 major,
					 u8 minor,
					 u8 version,
					 u8 revision)
{
	return (wcn->fw_major == major &&
		wcn->fw_minor == minor &&
		wcn->fw_version == version &&
		wcn->fw_revision == revision);
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

          long major = 100;
        
          long minor = 100;
        
          long version = 100;
        
          long revision = 100;
        
          int _len_wcn0 = 1;
          struct wcn36xx * wcn = (struct wcn36xx *) malloc(_len_wcn0*sizeof(struct wcn36xx));
          for(int _i0 = 0; _i0 < _len_wcn0; _i0++) {
              wcn[_i0].fw_major = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_minor = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wcn36xx_is_fw_version(wcn,major,minor,version,revision);
          printf("%d\n", benchRet); 
          free(wcn);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          long major = 255;
        
          long minor = 255;
        
          long version = 255;
        
          long revision = 255;
        
          int _len_wcn0 = 65025;
          struct wcn36xx * wcn = (struct wcn36xx *) malloc(_len_wcn0*sizeof(struct wcn36xx));
          for(int _i0 = 0; _i0 < _len_wcn0; _i0++) {
              wcn[_i0].fw_major = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_minor = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wcn36xx_is_fw_version(wcn,major,minor,version,revision);
          printf("%d\n", benchRet); 
          free(wcn);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
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

          long major = 10;
        
          long minor = 10;
        
          long version = 10;
        
          long revision = 10;
        
          int _len_wcn0 = 100;
          struct wcn36xx * wcn = (struct wcn36xx *) malloc(_len_wcn0*sizeof(struct wcn36xx));
          for(int _i0 = 0; _i0 < _len_wcn0; _i0++) {
              wcn[_i0].fw_major = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_minor = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wcn36xx_is_fw_version(wcn,major,minor,version,revision);
          printf("%d\n", benchRet); 
          free(wcn);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 35
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

          long major = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long minor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long version = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long revision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_wcn0 = 1;
          struct wcn36xx * wcn = (struct wcn36xx *) malloc(_len_wcn0*sizeof(struct wcn36xx));
          for(int _i0 = 0; _i0 < _len_wcn0; _i0++) {
              wcn[_i0].fw_major = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_minor = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          wcn[_i0].fw_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wcn36xx_is_fw_version(wcn,major,minor,version,revision);
          printf("%d\n", benchRet); 
          free(wcn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
