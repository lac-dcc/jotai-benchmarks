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
typedef  int /*<<< orphan*/  u64 ;
struct ate_resource {int num_ate; int /*<<< orphan*/ * ate; } ;

/* Variables and functions */

__attribute__((used)) static int find_free_ate(struct ate_resource *ate_resource, int start,
			 int count)
{
	u64 *ate = ate_resource->ate;
	int index;
	int start_free;

	for (index = start; index < ate_resource->num_ate;) {
		if (!ate[index]) {
			int i;
			int free;
			free = 0;
			start_free = index;	/* Found start free ate */
			for (i = start_free; i < ate_resource->num_ate; i++) {
				if (!ate[i]) {	/* This is free */
					if (++free == count)
						return start_free;
				} else {
					index = i + 1;
					break;
				}
			}
			if (i >= ate_resource->num_ate)
				return -1;
		} else
			index++;	/* Try next ate */
	}

	return -1;
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
          int start = 100;
          int count = 100;
          int _len_ate_resource0 = 1;
          struct ate_resource * ate_resource = (struct ate_resource *) malloc(_len_ate_resource0*sizeof(struct ate_resource));
          for(int _i0 = 0; _i0 < _len_ate_resource0; _i0++) {
            ate_resource[_i0].num_ate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ate_resource__i0__ate0 = 1;
          ate_resource[_i0].ate = (int *) malloc(_len_ate_resource__i0__ate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ate_resource__i0__ate0; _j0++) {
            ate_resource[_i0].ate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = find_free_ate(ate_resource,start,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ate_resource0; _aux++) {
          free(ate_resource[_aux].ate);
          }
          free(ate_resource);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
