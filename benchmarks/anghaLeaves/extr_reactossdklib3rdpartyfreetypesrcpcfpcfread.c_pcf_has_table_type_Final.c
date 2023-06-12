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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t type; } ;
typedef  TYPE_1__* PCF_Table ;
typedef  size_t FT_ULong ;
typedef  int /*<<< orphan*/  FT_Bool ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static FT_Bool
  pcf_has_table_type( PCF_Table  tables,
                      FT_ULong   ntables, /* same as PCF_Toc->count */
                      FT_ULong   type )
  {
    FT_ULong  i;


    for ( i = 0; i < ntables; i++ )
      if ( tables[i].type == type )
        return TRUE;

    return FALSE;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 3329
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 1285
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 1284
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 1284
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1539
          // ------------------------------- 

          unsigned long ntables = 255;
        
          unsigned long type = 255;
        
          int _len_tables0 = 65025;
          struct TYPE_3__ * tables = (struct TYPE_3__ *) malloc(_len_tables0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tables0; _i0++) {
              tables[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pcf_has_table_type(tables,ntables,type);
          printf("%d\n", benchRet); 
          free(tables);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 144
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 60
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 69
          // ------------------------------- 

          unsigned long ntables = 10;
        
          unsigned long type = 10;
        
          int _len_tables0 = 100;
          struct TYPE_3__ * tables = (struct TYPE_3__ *) malloc(_len_tables0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tables0; _i0++) {
              tables[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pcf_has_table_type(tables,ntables,type);
          printf("%d\n", benchRet); 
          free(tables);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned long ntables = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_tables0 = 1;
          struct TYPE_3__ * tables = (struct TYPE_3__ *) malloc(_len_tables0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tables0; _i0++) {
              tables[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pcf_has_table_type(tables,ntables,type);
          printf("%d\n", benchRet); 
          free(tables);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
