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
struct priv {int* buf_overlap; int samples_overlap; scalar_t__ buf_queue; int /*<<< orphan*/ * table_blend; } ;
typedef  int /*<<< orphan*/  int32_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void output_overlap_s16(struct priv *s, void *buf_out,
                               int bytes_off)
{
    int16_t *pout = buf_out;
    int32_t *pb   = s->table_blend;
    int16_t *po   = s->buf_overlap;
    int16_t *pin  = (int16_t *)(s->buf_queue + bytes_off);
    for (int i = 0; i < s->samples_overlap; i++) {
        *pout++ = *po - ((*pb++ *(*po - *pin++)) >> 16);
        po++;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int bytes_off = 100;
        
          int _len_s0 = 1;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (int *) malloc(_len_s__i0__buf_overlap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__table_blend0 = 1;
          s[_i0].table_blend = (int *) malloc(_len_s__i0__table_blend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__table_blend0; _j0++) {
            s[_i0].table_blend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * buf_out;
        
          output_overlap_s16(s,buf_out,bytes_off);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_blend);
          }
          free(s);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int bytes_off = 255;
        
          int _len_s0 = 65025;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (int *) malloc(_len_s__i0__buf_overlap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__table_blend0 = 1;
          s[_i0].table_blend = (int *) malloc(_len_s__i0__table_blend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__table_blend0; _j0++) {
            s[_i0].table_blend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * buf_out;
        
          output_overlap_s16(s,buf_out,bytes_off);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_blend);
          }
          free(s);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int bytes_off = 10;
        
          int _len_s0 = 100;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (int *) malloc(_len_s__i0__buf_overlap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__table_blend0 = 1;
          s[_i0].table_blend = (int *) malloc(_len_s__i0__table_blend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__table_blend0; _j0++) {
            s[_i0].table_blend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * buf_out;
        
          output_overlap_s16(s,buf_out,bytes_off);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_blend);
          }
          free(s);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int bytes_off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_s0 = 1;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (int *) malloc(_len_s__i0__buf_overlap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__table_blend0 = 1;
          s[_i0].table_blend = (int *) malloc(_len_s__i0__table_blend0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__table_blend0; _j0++) {
            s[_i0].table_blend[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * buf_out;
        
          output_overlap_s16(s,buf_out,bytes_off);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_blend);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
