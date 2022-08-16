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
typedef  int /*<<< orphan*/  git_reference ;
typedef  int /*<<< orphan*/  git_object ;

/* Variables and functions */

__attribute__((used)) static bool any_left_hand_identifier(git_object *object, git_reference *reference, size_t identifier_len)
{
	if (object != NULL)
		return true;

	if (reference != NULL)
		return true;

	if (identifier_len > 0)
		return true;

	return false;
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
          unsigned long identifier_len = 100;
          int _len_object0 = 1;
          int * object = (int *) malloc(_len_object0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_object0; _i0++) {
            object[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reference0 = 1;
          int * reference = (int *) malloc(_len_reference0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reference0; _i0++) {
            reference[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = any_left_hand_identifier(object,reference,identifier_len);
          printf("%d\n", benchRet); 
          free(object);
          free(reference);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
