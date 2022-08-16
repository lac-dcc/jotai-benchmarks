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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ zend_off_t ;
typedef  scalar_t__ ub4 ;
struct oci_lob_self {scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef  TYPE_1__ php_stream ;

/* Variables and functions */
 scalar_t__ PDO_OCI_LOBMAXSIZE ; 

__attribute__((used)) static int oci_blob_seek(php_stream *stream, zend_off_t offset, int whence, zend_off_t *newoffset)
{
	struct oci_lob_self *self = (struct oci_lob_self*)stream->abstract;

	if (offset >= PDO_OCI_LOBMAXSIZE) {
		return -1;
	} else {
		self->offset = (ub4) offset + 1;  /* Oracle LOBS are 1-based, but PHP is 0-based */
		return 0;
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
          long offset = 100;
          int whence = 100;
          int _len_stream0 = 1;
          struct TYPE_3__ * stream = (struct TYPE_3__ *) malloc(_len_stream0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].abstract = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_newoffset0 = 1;
          long * newoffset = (long *) malloc(_len_newoffset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_newoffset0; _i0++) {
            newoffset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oci_blob_seek(stream,offset,whence,newoffset);
          printf("%d\n", benchRet); 
          free(stream);
          free(newoffset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
