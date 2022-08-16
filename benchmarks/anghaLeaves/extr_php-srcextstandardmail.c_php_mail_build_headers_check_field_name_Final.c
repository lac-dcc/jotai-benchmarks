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
struct TYPE_3__ {size_t len; int* val; } ;
typedef  TYPE_1__ zend_string ;
typedef  int /*<<< orphan*/  zend_bool ;

/* Variables and functions */
 int /*<<< orphan*/  FAILURE ; 
 int /*<<< orphan*/  SUCCESS ; 

__attribute__((used)) static zend_bool php_mail_build_headers_check_field_name(zend_string *key)
{
	size_t len = 0;

	/* https://tools.ietf.org/html/rfc2822#section-2.2 */
	while (len < key->len) {
		if (*(key->val+len) < 33 || *(key->val+len) > 126 || *(key->val+len) == ':') {
			return FAILURE;
		}
		len++;
	}
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
          int _len_key0 = 1;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__val0 = 1;
          key[_i0].val = (int *) malloc(_len_key__i0__val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__val0; _j0++) {
            key[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = php_mail_build_headers_check_field_name(key);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].val);
          }
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
