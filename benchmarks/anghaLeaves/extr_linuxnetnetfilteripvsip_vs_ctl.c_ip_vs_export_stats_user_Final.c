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
typedef  void* u32 ;
struct ip_vs_stats_user {void* outbps; void* inbps; void* outpps; void* inpps; void* cps; int /*<<< orphan*/  outbytes; int /*<<< orphan*/  inbytes; void* outpkts; void* inpkts; void* conns; } ;
struct ip_vs_kstats {scalar_t__ outbps; scalar_t__ inbps; scalar_t__ outpps; scalar_t__ inpps; scalar_t__ cps; int /*<<< orphan*/  outbytes; int /*<<< orphan*/  inbytes; scalar_t__ outpkts; scalar_t__ inpkts; scalar_t__ conns; } ;

/* Variables and functions */

__attribute__((used)) static void
ip_vs_export_stats_user(struct ip_vs_stats_user *dst, struct ip_vs_kstats *src)
{
	dst->conns = (u32)src->conns;
	dst->inpkts = (u32)src->inpkts;
	dst->outpkts = (u32)src->outpkts;
	dst->inbytes = src->inbytes;
	dst->outbytes = src->outbytes;
	dst->cps = (u32)src->cps;
	dst->inpps = (u32)src->inpps;
	dst->outpps = (u32)src->outpps;
	dst->inbps = (u32)src->inbps;
	dst->outbps = (u32)src->outbps;
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
          int _len_dst0 = 1;
          struct ip_vs_stats_user * dst = (struct ip_vs_stats_user *) malloc(_len_dst0*sizeof(struct ip_vs_stats_user));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].outbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].inbytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct ip_vs_kstats * src = (struct ip_vs_kstats *) malloc(_len_src0*sizeof(struct ip_vs_kstats));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].outbps = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].inbps = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].outpps = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].inpps = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].cps = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].outbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].inbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].outpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].inpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].conns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_vs_export_stats_user(dst,src);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
