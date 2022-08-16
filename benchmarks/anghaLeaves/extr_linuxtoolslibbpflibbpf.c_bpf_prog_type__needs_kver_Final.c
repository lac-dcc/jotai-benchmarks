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

/* Type definitions */
typedef  enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;

/* Variables and functions */
#define  BPF_PROG_TYPE_CGROUP_DEVICE 149 
#define  BPF_PROG_TYPE_CGROUP_SKB 148 
#define  BPF_PROG_TYPE_CGROUP_SOCK 147 
#define  BPF_PROG_TYPE_CGROUP_SOCK_ADDR 146 
#define  BPF_PROG_TYPE_KPROBE 145 
#define  BPF_PROG_TYPE_LIRC_MODE2 144 
#define  BPF_PROG_TYPE_LWT_IN 143 
#define  BPF_PROG_TYPE_LWT_OUT 142 
#define  BPF_PROG_TYPE_LWT_SEG6LOCAL 141 
#define  BPF_PROG_TYPE_LWT_XMIT 140 
#define  BPF_PROG_TYPE_PERF_EVENT 139 
#define  BPF_PROG_TYPE_RAW_TRACEPOINT 138 
#define  BPF_PROG_TYPE_SCHED_ACT 137 
#define  BPF_PROG_TYPE_SCHED_CLS 136 
#define  BPF_PROG_TYPE_SK_MSG 135 
#define  BPF_PROG_TYPE_SK_REUSEPORT 134 
#define  BPF_PROG_TYPE_SK_SKB 133 
#define  BPF_PROG_TYPE_SOCKET_FILTER 132 
#define  BPF_PROG_TYPE_SOCK_OPS 131 
#define  BPF_PROG_TYPE_TRACEPOINT 130 
#define  BPF_PROG_TYPE_UNSPEC 129 
#define  BPF_PROG_TYPE_XDP 128 

__attribute__((used)) static bool bpf_prog_type__needs_kver(enum bpf_prog_type type)
{
	switch (type) {
	case BPF_PROG_TYPE_SOCKET_FILTER:
	case BPF_PROG_TYPE_SCHED_CLS:
	case BPF_PROG_TYPE_SCHED_ACT:
	case BPF_PROG_TYPE_XDP:
	case BPF_PROG_TYPE_CGROUP_SKB:
	case BPF_PROG_TYPE_CGROUP_SOCK:
	case BPF_PROG_TYPE_LWT_IN:
	case BPF_PROG_TYPE_LWT_OUT:
	case BPF_PROG_TYPE_LWT_XMIT:
	case BPF_PROG_TYPE_LWT_SEG6LOCAL:
	case BPF_PROG_TYPE_SOCK_OPS:
	case BPF_PROG_TYPE_SK_SKB:
	case BPF_PROG_TYPE_CGROUP_DEVICE:
	case BPF_PROG_TYPE_SK_MSG:
	case BPF_PROG_TYPE_CGROUP_SOCK_ADDR:
	case BPF_PROG_TYPE_LIRC_MODE2:
	case BPF_PROG_TYPE_SK_REUSEPORT:
		return false;
	case BPF_PROG_TYPE_UNSPEC:
	case BPF_PROG_TYPE_KPROBE:
	case BPF_PROG_TYPE_TRACEPOINT:
	case BPF_PROG_TYPE_PERF_EVENT:
	case BPF_PROG_TYPE_RAW_TRACEPOINT:
	default:
		return true;
	}
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
          enum bpf_prog_type type = 0;
          int benchRet = bpf_prog_type__needs_kver(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
