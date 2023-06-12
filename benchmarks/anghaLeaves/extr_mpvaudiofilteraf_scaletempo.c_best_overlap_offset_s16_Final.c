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
struct priv {int* table_window; int* buf_overlap; long num_channels; int* buf_pre_corr; long samples_overlap; int frames_search; scalar_t__ buf_queue; } ;
typedef  scalar_t__ int64_t ;
typedef  int int32_t ;
typedef  int int16_t ;

/* Variables and functions */
 scalar_t__ INT64_MIN ; 

__attribute__((used)) static int best_overlap_offset_s16(struct priv *s)
{
    int64_t best_corr = INT64_MIN;
    int best_off = 0;

    int32_t *pw  = s->table_window;
    int16_t *po  = s->buf_overlap;
    po += s->num_channels;
    int32_t *ppc = s->buf_pre_corr;
    for (long i = s->num_channels; i < s->samples_overlap; i++)
        *ppc++ = (*pw++ **po++) >> 15;

    int16_t *search_start = (int16_t *)s->buf_queue + s->num_channels;
    for (int off = 0; off < s->frames_search; off++) {
        int64_t corr = 0;
        int16_t *ps = search_start;
        ppc = s->buf_pre_corr;
        ppc += s->samples_overlap - s->num_channels;
        ps  += s->samples_overlap - s->num_channels;
        long i  = -(s->samples_overlap - s->num_channels);
        do {
            corr += ppc[i + 0] * ps[i + 0];
            corr += ppc[i + 1] * ps[i + 1];
            corr += ppc[i + 2] * ps[i + 2];
            corr += ppc[i + 3] * ps[i + 3];
            i += 4;
        } while (i < 0);
        if (corr > best_corr) {
            best_corr = corr;
            best_off  = off;
        }
        search_start += s->num_channels;
    }

    return best_off * 2 * s->num_channels;
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
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 36
          // ------------------------------- 

          int _len_s0 = 65025;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__table_window0 = 1;
          s[_i0].table_window = (int *) malloc(_len_s__i0__table_window0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__table_window0; _j0++) {
            s[_i0].table_window[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (int *) malloc(_len_s__i0__buf_overlap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf_pre_corr0 = 1;
          s[_i0].buf_pre_corr = (int *) malloc(_len_s__i0__buf_pre_corr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_pre_corr0; _j0++) {
            s[_i0].buf_pre_corr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].frames_search = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = best_overlap_offset_s16(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_window);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_pre_corr);
          }
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 36
          // ------------------------------- 

          int _len_s0 = 100;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__table_window0 = 1;
          s[_i0].table_window = (int *) malloc(_len_s__i0__table_window0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__table_window0; _j0++) {
            s[_i0].table_window[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (int *) malloc(_len_s__i0__buf_overlap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf_pre_corr0 = 1;
          s[_i0].buf_pre_corr = (int *) malloc(_len_s__i0__buf_pre_corr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_pre_corr0; _j0++) {
            s[_i0].buf_pre_corr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].frames_search = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = best_overlap_offset_s16(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_window);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_pre_corr);
          }
          free(s);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 36
          // ------------------------------- 

          int _len_s0 = 1;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__table_window0 = 1;
          s[_i0].table_window = (int *) malloc(_len_s__i0__table_window0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__table_window0; _j0++) {
            s[_i0].table_window[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (int *) malloc(_len_s__i0__buf_overlap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf_pre_corr0 = 1;
          s[_i0].buf_pre_corr = (int *) malloc(_len_s__i0__buf_pre_corr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_pre_corr0; _j0++) {
            s[_i0].buf_pre_corr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].frames_search = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = best_overlap_offset_s16(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_window);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_pre_corr);
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
