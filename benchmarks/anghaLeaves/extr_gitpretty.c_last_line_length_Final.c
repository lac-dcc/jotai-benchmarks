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
struct strbuf {int len; char* buf; } ;

/* Variables and functions */

__attribute__((used)) static int last_line_length(struct strbuf *sb)
{
	int i;

	/* How many bytes are already used on the last line? */
	for (i = sb->len - 1; i >= 0; i--)
		if (sb->buf[i] == '\n')
			break;
	return sb->len - (i + 1);
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
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

          int _len_sb0 = 65025;
          struct strbuf * sb = (struct strbuf *) malloc(_len_sb0*sizeof(struct strbuf));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              sb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sb__i0__buf0 = 1;
          sb[_i0].buf = (char *) malloc(_len_sb__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sb__i0__buf0; _j0++) {
            sb[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = last_line_length(sb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].buf);
          }
          free(sb);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
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

          int _len_sb0 = 100;
          struct strbuf * sb = (struct strbuf *) malloc(_len_sb0*sizeof(struct strbuf));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              sb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sb__i0__buf0 = 1;
          sb[_i0].buf = (char *) malloc(_len_sb__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sb__i0__buf0; _j0++) {
            sb[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = last_line_length(sb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].buf);
          }
          free(sb);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
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

          int _len_sb0 = 1;
          struct strbuf * sb = (struct strbuf *) malloc(_len_sb0*sizeof(struct strbuf));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              sb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sb__i0__buf0 = 1;
          sb[_i0].buf = (char *) malloc(_len_sb__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sb__i0__buf0; _j0++) {
            sb[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = last_line_length(sb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].buf);
          }
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
