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
typedef  int WORD ;
typedef  size_t UINT ;
typedef  int /*<<< orphan*/  FRESULT ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 int CodePage ; 
#define  Ct437 147 
#define  Ct720 146 
#define  Ct737 145 
#define  Ct771 144 
#define  Ct775 143 
#define  Ct850 142 
#define  Ct852 141 
#define  Ct857 140 
#define  Ct860 139 
#define  Ct861 138 
#define  Ct862 137 
#define  Ct863 136 
#define  Ct864 135 
#define  Ct865 134 
#define  Ct866 133 
#define  Ct869 132 
 int /*<<< orphan*/ * DbcTbl ; 
#define  Dc932 131 
#define  Dc936 130 
#define  Dc949 129 
#define  Dc950 128 
 int /*<<< orphan*/ * ExCvt ; 
 int /*<<< orphan*/  FR_INVALID_PARAMETER ; 
 int /*<<< orphan*/  FR_OK ; 

FRESULT f_setcp (
    WORD cp     /* Value to be set as active code page */
)
{
    static const WORD       validcp[] = {  437,   720,   737,   771,   775,   850,   852,   857,   860,   861,   862,   863,   864,   865,   866,   869,   932,   936,   949,   950, 0};
    static const BYTE* const tables[] = {Ct437, Ct720, Ct737, Ct771, Ct775, Ct850, Ct852, Ct857, Ct860, Ct861, Ct862, Ct863, Ct864, Ct865, Ct866, Ct869, Dc932, Dc936, Dc949, Dc950, 0};
    UINT i;


    for (i = 0; validcp[i] != 0 && validcp[i] != cp; i++) ; /* Find the code page */
    if (validcp[i] != cp) return FR_INVALID_PARAMETER;  /* Not found? */

    CodePage = cp;
    if (cp >= 900) {    /* DBCS */
        ExCvt = 0;
        DbcTbl = tables[i];
    } else {            /* SBCS */
        ExCvt = tables[i];
        DbcTbl = 0;
    }
    return FR_OK;
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 383
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 133
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 109
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 131
          // ------------------------------- 

          int cp = 100;
        
          int benchRet = f_setcp(cp);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 383
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 133
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 109
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 131
          // ------------------------------- 

          int cp = 255;
        
          int benchRet = f_setcp(cp);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 383
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 133
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 109
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 131
          // ------------------------------- 

          int cp = 10;
        
          int benchRet = f_setcp(cp);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 383
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 133
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 109
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 131
          // ------------------------------- 

          int cp = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = f_setcp(cp);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
