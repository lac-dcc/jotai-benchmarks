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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ php_conv_dtor_func ;
typedef  scalar_t__ php_conv_convert_func ;
struct TYPE_4__ {scalar_t__ dtor; scalar_t__ convert_op; } ;
struct TYPE_5__ {scalar_t__ eos; scalar_t__ ustat; scalar_t__ urem_nbits; scalar_t__ urem; TYPE_1__ _super; } ;
typedef  TYPE_2__ php_conv_base64_decode ;

/* Variables and functions */
 int SUCCESS ; 
 scalar_t__ php_conv_base64_decode_convert ; 
 scalar_t__ php_conv_base64_decode_dtor ; 

__attribute__((used)) static int php_conv_base64_decode_ctor(php_conv_base64_decode *inst)
{
	inst->_super.convert_op = (php_conv_convert_func) php_conv_base64_decode_convert;
	inst->_super.dtor = (php_conv_dtor_func) php_conv_base64_decode_dtor;

	inst->urem = 0;
	inst->urem_nbits = 0;
	inst->ustat = 0;
	inst->eos = 0;
	return SUCCESS;
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
          int _len_inst0 = 1;
          struct TYPE_5__ * inst = (struct TYPE_5__ *) malloc(_len_inst0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
            inst[_i0].eos = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].ustat = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].urem_nbits = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].urem = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0]._super.dtor = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0]._super.convert_op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = php_conv_base64_decode_ctor(inst);
          printf("%d\n", benchRet); 
          free(inst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
