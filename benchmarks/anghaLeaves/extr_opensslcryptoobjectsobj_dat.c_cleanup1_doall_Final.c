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
struct TYPE_5__ {TYPE_1__* obj; } ;
struct TYPE_4__ {int flags; scalar_t__ nid; } ;
typedef  TYPE_2__ ADDED_OBJ ;

/* Variables and functions */
 int ASN1_OBJECT_FLAG_DYNAMIC ; 
 int ASN1_OBJECT_FLAG_DYNAMIC_DATA ; 
 int ASN1_OBJECT_FLAG_DYNAMIC_STRINGS ; 

__attribute__((used)) static void cleanup1_doall(ADDED_OBJ *a)
{
    a->obj->nid = 0;
    a->obj->flags |= ASN1_OBJECT_FLAG_DYNAMIC |
        ASN1_OBJECT_FLAG_DYNAMIC_STRINGS | ASN1_OBJECT_FLAG_DYNAMIC_DATA;
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
          int _len_a0 = 1;
          struct TYPE_5__ * a = (struct TYPE_5__ *) malloc(_len_a0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__obj0 = 1;
          a[_i0].obj = (struct TYPE_4__ *) malloc(_len_a__i0__obj0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_a__i0__obj0; _j0++) {
            a[_i0].obj->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].obj->nid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cleanup1_doall(a);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].obj);
          }
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
