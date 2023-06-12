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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u64 ;
typedef  size_t u32 ;
struct TYPE_4__ {size_t cs_len; size_t* cs_buf; } ;
typedef  TYPE_1__ cs_t ;

/* Variables and functions */
 size_t CHARSIZ ; 

void sp_exec (u64 ctx, char *pw_buf, cs_t *root_css_buf, cs_t *markov_css_buf, u32 start, u32 stop)
{
  u64 v = ctx;

  cs_t *cs = &root_css_buf[start];

  u32 i;

  for (i = start; i < stop; i++)
  {
    const u64 m = v % cs->cs_len;
    const u64 d = v / cs->cs_len;

    v = d;

    const u32 k = cs->cs_buf[m];

    pw_buf[i - start] = (char) k;

    cs = &markov_css_buf[(i * CHARSIZ) + k];
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned long ctx = 100;
        
          unsigned long start = 100;
        
          unsigned long stop = 100;
        
          int _len_pw_buf0 = 1;
          char * pw_buf = (char *) malloc(_len_pw_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pw_buf0; _i0++) {
            pw_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_root_css_buf0 = 1;
          struct TYPE_4__ * root_css_buf = (struct TYPE_4__ *) malloc(_len_root_css_buf0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_root_css_buf0; _i0++) {
              root_css_buf[_i0].cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_root_css_buf__i0__cs_buf0 = 1;
          root_css_buf[_i0].cs_buf = (unsigned long *) malloc(_len_root_css_buf__i0__cs_buf0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_root_css_buf__i0__cs_buf0; _j0++) {
            root_css_buf[_i0].cs_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_markov_css_buf0 = 1;
          struct TYPE_4__ * markov_css_buf = (struct TYPE_4__ *) malloc(_len_markov_css_buf0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_markov_css_buf0; _i0++) {
              markov_css_buf[_i0].cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_markov_css_buf__i0__cs_buf0 = 1;
          markov_css_buf[_i0].cs_buf = (unsigned long *) malloc(_len_markov_css_buf__i0__cs_buf0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_markov_css_buf__i0__cs_buf0; _j0++) {
            markov_css_buf[_i0].cs_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          sp_exec(ctx,pw_buf,root_css_buf,markov_css_buf,start,stop);
          free(pw_buf);
          for(int _aux = 0; _aux < _len_root_css_buf0; _aux++) {
          free(root_css_buf[_aux].cs_buf);
          }
          free(root_css_buf);
          for(int _aux = 0; _aux < _len_markov_css_buf0; _aux++) {
          free(markov_css_buf[_aux].cs_buf);
          }
          free(markov_css_buf);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned long ctx = 255;
        
          unsigned long start = 255;
        
          unsigned long stop = 255;
        
          int _len_pw_buf0 = 65025;
          char * pw_buf = (char *) malloc(_len_pw_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pw_buf0; _i0++) {
            pw_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_root_css_buf0 = 65025;
          struct TYPE_4__ * root_css_buf = (struct TYPE_4__ *) malloc(_len_root_css_buf0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_root_css_buf0; _i0++) {
              root_css_buf[_i0].cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_root_css_buf__i0__cs_buf0 = 1;
          root_css_buf[_i0].cs_buf = (unsigned long *) malloc(_len_root_css_buf__i0__cs_buf0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_root_css_buf__i0__cs_buf0; _j0++) {
            root_css_buf[_i0].cs_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_markov_css_buf0 = 65025;
          struct TYPE_4__ * markov_css_buf = (struct TYPE_4__ *) malloc(_len_markov_css_buf0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_markov_css_buf0; _i0++) {
              markov_css_buf[_i0].cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_markov_css_buf__i0__cs_buf0 = 1;
          markov_css_buf[_i0].cs_buf = (unsigned long *) malloc(_len_markov_css_buf__i0__cs_buf0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_markov_css_buf__i0__cs_buf0; _j0++) {
            markov_css_buf[_i0].cs_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          sp_exec(ctx,pw_buf,root_css_buf,markov_css_buf,start,stop);
          free(pw_buf);
          for(int _aux = 0; _aux < _len_root_css_buf0; _aux++) {
          free(root_css_buf[_aux].cs_buf);
          }
          free(root_css_buf);
          for(int _aux = 0; _aux < _len_markov_css_buf0; _aux++) {
          free(markov_css_buf[_aux].cs_buf);
          }
          free(markov_css_buf);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned long ctx = 10;
        
          unsigned long start = 10;
        
          unsigned long stop = 10;
        
          int _len_pw_buf0 = 100;
          char * pw_buf = (char *) malloc(_len_pw_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pw_buf0; _i0++) {
            pw_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_root_css_buf0 = 100;
          struct TYPE_4__ * root_css_buf = (struct TYPE_4__ *) malloc(_len_root_css_buf0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_root_css_buf0; _i0++) {
              root_css_buf[_i0].cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_root_css_buf__i0__cs_buf0 = 1;
          root_css_buf[_i0].cs_buf = (unsigned long *) malloc(_len_root_css_buf__i0__cs_buf0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_root_css_buf__i0__cs_buf0; _j0++) {
            root_css_buf[_i0].cs_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_markov_css_buf0 = 100;
          struct TYPE_4__ * markov_css_buf = (struct TYPE_4__ *) malloc(_len_markov_css_buf0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_markov_css_buf0; _i0++) {
              markov_css_buf[_i0].cs_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_markov_css_buf__i0__cs_buf0 = 1;
          markov_css_buf[_i0].cs_buf = (unsigned long *) malloc(_len_markov_css_buf__i0__cs_buf0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_markov_css_buf__i0__cs_buf0; _j0++) {
            markov_css_buf[_i0].cs_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          sp_exec(ctx,pw_buf,root_css_buf,markov_css_buf,start,stop);
          free(pw_buf);
          for(int _aux = 0; _aux < _len_root_css_buf0; _aux++) {
          free(root_css_buf[_aux].cs_buf);
          }
          free(root_css_buf);
          for(int _aux = 0; _aux < _len_markov_css_buf0; _aux++) {
          free(markov_css_buf[_aux].cs_buf);
          }
          free(markov_css_buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
