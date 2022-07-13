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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_3__ {int crypto_mode31; int crypto_mode9_8; int feedback_mode; int sa_rev; int hmac_muting; int extended_seq_num; int seq_num_mask; int mutable_bit_proc; int copy_pad; int copy_payload; int copy_hdr; } ;
struct TYPE_4__ {TYPE_1__ bf; scalar_t__ w; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_command_1; } ;

/* Variables and functions */

__attribute__((used)) static void set_dynamic_sa_command_1(struct dynamic_sa_ctl *sa, u32 cm,
				     u32 hmac_mc, u32 cfb, u32 esn,
				     u32 sn_mask, u32 mute, u32 cp_pad,
				     u32 cp_pay, u32 cp_hdr)
{
	sa->sa_command_1.w = 0;
	sa->sa_command_1.bf.crypto_mode31 = (cm & 4) >> 2;
	sa->sa_command_1.bf.crypto_mode9_8 = cm & 3;
	sa->sa_command_1.bf.feedback_mode = cfb,
	sa->sa_command_1.bf.sa_rev = 1;
	sa->sa_command_1.bf.hmac_muting = hmac_mc;
	sa->sa_command_1.bf.extended_seq_num = esn;
	sa->sa_command_1.bf.seq_num_mask = sn_mask;
	sa->sa_command_1.bf.mutable_bit_proc = mute;
	sa->sa_command_1.bf.copy_pad = cp_pad;
	sa->sa_command_1.bf.copy_payload = cp_pay;
	sa->sa_command_1.bf.copy_hdr = cp_hdr;
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
          int cm = 100;
          int hmac_mc = 100;
          int cfb = 100;
          int esn = 100;
          int sn_mask = 100;
          int mute = 100;
          int cp_pad = 100;
          int cp_pay = 100;
          int cp_hdr = 100;
          int _len_sa0 = 1;
          struct dynamic_sa_ctl * sa = (struct dynamic_sa_ctl *) malloc(_len_sa0*sizeof(struct dynamic_sa_ctl));
          for(int _i0 = 0; _i0 < _len_sa0; _i0++) {
            sa[_i0].sa_command_1.bf.crypto_mode31 = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.crypto_mode9_8 = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.feedback_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.sa_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.hmac_muting = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.extended_seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.seq_num_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.mutable_bit_proc = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_pad = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_hdr = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dynamic_sa_command_1(sa,cm,hmac_mc,cfb,esn,sn_mask,mute,cp_pad,cp_pay,cp_hdr);
          free(sa);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cm = 255;
          int hmac_mc = 255;
          int cfb = 255;
          int esn = 255;
          int sn_mask = 255;
          int mute = 255;
          int cp_pad = 255;
          int cp_pay = 255;
          int cp_hdr = 255;
          int _len_sa0 = 65025;
          struct dynamic_sa_ctl * sa = (struct dynamic_sa_ctl *) malloc(_len_sa0*sizeof(struct dynamic_sa_ctl));
          for(int _i0 = 0; _i0 < _len_sa0; _i0++) {
            sa[_i0].sa_command_1.bf.crypto_mode31 = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.crypto_mode9_8 = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.feedback_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.sa_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.hmac_muting = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.extended_seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.seq_num_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.mutable_bit_proc = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_pad = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_hdr = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dynamic_sa_command_1(sa,cm,hmac_mc,cfb,esn,sn_mask,mute,cp_pad,cp_pay,cp_hdr);
          free(sa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cm = 10;
          int hmac_mc = 10;
          int cfb = 10;
          int esn = 10;
          int sn_mask = 10;
          int mute = 10;
          int cp_pad = 10;
          int cp_pay = 10;
          int cp_hdr = 10;
          int _len_sa0 = 100;
          struct dynamic_sa_ctl * sa = (struct dynamic_sa_ctl *) malloc(_len_sa0*sizeof(struct dynamic_sa_ctl));
          for(int _i0 = 0; _i0 < _len_sa0; _i0++) {
            sa[_i0].sa_command_1.bf.crypto_mode31 = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.crypto_mode9_8 = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.feedback_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.sa_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.hmac_muting = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.extended_seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.seq_num_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.mutable_bit_proc = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_pad = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.bf.copy_hdr = ((-2 * (next_i()%2)) + 1) * next_i();
        sa[_i0].sa_command_1.w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dynamic_sa_command_1(sa,cm,hmac_mc,cfb,esn,sn_mask,mute,cp_pad,cp_pay,cp_hdr);
          free(sa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
