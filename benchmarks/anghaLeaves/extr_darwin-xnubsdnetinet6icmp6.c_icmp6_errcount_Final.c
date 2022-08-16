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
struct icmp6errstat {int /*<<< orphan*/  icp6errs_unknown; int /*<<< orphan*/  icp6errs_redirect; int /*<<< orphan*/  icp6errs_paramprob_option; int /*<<< orphan*/  icp6errs_paramprob_nextheader; int /*<<< orphan*/  icp6errs_paramprob_header; int /*<<< orphan*/  icp6errs_time_exceed_reassembly; int /*<<< orphan*/  icp6errs_time_exceed_transit; int /*<<< orphan*/  icp6errs_packet_too_big; int /*<<< orphan*/  icp6errs_dst_unreach_noport; int /*<<< orphan*/  icp6errs_dst_unreach_addr; int /*<<< orphan*/  icp6errs_dst_unreach_beyondscope; int /*<<< orphan*/  icp6errs_dst_unreach_admin; int /*<<< orphan*/  icp6errs_dst_unreach_noroute; } ;

/* Variables and functions */
#define  ICMP6_DST_UNREACH 142 
#define  ICMP6_DST_UNREACH_ADDR 141 
#define  ICMP6_DST_UNREACH_ADMIN 140 
#define  ICMP6_DST_UNREACH_BEYONDSCOPE 139 
#define  ICMP6_DST_UNREACH_NOPORT 138 
#define  ICMP6_DST_UNREACH_NOROUTE 137 
#define  ICMP6_PACKET_TOO_BIG 136 
#define  ICMP6_PARAMPROB_HEADER 135 
#define  ICMP6_PARAMPROB_NEXTHEADER 134 
#define  ICMP6_PARAMPROB_OPTION 133 
#define  ICMP6_PARAM_PROB 132 
#define  ICMP6_TIME_EXCEEDED 131 
#define  ICMP6_TIME_EXCEED_REASSEMBLY 130 
#define  ICMP6_TIME_EXCEED_TRANSIT 129 
#define  ND_REDIRECT 128 

__attribute__((used)) static void
icmp6_errcount(struct icmp6errstat *stat, int type, int code)
{
	switch (type) {
	case ICMP6_DST_UNREACH:
		switch (code) {
		case ICMP6_DST_UNREACH_NOROUTE:
			stat->icp6errs_dst_unreach_noroute++;
			return;
		case ICMP6_DST_UNREACH_ADMIN:
			stat->icp6errs_dst_unreach_admin++;
			return;
		case ICMP6_DST_UNREACH_BEYONDSCOPE:
			stat->icp6errs_dst_unreach_beyondscope++;
			return;
		case ICMP6_DST_UNREACH_ADDR:
			stat->icp6errs_dst_unreach_addr++;
			return;
		case ICMP6_DST_UNREACH_NOPORT:
			stat->icp6errs_dst_unreach_noport++;
			return;
		}
		break;
	case ICMP6_PACKET_TOO_BIG:
		stat->icp6errs_packet_too_big++;
		return;
	case ICMP6_TIME_EXCEEDED:
		switch (code) {
		case ICMP6_TIME_EXCEED_TRANSIT:
			stat->icp6errs_time_exceed_transit++;
			return;
		case ICMP6_TIME_EXCEED_REASSEMBLY:
			stat->icp6errs_time_exceed_reassembly++;
			return;
		}
		break;
	case ICMP6_PARAM_PROB:
		switch (code) {
		case ICMP6_PARAMPROB_HEADER:
			stat->icp6errs_paramprob_header++;
			return;
		case ICMP6_PARAMPROB_NEXTHEADER:
			stat->icp6errs_paramprob_nextheader++;
			return;
		case ICMP6_PARAMPROB_OPTION:
			stat->icp6errs_paramprob_option++;
			return;
		}
		break;
	case ND_REDIRECT:
		stat->icp6errs_redirect++;
		return;
	}
	stat->icp6errs_unknown++;
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
          int type = 100;
          int code = 100;
          int _len_stat0 = 1;
          struct icmp6errstat * stat = (struct icmp6errstat *) malloc(_len_stat0*sizeof(struct icmp6errstat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
            stat[_i0].icp6errs_unknown = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_redirect = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_paramprob_option = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_paramprob_nextheader = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_paramprob_header = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_time_exceed_reassembly = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_time_exceed_transit = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_packet_too_big = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_dst_unreach_noport = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_dst_unreach_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_dst_unreach_beyondscope = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_dst_unreach_admin = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].icp6errs_dst_unreach_noroute = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          icmp6_errcount(stat,type,code);
          free(stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
