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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct hm_header_st {unsigned char type; size_t msg_len; unsigned short seq; size_t frag_off; size_t frag_len; } ;
struct TYPE_5__ {TYPE_1__* d1; } ;
struct TYPE_4__ {struct hm_header_st w_msg_hdr; } ;
typedef  TYPE_2__ SSL ;

/* Variables and functions */

__attribute__((used)) static void
dtls1_set_message_header_int(SSL *s, unsigned char mt,
                             size_t len, unsigned short seq_num,
                             size_t frag_off, size_t frag_len)
{
    struct hm_header_st *msg_hdr = &s->d1->w_msg_hdr;

    msg_hdr->type = mt;
    msg_hdr->msg_len = len;
    msg_hdr->seq = seq_num;
    msg_hdr->frag_off = frag_off;
    msg_hdr->frag_len = frag_len;
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
          unsigned char mt = 100;
          unsigned long len = 100;
          unsigned short seq_num = 100;
          unsigned long frag_off = 100;
          unsigned long frag_len = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__d10 = 1;
          s[_i0].d1 = (struct TYPE_4__ *) malloc(_len_s__i0__d10*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__d10; _j0++) {
            s[_i0].d1->w_msg_hdr.type = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].d1->w_msg_hdr.msg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].d1->w_msg_hdr.seq = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].d1->w_msg_hdr.frag_off = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].d1->w_msg_hdr.frag_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dtls1_set_message_header_int(s,mt,len,seq_num,frag_off,frag_len);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].d1);
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
