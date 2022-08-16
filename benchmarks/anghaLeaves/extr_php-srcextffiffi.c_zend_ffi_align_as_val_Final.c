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
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int kind; } ;
typedef  TYPE_1__ zend_ffi_val ;
struct TYPE_11__ {int /*<<< orphan*/  align; } ;
typedef  TYPE_2__ zend_ffi_dcl ;
struct TYPE_16__ {int /*<<< orphan*/  align; } ;
struct TYPE_15__ {int /*<<< orphan*/  align; } ;
struct TYPE_14__ {int /*<<< orphan*/  align; } ;
struct TYPE_13__ {int /*<<< orphan*/  align; } ;
struct TYPE_12__ {int /*<<< orphan*/  align; } ;

/* Variables and functions */
#define  ZEND_FFI_VAL_CHAR 135 
#define  ZEND_FFI_VAL_DOUBLE 134 
#define  ZEND_FFI_VAL_FLOAT 133 
#define  ZEND_FFI_VAL_INT32 132 
#define  ZEND_FFI_VAL_INT64 131 
#define  ZEND_FFI_VAL_STRING 130 
#define  ZEND_FFI_VAL_UINT32 129 
#define  ZEND_FFI_VAL_UINT64 128 
 TYPE_7__ zend_ffi_type_char ; 
 TYPE_6__ zend_ffi_type_double ; 
 TYPE_5__ zend_ffi_type_float ; 
 TYPE_4__ zend_ffi_type_uint32 ; 
 TYPE_3__ zend_ffi_type_uint64 ; 

void zend_ffi_align_as_val(zend_ffi_dcl *dcl, zend_ffi_val *align_val) /* {{{ */
{
	switch (align_val->kind) {
		case ZEND_FFI_VAL_INT32:
		case ZEND_FFI_VAL_UINT32:
			dcl->align = zend_ffi_type_uint32.align;
			break;
		case ZEND_FFI_VAL_INT64:
		case ZEND_FFI_VAL_UINT64:
			dcl->align = zend_ffi_type_uint64.align;
			break;
		case ZEND_FFI_VAL_FLOAT:
			dcl->align = zend_ffi_type_float.align;
			break;
		case ZEND_FFI_VAL_DOUBLE:
			dcl->align = zend_ffi_type_double.align;
			break;
#ifdef HAVE_LONG_DOUBLE
		case ZEND_FFI_VAL_LONG_DOUBLE:
			dcl->align = zend_ffi_type_long_double.align;
			break;
#endif
		case ZEND_FFI_VAL_CHAR:
		case ZEND_FFI_VAL_STRING:
			dcl->align = zend_ffi_type_char.align;
			break;
		default:
			break;
	}
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
          int _len_dcl0 = 1;
          struct TYPE_11__ * dcl = (struct TYPE_11__ *) malloc(_len_dcl0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_dcl0; _i0++) {
            dcl[_i0].align = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_align_val0 = 1;
          struct TYPE_10__ * align_val = (struct TYPE_10__ *) malloc(_len_align_val0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_align_val0; _i0++) {
            align_val[_i0].kind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_align_as_val(dcl,align_val);
          free(dcl);
          free(align_val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
