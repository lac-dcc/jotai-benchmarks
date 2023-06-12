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
typedef  scalar_t__ u32 ;
struct bpf_insn {scalar_t__ off; } ;
typedef  scalar_t__ s32 ;

/* Variables and functions */
 int ERANGE ; 
 scalar_t__ S16_MAX ; 
 scalar_t__ S16_MIN ; 

__attribute__((used)) static int bpf_adj_delta_to_off(struct bpf_insn *insn, u32 pos, u32 delta,
				u32 curr, const bool probe_pass)
{
	const s32 off_min = S16_MIN, off_max = S16_MAX;
	s32 off = insn->off;

	if (curr < pos && curr + off + 1 > pos)
		off += delta;
	else if (curr > pos + delta && curr + off + 1 <= pos + delta)
		off -= delta;
	if (off < off_min || off > off_max)
		return -ERANGE;
	if (!probe_pass)
		insn->off = off;
	return 0;
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          long pos = 100;
        
          long delta = 100;
        
          long curr = 100;
        
          const int probe_pass = 100;
        
          int _len_insn0 = 1;
          struct bpf_insn * insn = (struct bpf_insn *) malloc(_len_insn0*sizeof(struct bpf_insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
              insn[_i0].off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bpf_adj_delta_to_off(insn,pos,delta,curr,probe_pass);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          long pos = 255;
        
          long delta = 255;
        
          long curr = 255;
        
          const int probe_pass = 255;
        
          int _len_insn0 = 65025;
          struct bpf_insn * insn = (struct bpf_insn *) malloc(_len_insn0*sizeof(struct bpf_insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
              insn[_i0].off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bpf_adj_delta_to_off(insn,pos,delta,curr,probe_pass);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          long pos = 10;
        
          long delta = 10;
        
          long curr = 10;
        
          const int probe_pass = 10;
        
          int _len_insn0 = 100;
          struct bpf_insn * insn = (struct bpf_insn *) malloc(_len_insn0*sizeof(struct bpf_insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
              insn[_i0].off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bpf_adj_delta_to_off(insn,pos,delta,curr,probe_pass);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          long pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long delta = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long curr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const int probe_pass = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_insn0 = 1;
          struct bpf_insn * insn = (struct bpf_insn *) malloc(_len_insn0*sizeof(struct bpf_insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
              insn[_i0].off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bpf_adj_delta_to_off(insn,pos,delta,curr,probe_pass);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
