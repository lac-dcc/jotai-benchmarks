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
struct vnt_private {int cmd_running; int /*<<< orphan*/  command_state; scalar_t__ cmd_enqueue_idx; scalar_t__ cmd_dequeue_idx; int /*<<< orphan*/  free_cmd_queue; } ;

/* Variables and functions */
 int /*<<< orphan*/  CMD_Q_SIZE ; 
 int /*<<< orphan*/  WLAN_CMD_IDLE ; 

void vnt_reset_command_timer(struct vnt_private *priv)
{
	priv->free_cmd_queue = CMD_Q_SIZE;
	priv->cmd_dequeue_idx = 0;
	priv->cmd_enqueue_idx = 0;
	priv->command_state = WLAN_CMD_IDLE;
	priv->cmd_running = false;
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
          int _len_priv0 = 1;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].cmd_running = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].command_state = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cmd_enqueue_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cmd_dequeue_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].free_cmd_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vnt_reset_command_timer(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
