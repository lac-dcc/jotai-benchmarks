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
typedef  int uint32_t ;
struct scom_access {int pib_status; int /*<<< orphan*/  intf_errors; } ;

/* Variables and functions */
 int /*<<< orphan*/  SCOM_INTF_ERR_ABORT ; 
 int /*<<< orphan*/  SCOM_INTF_ERR_PARITY ; 
 int /*<<< orphan*/  SCOM_INTF_ERR_PROTECTION ; 
 int /*<<< orphan*/  SCOM_INTF_ERR_UNKNOWN ; 
 int SCOM_STATUS_ERR_SUMMARY ; 
 int SCOM_STATUS_PARITY ; 
 int SCOM_STATUS_PIB_ABORT ; 
 int SCOM_STATUS_PIB_RESP_MASK ; 
 int SCOM_STATUS_PIB_RESP_SHIFT ; 
 int SCOM_STATUS_PROTECTION ; 

__attribute__((used)) static void raw_convert_status(struct scom_access *acc, uint32_t status)
{
	acc->pib_status = (status & SCOM_STATUS_PIB_RESP_MASK) >>
		SCOM_STATUS_PIB_RESP_SHIFT;
	acc->intf_errors = 0;

	if (status & SCOM_STATUS_PROTECTION)
		acc->intf_errors |= SCOM_INTF_ERR_PROTECTION;
	else if (status & SCOM_STATUS_PARITY)
		acc->intf_errors |= SCOM_INTF_ERR_PARITY;
	else if (status & SCOM_STATUS_PIB_ABORT)
		acc->intf_errors |= SCOM_INTF_ERR_ABORT;
	else if (status & SCOM_STATUS_ERR_SUMMARY)
		acc->intf_errors |= SCOM_INTF_ERR_UNKNOWN;
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
          int status = 100;
          int _len_acc0 = 1;
          struct scom_access * acc = (struct scom_access *) malloc(_len_acc0*sizeof(struct scom_access));
          for(int _i0 = 0; _i0 < _len_acc0; _i0++) {
            acc[_i0].pib_status = ((-2 * (next_i()%2)) + 1) * next_i();
        acc[_i0].intf_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          raw_convert_status(acc,status);
          free(acc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
