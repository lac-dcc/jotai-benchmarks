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
typedef  int uint8_t ;
struct attack_option {int key; char* val; } ;

/* Variables and functions */

char *attack_get_opt_str(uint8_t opts_len, struct attack_option *opts, uint8_t opt, char *def)
{
    int i;

    for (i = 0; i < opts_len; i++)
    {
        if (opts[i].key == opt)
            return opts[i].val;
    }

    return def;
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 3840
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 1287
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 1287
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 1287
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 1287
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1286
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 1543
          // ------------------------------- 

          int opts_len = 255;
        
          int opt = 255;
        
          int _len_opts0 = 65025;
          struct attack_option * opts = (struct attack_option *) malloc(_len_opts0*sizeof(struct attack_option));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
              opts[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opts__i0__val0 = 1;
          opts[_i0].val = (char *) malloc(_len_opts__i0__val0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_opts__i0__val0; _j0++) {
            opts[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_def0 = 65025;
          char * def = (char *) malloc(_len_def0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_def0; _i0++) {
            def[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = attack_get_opt_str(opts_len,opts,opt,def);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_opts0; _aux++) {
          free(opts[_aux].val);
          }
          free(opts);
          free(def);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 165
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 62
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 61
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 73
          // ------------------------------- 

          int opts_len = 10;
        
          int opt = 10;
        
          int _len_opts0 = 100;
          struct attack_option * opts = (struct attack_option *) malloc(_len_opts0*sizeof(struct attack_option));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
              opts[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opts__i0__val0 = 1;
          opts[_i0].val = (char *) malloc(_len_opts__i0__val0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_opts__i0__val0; _j0++) {
            opts[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_def0 = 100;
          char * def = (char *) malloc(_len_def0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_def0; _i0++) {
            def[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = attack_get_opt_str(opts_len,opts,opt,def);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_opts0; _aux++) {
          free(opts[_aux].val);
          }
          free(opts);
          free(def);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int opts_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int opt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_opts0 = 1;
          struct attack_option * opts = (struct attack_option *) malloc(_len_opts0*sizeof(struct attack_option));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
              opts[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opts__i0__val0 = 1;
          opts[_i0].val = (char *) malloc(_len_opts__i0__val0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_opts__i0__val0; _j0++) {
            opts[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_def0 = 1;
          char * def = (char *) malloc(_len_def0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_def0; _i0++) {
            def[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = attack_get_opt_str(opts_len,opts,opt,def);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_opts0; _aux++) {
          free(opts[_aux].val);
          }
          free(opts);
          free(def);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
