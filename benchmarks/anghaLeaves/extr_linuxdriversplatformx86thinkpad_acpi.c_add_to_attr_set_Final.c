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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {struct attribute** attrs; } ;
struct attribute_set {size_t members; size_t max_members; TYPE_1__ group; } ;
struct attribute {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENOMEM ; 

__attribute__((used)) static int add_to_attr_set(struct attribute_set *s, struct attribute *attr)
{
	if (!s || !attr)
		return -EINVAL;

	if (s->members >= s->max_members)
		return -ENOMEM;

	s->group.attrs[s->members] = attr;
	s->members++;

	return 0;
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
          int _len_s0 = 1;
          struct attribute_set * s = (struct attribute_set *) malloc(_len_s0*sizeof(struct attribute_set));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].members = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].max_members = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__group_attrs0 = 1;
          s[_i0].group.attrs = (struct attribute **) malloc(_len_s__i0__group_attrs0*sizeof(struct attribute *));
          for(int _j0 = 0; _j0 < _len_s__i0__group_attrs0; _j0++) {
            int _len_s__i0__group_attrs1 = 1;
            s[_i0].group.attrs[_j0] = (struct attribute *) malloc(_len_s__i0__group_attrs1*sizeof(struct attribute));
            for(int _j1 = 0; _j1 < _len_s__i0__group_attrs1; _j1++) {
              s[_i0].group.attrs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_attr0 = 1;
          struct attribute * attr = (struct attribute *) malloc(_len_attr0*sizeof(struct attribute));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = add_to_attr_set(s,attr);
          printf("%d\n", benchRet); 
          free(s);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
