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
typedef  size_t u_char ;
typedef  int ngx_uint_t ;
struct TYPE_3__ {size_t* last; size_t* pos; scalar_t__ in_file; } ;
typedef  TYPE_1__ ngx_buf_t ;

/* Variables and functions */

__attribute__((used)) static ngx_uint_t
ngx_http_charset_recode(ngx_buf_t *b, u_char *table)
{
    u_char  *p, *last;

    last = b->last;

    for (p = b->pos; p < last; p++) {

        if (*p != table[*p]) {
            goto recode;
        }
    }

    return 0;

recode:

    do {
        if (*p != table[*p]) {
            *p = table[*p];
        }

        p++;

    } while (p < last);

    b->in_file = 0;

    return 1;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_b0 = 65025;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__last0 = 1;
          b[_i0].last = (unsigned long *) malloc(_len_b__i0__last0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_b__i0__last0; _j0++) {
            b[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__pos0 = 1;
          b[_i0].pos = (unsigned long *) malloc(_len_b__i0__pos0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_b__i0__pos0; _j0++) {
            b[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          b[_i0].in_file = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_table0 = 65025;
          unsigned long * table = (unsigned long *) malloc(_len_table0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_http_charset_recode(b,table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].last);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].pos);
          }
          free(b);
          free(table);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_b0 = 100;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__last0 = 1;
          b[_i0].last = (unsigned long *) malloc(_len_b__i0__last0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_b__i0__last0; _j0++) {
            b[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__pos0 = 1;
          b[_i0].pos = (unsigned long *) malloc(_len_b__i0__pos0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_b__i0__pos0; _j0++) {
            b[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          b[_i0].in_file = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_table0 = 100;
          unsigned long * table = (unsigned long *) malloc(_len_table0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_http_charset_recode(b,table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].last);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].pos);
          }
          free(b);
          free(table);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_b0 = 1;
          struct TYPE_3__ * b = (struct TYPE_3__ *) malloc(_len_b0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__last0 = 1;
          b[_i0].last = (unsigned long *) malloc(_len_b__i0__last0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_b__i0__last0; _j0++) {
            b[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__pos0 = 1;
          b[_i0].pos = (unsigned long *) malloc(_len_b__i0__pos0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_b__i0__pos0; _j0++) {
            b[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          b[_i0].in_file = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_table0 = 1;
          unsigned long * table = (unsigned long *) malloc(_len_table0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_http_charset_recode(b,table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].last);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].pos);
          }
          free(b);
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
