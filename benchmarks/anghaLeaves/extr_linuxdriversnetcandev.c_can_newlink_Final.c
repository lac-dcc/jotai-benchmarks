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
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static int can_newlink(struct net *src_net, struct net_device *dev,
		       struct nlattr *tb[], struct nlattr *data[],
		       struct netlink_ext_ack *extack)
{
	return -EOPNOTSUPP;
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
          int _len_src_net0 = 1;
          struct net * src_net = (struct net *) malloc(_len_src_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_src_net0; _i0++) {
            src_net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tb0 = 1;
          struct nlattr ** tb = (struct nlattr **) malloc(_len_tb0*sizeof(struct nlattr *));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            int _len_tb1 = 1;
            tb[_i0] = (struct nlattr *) malloc(_len_tb1*sizeof(struct nlattr));
            for(int _i1 = 0; _i1 < _len_tb1; _i1++) {
              tb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_data0 = 1;
          struct nlattr ** data = (struct nlattr **) malloc(_len_data0*sizeof(struct nlattr *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (struct nlattr *) malloc(_len_data1*sizeof(struct nlattr));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_extack0 = 1;
          struct netlink_ext_ack * extack = (struct netlink_ext_ack *) malloc(_len_extack0*sizeof(struct netlink_ext_ack));
          for(int _i0 = 0; _i0 < _len_extack0; _i0++) {
            extack[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_newlink(src_net,dev,tb,data,extack);
          printf("%d\n", benchRet); 
          free(src_net);
          free(dev);
          for(int i1 = 0; i1 < _len_tb0; i1++) {
            int _len_tb1 = 1;
              free(tb[i1]);
          }
          free(tb);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(extack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
