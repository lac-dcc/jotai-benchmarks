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
struct xz_dec {int pos; int crc32; } ;
struct xz_buf {scalar_t__ in_pos; scalar_t__ in_size; int* in; } ;
typedef  enum xz_ret { ____Placeholder_xz_ret } xz_ret ;

/* Variables and functions */
 int XZ_DATA_ERROR ; 
 int XZ_OK ; 
 int XZ_STREAM_END ; 

__attribute__((used)) static enum xz_ret crc32_validate(struct xz_dec *s, struct xz_buf *b)
{
	do {
		if (b->in_pos == b->in_size)
			return XZ_OK;

		if (((s->crc32 >> s->pos) & 0xFF) != b->in[b->in_pos++])
			return XZ_DATA_ERROR;

		s->pos += 8;

	} while (s->pos < 32);

	s->crc32 = 0;
	s->pos = 0;

	return XZ_STREAM_END;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_s0 = 65025;
          struct xz_dec * s = (struct xz_dec *) malloc(_len_s0*sizeof(struct xz_dec));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].crc32 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_b0 = 65025;
          struct xz_buf * b = (struct xz_buf *) malloc(_len_b0*sizeof(struct xz_buf));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].in_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          b[_i0].in_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__in0 = 1;
          b[_i0].in = (int *) malloc(_len_b__i0__in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__in0; _j0++) {
            b[_i0].in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          enum xz_ret benchRet = crc32_validate(s,b);
          free(s);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].in);
          }
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_s0 = 100;
          struct xz_dec * s = (struct xz_dec *) malloc(_len_s0*sizeof(struct xz_dec));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].crc32 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_b0 = 100;
          struct xz_buf * b = (struct xz_buf *) malloc(_len_b0*sizeof(struct xz_buf));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].in_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          b[_i0].in_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__in0 = 1;
          b[_i0].in = (int *) malloc(_len_b__i0__in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__in0; _j0++) {
            b[_i0].in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          enum xz_ret benchRet = crc32_validate(s,b);
          free(s);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].in);
          }
          free(b);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_s0 = 1;
          struct xz_dec * s = (struct xz_dec *) malloc(_len_s0*sizeof(struct xz_dec));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].crc32 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_b0 = 1;
          struct xz_buf * b = (struct xz_buf *) malloc(_len_b0*sizeof(struct xz_buf));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].in_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          b[_i0].in_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__in0 = 1;
          b[_i0].in = (int *) malloc(_len_b__i0__in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__in0; _j0++) {
            b[_i0].in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          enum xz_ret benchRet = crc32_validate(s,b);
          free(s);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].in);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
