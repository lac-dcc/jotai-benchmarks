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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int int64_t ;
typedef  int /*<<< orphan*/  bfd_boolean ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {int amount; int operator_present; int amount_present; int /*<<< orphan*/  kind; } ;
struct TYPE_7__ {TYPE_1__ imm; TYPE_2__ shifter; } ;
typedef  TYPE_3__ aarch64_opnd_info ;

/* Variables and functions */
 int /*<<< orphan*/  AARCH64_MOD_LSL ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static bfd_boolean
decode_sve_aimm (aarch64_opnd_info *info, int64_t value)
{
  info->shifter.kind = AARCH64_MOD_LSL;
  info->shifter.amount = 0;
  if (info->imm.value & 0x100)
    {
      if (value == 0)
	/* Decode 0x100 as #0, LSL #8.  */
	info->shifter.amount = 8;
      else
	value *= 256;
    }
  info->shifter.operator_present = (info->shifter.amount != 0);
  info->shifter.amount_present = (info->shifter.amount != 0);
  info->imm.value = value;
  return TRUE;
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
          int value = 100;
          int _len_info0 = 1;
          struct TYPE_7__ * info = (struct TYPE_7__ *) malloc(_len_info0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].imm.value = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].shifter.amount = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].shifter.operator_present = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].shifter.amount_present = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].shifter.kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decode_sve_aimm(info,value);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
