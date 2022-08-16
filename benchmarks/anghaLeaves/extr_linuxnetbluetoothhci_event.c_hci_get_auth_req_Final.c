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
typedef  int u8 ;
struct hci_conn {int remote_auth; int auth_type; scalar_t__ remote_cap; scalar_t__ io_capability; } ;

/* Variables and functions */
 int HCI_AT_NO_BONDING ; 
 int HCI_AT_NO_BONDING_MITM ; 
 scalar_t__ HCI_IO_NO_INPUT_OUTPUT ; 

__attribute__((used)) static u8 hci_get_auth_req(struct hci_conn *conn)
{
	/* If remote requests no-bonding follow that lead */
	if (conn->remote_auth == HCI_AT_NO_BONDING ||
	    conn->remote_auth == HCI_AT_NO_BONDING_MITM)
		return conn->remote_auth | (conn->auth_type & 0x01);

	/* If both remote and local have enough IO capabilities, require
	 * MITM protection
	 */
	if (conn->remote_cap != HCI_IO_NO_INPUT_OUTPUT &&
	    conn->io_capability != HCI_IO_NO_INPUT_OUTPUT)
		return conn->remote_auth | 0x01;

	/* No MITM protection possible so ignore remote requirement */
	return (conn->remote_auth & ~0x01) | (conn->auth_type & 0x01);
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
          int _len_conn0 = 1;
          struct hci_conn * conn = (struct hci_conn *) malloc(_len_conn0*sizeof(struct hci_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0].remote_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].auth_type = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].remote_cap = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].io_capability = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hci_get_auth_req(conn);
          printf("%d\n", benchRet); 
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
