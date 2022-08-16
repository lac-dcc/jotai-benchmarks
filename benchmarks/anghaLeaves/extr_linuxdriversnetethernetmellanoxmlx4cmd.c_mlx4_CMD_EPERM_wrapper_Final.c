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
struct mlx4_vhcr {int dummy; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;

/* Variables and functions */
 int EPERM ; 

__attribute__((used)) static int mlx4_CMD_EPERM_wrapper(struct mlx4_dev *dev, int slave,
		     struct mlx4_vhcr *vhcr,
		     struct mlx4_cmd_mailbox *inbox,
		     struct mlx4_cmd_mailbox *outbox,
		     struct mlx4_cmd_info *cmd)
{
	return -EPERM;
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
          int slave = 100;
          int _len_dev0 = 1;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vhcr0 = 1;
          struct mlx4_vhcr * vhcr = (struct mlx4_vhcr *) malloc(_len_vhcr0*sizeof(struct mlx4_vhcr));
          for(int _i0 = 0; _i0 < _len_vhcr0; _i0++) {
            vhcr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inbox0 = 1;
          struct mlx4_cmd_mailbox * inbox = (struct mlx4_cmd_mailbox *) malloc(_len_inbox0*sizeof(struct mlx4_cmd_mailbox));
          for(int _i0 = 0; _i0 < _len_inbox0; _i0++) {
            inbox[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outbox0 = 1;
          struct mlx4_cmd_mailbox * outbox = (struct mlx4_cmd_mailbox *) malloc(_len_outbox0*sizeof(struct mlx4_cmd_mailbox));
          for(int _i0 = 0; _i0 < _len_outbox0; _i0++) {
            outbox[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct mlx4_cmd_info * cmd = (struct mlx4_cmd_info *) malloc(_len_cmd0*sizeof(struct mlx4_cmd_info));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_CMD_EPERM_wrapper(dev,slave,vhcr,inbox,outbox,cmd);
          printf("%d\n", benchRet); 
          free(dev);
          free(vhcr);
          free(inbox);
          free(outbox);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
