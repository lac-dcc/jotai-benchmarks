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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  ledger_t ;
typedef  TYPE_1__* bank_account_t ;
struct TYPE_4__ {scalar_t__ ba_holder; scalar_t__ ba_merchant; int /*<<< orphan*/  ba_bill; } ;

/* Variables and functions */
 TYPE_1__* BANK_ACCOUNT_NULL ; 
 int /*<<< orphan*/  LEDGER_NULL ; 

__attribute__((used)) static ledger_t
bank_get_bank_account_ledger(bank_account_t bank_account)
{
	ledger_t bankledger = LEDGER_NULL;

	if (bank_account != BANK_ACCOUNT_NULL &&
		bank_account->ba_holder != bank_account->ba_merchant)
		bankledger = bank_account->ba_bill;

	return (bankledger);
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
          int _len_bank_account0 = 1;
          struct TYPE_4__ * bank_account = (struct TYPE_4__ *) malloc(_len_bank_account0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_bank_account0; _i0++) {
            bank_account[_i0].ba_holder = ((-2 * (next_i()%2)) + 1) * next_i();
        bank_account[_i0].ba_merchant = ((-2 * (next_i()%2)) + 1) * next_i();
        bank_account[_i0].ba_bill = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bank_get_bank_account_ledger(bank_account);
          printf("%d\n", benchRet); 
          free(bank_account);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
