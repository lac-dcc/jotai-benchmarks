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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  zend_extension ;
typedef  int /*<<< orphan*/  DL_HANDLE ;

/* Variables and functions */
 int SUCCESS ; 

int zend_register_extension(zend_extension *new_extension, DL_HANDLE handle)
{
#if ZEND_EXTENSIONS_SUPPORT
	zend_extension extension;

	extension = *new_extension;
	extension.handle = handle;

	zend_extension_dispatch_message(ZEND_EXTMSG_NEW_EXTENSION, &extension);

	zend_llist_add_element(&zend_extensions, &extension);

	if (extension.op_array_ctor) {
		zend_extension_flags |= ZEND_EXTENSIONS_HAVE_OP_ARRAY_CTOR;
	}
	if (extension.op_array_dtor) {
		zend_extension_flags |= ZEND_EXTENSIONS_HAVE_OP_ARRAY_DTOR;
	}
	if (extension.op_array_handler) {
		zend_extension_flags |= ZEND_EXTENSIONS_HAVE_OP_ARRAY_HANDLER;
	}
	if (extension.op_array_persist_calc) {
		zend_extension_flags |= ZEND_EXTENSIONS_HAVE_OP_ARRAY_PERSIST_CALC;
	}
	if (extension.op_array_persist) {
		zend_extension_flags |= ZEND_EXTENSIONS_HAVE_OP_ARRAY_PERSIST;
	}
	/*fprintf(stderr, "Loaded %s, version %s\n", extension.name, extension.version);*/
#endif

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
          int handle = 100;
          int _len_new_extension0 = 1;
          int * new_extension = (int *) malloc(_len_new_extension0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_extension0; _i0++) {
            new_extension[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zend_register_extension(new_extension,handle);
          printf("%d\n", benchRet); 
          free(new_extension);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int handle = 10;
          int _len_new_extension0 = 100;
          int * new_extension = (int *) malloc(_len_new_extension0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_extension0; _i0++) {
            new_extension[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zend_register_extension(new_extension,handle);
          printf("%d\n", benchRet); 
          free(new_extension);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
