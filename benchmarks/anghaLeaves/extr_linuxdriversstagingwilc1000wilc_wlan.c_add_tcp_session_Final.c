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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  void* u32 ;
struct TYPE_2__ {void* dst_port; void* src_port; scalar_t__ bigger_ack_num; void* seq_num; } ;

/* Variables and functions */
 int MAX_TCP_SESSION ; 
 TYPE_1__* ack_session_info ; 
 int tcp_session ; 

__attribute__((used)) static inline int add_tcp_session(u32 src_prt, u32 dst_prt, u32 seq)
{
	if (tcp_session < 2 * MAX_TCP_SESSION) {
		ack_session_info[tcp_session].seq_num = seq;
		ack_session_info[tcp_session].bigger_ack_num = 0;
		ack_session_info[tcp_session].src_port = src_prt;
		ack_session_info[tcp_session].dst_port = dst_prt;
		tcp_session++;
	}
	return 0;
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
          void * src_prt;
          void * dst_prt;
          void * seq;
          int benchRet = add_tcp_session(src_prt,dst_prt,seq);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          void * src_prt;
          void * dst_prt;
          void * seq;
          int benchRet = add_tcp_session(src_prt,dst_prt,seq);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * src_prt;
          void * dst_prt;
          void * seq;
          int benchRet = add_tcp_session(src_prt,dst_prt,seq);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
