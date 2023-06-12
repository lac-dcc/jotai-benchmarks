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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int result_maxsize; } ;
struct TYPE_6__ {TYPE_1__ string_data; } ;
struct TYPE_7__ {int type; TYPE_2__ _; } ;
typedef  TYPE_3__ UI_STRING ;

/* Variables and functions */
#define  UIT_BOOLEAN 133 
#define  UIT_ERROR 132 
#define  UIT_INFO 131 
#define  UIT_NONE 130 
#define  UIT_PROMPT 129 
#define  UIT_VERIFY 128 

int UI_get_result_maxsize(UI_STRING *uis)
{
    switch (uis->type) {
    case UIT_PROMPT:
    case UIT_VERIFY:
        return uis->_.string_data.result_maxsize;
    case UIT_NONE:
    case UIT_INFO:
    case UIT_ERROR:
    case UIT_BOOLEAN:
        break;
    }
    return -1;
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
          int _len_uis0 = 65025;
          struct TYPE_7__ * uis = (struct TYPE_7__ *) malloc(_len_uis0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_uis0; _i0++) {
              uis[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          uis[_i0]._.string_data.result_maxsize = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = UI_get_result_maxsize(uis);
          printf("%d\n", benchRet); 
          free(uis);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_uis0 = 100;
          struct TYPE_7__ * uis = (struct TYPE_7__ *) malloc(_len_uis0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_uis0; _i0++) {
              uis[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          uis[_i0]._.string_data.result_maxsize = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = UI_get_result_maxsize(uis);
          printf("%d\n", benchRet); 
          free(uis);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_uis0 = 1;
          struct TYPE_7__ * uis = (struct TYPE_7__ *) malloc(_len_uis0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_uis0; _i0++) {
              uis[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          uis[_i0]._.string_data.result_maxsize = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = UI_get_result_maxsize(uis);
          printf("%d\n", benchRet); 
          free(uis);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
