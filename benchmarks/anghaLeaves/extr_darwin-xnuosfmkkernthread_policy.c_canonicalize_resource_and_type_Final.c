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
typedef  int /*<<< orphan*/  user_addr_t ;

/* Variables and functions */
 scalar_t__ QOS_OVERRIDE_MODE_FINE_GRAINED_OVERRIDE ; 
 scalar_t__ QOS_OVERRIDE_MODE_FINE_GRAINED_OVERRIDE_BUT_SINGLE_MUTEX_OVERRIDE ; 
 scalar_t__ QOS_OVERRIDE_MODE_IGNORE_OVERRIDE ; 
 scalar_t__ QOS_OVERRIDE_MODE_OVERHANG_PEAK ; 
 int THREAD_QOS_OVERRIDE_TYPE_PTHREAD_MUTEX ; 
 int THREAD_QOS_OVERRIDE_TYPE_UNKNOWN ; 
 int /*<<< orphan*/  USER_ADDR_NULL ; 
 scalar_t__ qos_override_mode ; 

__attribute__((used)) static void canonicalize_resource_and_type(user_addr_t *resource, int *resource_type) {
	if (qos_override_mode == QOS_OVERRIDE_MODE_OVERHANG_PEAK || qos_override_mode == QOS_OVERRIDE_MODE_IGNORE_OVERRIDE) {
		/* Map all input resource/type to a single one */
		*resource = USER_ADDR_NULL;
		*resource_type = THREAD_QOS_OVERRIDE_TYPE_UNKNOWN;
	} else if (qos_override_mode == QOS_OVERRIDE_MODE_FINE_GRAINED_OVERRIDE) {
		/* no transform */
	} else if (qos_override_mode == QOS_OVERRIDE_MODE_FINE_GRAINED_OVERRIDE_BUT_SINGLE_MUTEX_OVERRIDE) {
		/* Map all mutex overrides to a single one, to avoid memory overhead */
		if (*resource_type == THREAD_QOS_OVERRIDE_TYPE_PTHREAD_MUTEX) {
			*resource = USER_ADDR_NULL;
		}
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
          int _len_resource0 = 1;
          int * resource = (int *) malloc(_len_resource0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resource0; _i0++) {
            resource[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resource_type0 = 1;
          int * resource_type = (int *) malloc(_len_resource_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resource_type0; _i0++) {
            resource_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          canonicalize_resource_and_type(resource,resource_type);
          free(resource);
          free(resource_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
