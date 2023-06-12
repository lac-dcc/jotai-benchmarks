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
struct TYPE_3__ {int parent_code; int string_code; int char_code; int match_len; } ;
typedef  TYPE_1__ MLZDict ;

/* Variables and functions */
 int FIRST_CODE ; 

__attribute__((used)) static void set_new_entry_dict(MLZDict* dict, int string_code, int parent_code, int char_code) {
    dict[string_code].parent_code = parent_code;
    dict[string_code].string_code = string_code;
    dict[string_code].char_code   = char_code;
    if (parent_code < FIRST_CODE) {
        dict[string_code].match_len = 2;
    } else {
        dict[string_code].match_len = (dict[parent_code].match_len) + 1;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int string_code = 255;
        
          int parent_code = 255;
        
          int char_code = 255;
        
          int _len_dict0 = 65025;
          struct TYPE_3__ * dict = (struct TYPE_3__ *) malloc(_len_dict0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dict0; _i0++) {
              dict[_i0].parent_code = ((-2 * (next_i()%2)) + 1) * next_i();
          dict[_i0].string_code = ((-2 * (next_i()%2)) + 1) * next_i();
          dict[_i0].char_code = ((-2 * (next_i()%2)) + 1) * next_i();
          dict[_i0].match_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_new_entry_dict(dict,string_code,parent_code,char_code);
          free(dict);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int string_code = 10;
        
          int parent_code = 10;
        
          int char_code = 10;
        
          int _len_dict0 = 100;
          struct TYPE_3__ * dict = (struct TYPE_3__ *) malloc(_len_dict0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dict0; _i0++) {
              dict[_i0].parent_code = ((-2 * (next_i()%2)) + 1) * next_i();
          dict[_i0].string_code = ((-2 * (next_i()%2)) + 1) * next_i();
          dict[_i0].char_code = ((-2 * (next_i()%2)) + 1) * next_i();
          dict[_i0].match_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_new_entry_dict(dict,string_code,parent_code,char_code);
          free(dict);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
