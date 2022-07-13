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

/* Type definitions */
typedef  unsigned long long u64 ;
typedef  int u32 ;
struct rxts {int ns; int msgtype; int hash; scalar_t__ tmo; int /*<<< orphan*/  seqid; } ;
struct phy_rxts {int sec_lo; int sec_hi; int ns_lo; int ns_hi; int msgtype; int /*<<< orphan*/  seqid; } ;

/* Variables and functions */
 scalar_t__ SKB_TIMESTAMP_TIMEOUT ; 
 scalar_t__ jiffies ; 

__attribute__((used)) static void phy2rxts(struct phy_rxts *p, struct rxts *rxts)
{
	u32 sec;

	sec = p->sec_lo;
	sec |= p->sec_hi << 16;

	rxts->ns = p->ns_lo;
	rxts->ns |= (p->ns_hi & 0x3fff) << 16;
	rxts->ns += ((u64)sec) * 1000000000ULL;
	rxts->seqid = p->seqid;
	rxts->msgtype = (p->msgtype >> 12) & 0xf;
	rxts->hash = p->msgtype & 0x0fff;
	rxts->tmo = jiffies + SKB_TIMESTAMP_TIMEOUT;
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
          int _len_p0 = 1;
          struct phy_rxts * p = (struct phy_rxts *) malloc(_len_p0*sizeof(struct phy_rxts));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].sec_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].sec_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ns_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ns_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].msgtype = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxts0 = 1;
          struct rxts * rxts = (struct rxts *) malloc(_len_rxts0*sizeof(struct rxts));
          for(int _i0 = 0; _i0 < _len_rxts0; _i0++) {
            rxts[_i0].ns = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].msgtype = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].hash = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].tmo = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          phy2rxts(p,rxts);
          free(p);
          free(rxts);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct phy_rxts * p = (struct phy_rxts *) malloc(_len_p0*sizeof(struct phy_rxts));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].sec_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].sec_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ns_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ns_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].msgtype = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxts0 = 65025;
          struct rxts * rxts = (struct rxts *) malloc(_len_rxts0*sizeof(struct rxts));
          for(int _i0 = 0; _i0 < _len_rxts0; _i0++) {
            rxts[_i0].ns = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].msgtype = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].hash = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].tmo = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          phy2rxts(p,rxts);
          free(p);
          free(rxts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct phy_rxts * p = (struct phy_rxts *) malloc(_len_p0*sizeof(struct phy_rxts));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].sec_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].sec_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ns_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ns_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].msgtype = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxts0 = 100;
          struct rxts * rxts = (struct rxts *) malloc(_len_rxts0*sizeof(struct rxts));
          for(int _i0 = 0; _i0 < _len_rxts0; _i0++) {
            rxts[_i0].ns = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].msgtype = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].hash = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].tmo = ((-2 * (next_i()%2)) + 1) * next_i();
        rxts[_i0].seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          phy2rxts(p,rxts);
          free(p);
          free(rxts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
