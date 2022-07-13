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
struct tty_struct {struct ipw_tty* driver_data; } ;
struct TYPE_2__ {int /*<<< orphan*/  count; } ;
struct ipw_tty {int tx_bytes_queued; TYPE_1__ port; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENODEV ; 
 int IPWIRELESS_TX_QUEUE_SIZE ; 

__attribute__((used)) static int ipw_write_room(struct tty_struct *linux_tty)
{
	struct ipw_tty *tty = linux_tty->driver_data;
	int room;

	/* FIXME: Exactly how is the tty object locked here .. */
	if (!tty)
		return -ENODEV;

	if (!tty->port.count)
		return -EINVAL;

	room = IPWIRELESS_TX_QUEUE_SIZE - tty->tx_bytes_queued;
	if (room < 0)
		room = 0;

	return room;
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
          int _len_linux_tty0 = 1;
          struct tty_struct * linux_tty = (struct tty_struct *) malloc(_len_linux_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_linux_tty0; _i0++) {
              int _len_linux_tty__i0__driver_data0 = 1;
          linux_tty[_i0].driver_data = (struct ipw_tty *) malloc(_len_linux_tty__i0__driver_data0*sizeof(struct ipw_tty));
          for(int _j0 = 0; _j0 < _len_linux_tty__i0__driver_data0; _j0++) {
            linux_tty[_i0].driver_data->tx_bytes_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        linux_tty[_i0].driver_data->port.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipw_write_room(linux_tty);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_linux_tty0; _aux++) {
          free(linux_tty[_aux].driver_data);
          }
          free(linux_tty);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_linux_tty0 = 65025;
          struct tty_struct * linux_tty = (struct tty_struct *) malloc(_len_linux_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_linux_tty0; _i0++) {
              int _len_linux_tty__i0__driver_data0 = 1;
          linux_tty[_i0].driver_data = (struct ipw_tty *) malloc(_len_linux_tty__i0__driver_data0*sizeof(struct ipw_tty));
          for(int _j0 = 0; _j0 < _len_linux_tty__i0__driver_data0; _j0++) {
            linux_tty[_i0].driver_data->tx_bytes_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        linux_tty[_i0].driver_data->port.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipw_write_room(linux_tty);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_linux_tty0; _aux++) {
          free(linux_tty[_aux].driver_data);
          }
          free(linux_tty);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_linux_tty0 = 100;
          struct tty_struct * linux_tty = (struct tty_struct *) malloc(_len_linux_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_linux_tty0; _i0++) {
              int _len_linux_tty__i0__driver_data0 = 1;
          linux_tty[_i0].driver_data = (struct ipw_tty *) malloc(_len_linux_tty__i0__driver_data0*sizeof(struct ipw_tty));
          for(int _j0 = 0; _j0 < _len_linux_tty__i0__driver_data0; _j0++) {
            linux_tty[_i0].driver_data->tx_bytes_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        linux_tty[_i0].driver_data->port.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipw_write_room(linux_tty);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_linux_tty0; _aux++) {
          free(linux_tty[_aux].driver_data);
          }
          free(linux_tty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
