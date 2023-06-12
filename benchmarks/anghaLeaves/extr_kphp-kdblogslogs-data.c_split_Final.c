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
       0            empty\n\
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

/* Variables and functions */

void split (char *s, char **f, int *fn, int limit) {
  int bal = 0;
  int cur = 0;
  int ins = 0;
#define add(s) if (cur < limit) {f[cur++] = s;} else {*fn = 0; return;}

  *fn = 0;
  add (s);
  while (*s) {
    if (*s == '\'') {
      ins ^= 1;
    } else if (*s == '(') {
      if (!ins) {
        bal++;
      }
    } else if (*s == ')') {
      if (!ins) {
        bal--;
      }
    } else if (*s == ',' && bal == 0 && !ins) {
      *s = 0;
      add (s + 1);
    }
    s++;
  }

  *fn = cur;
#undef add
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_s0 = 1;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_f0 = 1;
          char ** f = (char **) malloc(_len_f0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            int _len_f1 = 1;
            f[_i0] = (char *) malloc(_len_f1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_f1; _i1++) {
              f[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_fn0 = 1;
          int * fn = (int *) malloc(_len_fn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          split(s,f,fn,limit);
          free(s);
          for(int i1 = 0; i1 < _len_f0; i1++) {
              free(f[i1]);
          }
          free(f);
          free(fn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
