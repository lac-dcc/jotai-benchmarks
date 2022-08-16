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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_3__ {int save_hash_state; int save_iv; int load_hash_state; int load_iv; int hdr_proc; int hash_alg; int cipher_alg; int pad_type; int extend_pad; int op_group; int opcode; int dir; } ;
struct TYPE_4__ {TYPE_1__ bf; scalar_t__ w; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_command_0; } ;

/* Variables and functions */

__attribute__((used)) static void set_dynamic_sa_command_0(struct dynamic_sa_ctl *sa, u32 save_h,
				     u32 save_iv, u32 ld_h, u32 ld_iv,
				     u32 hdr_proc, u32 h, u32 c, u32 pad_type,
				     u32 op_grp, u32 op, u32 dir)
{
	sa->sa_command_0.w = 0;
	sa->sa_command_0.bf.save_hash_state = save_h;
	sa->sa_command_0.bf.save_iv = save_iv;
	sa->sa_command_0.bf.load_hash_state = ld_h;
	sa->sa_command_0.bf.load_iv = ld_iv;
	sa->sa_command_0.bf.hdr_proc = hdr_proc;
	sa->sa_command_0.bf.hash_alg = h;
	sa->sa_command_0.bf.cipher_alg = c;
	sa->sa_command_0.bf.pad_type = pad_type & 3;
	sa->sa_command_0.bf.extend_pad = pad_type >> 2;
	sa->sa_command_0.bf.op_group = op_grp;
	sa->sa_command_0.bf.opcode = op;
	sa->sa_command_0.bf.dir = dir;
}


// ------------------------------------------------------------------------- //




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
          int save_h = 100;
          int save_iv = 100;
          int ld_h = 100;
          int ld_iv = 100;
          int hdr_proc = 100;
          int h = 100;
          int c = 100;
          int pad_type = 100;
          int op_grp = 100;
          int op = 100;
          int dir = 100;
          int _len_sa0 = 1;
          struct dynamic_sa_ctl * sa = (struct dynamic_sa_ctl *) malloc(_len_sa0*sizeof(struct dynamic_sa_ctl));
          for(int _i0 = 0; _i0 < _len_sa0; _i0++) {
            sa[_i0].sa_command_0.bf.save_hash_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.save_iv = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.load_hash_state = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.load_iv = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.hdr_proc = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.hash_alg = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.cipher_alg = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.pad_type = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.extend_pad = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.op_group = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.bf.dir = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_0.w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dynamic_sa_command_0(sa,save_h,save_iv,ld_h,ld_iv,hdr_proc,h,c,pad_type,op_grp,op,dir);
          free(sa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
