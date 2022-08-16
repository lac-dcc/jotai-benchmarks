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
struct TYPE_2__ {scalar_t__ maxver; scalar_t__ minver; int /*<<< orphan*/  oclass; } ;
struct nvkm_oclass {int /*<<< orphan*/  ctor; TYPE_1__ base; } ;
struct nvkm_object {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  NVIF_CLASS_PERFDOM ; 
 int /*<<< orphan*/  nvkm_perfmon_child_new ; 

__attribute__((used)) static int
nvkm_perfmon_child_get(struct nvkm_object *object, int index,
		       struct nvkm_oclass *oclass)
{
	if (index == 0) {
		oclass->base.oclass = NVIF_CLASS_PERFDOM;
		oclass->base.minver = 0;
		oclass->base.maxver = 0;
		oclass->ctor = nvkm_perfmon_child_new;
		return 0;
	}
	return -EINVAL;
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
          int index = 100;
          int _len_object0 = 1;
          struct nvkm_object * object = (struct nvkm_object *) malloc(_len_object0*sizeof(struct nvkm_object));
          for(int _i0 = 0; _i0 < _len_object0; _i0++) {
            object[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oclass0 = 1;
          struct nvkm_oclass * oclass = (struct nvkm_oclass *) malloc(_len_oclass0*sizeof(struct nvkm_oclass));
          for(int _i0 = 0; _i0 < _len_oclass0; _i0++) {
            oclass[_i0].ctor = ((-2 * (next_i()%2)) + 1) * next_i();
        oclass[_i0].base.maxver = ((-2 * (next_i()%2)) + 1) * next_i();
        oclass[_i0].base.minver = ((-2 * (next_i()%2)) + 1) * next_i();
        oclass[_i0].base.oclass = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvkm_perfmon_child_get(object,index,oclass);
          printf("%d\n", benchRet); 
          free(object);
          free(oclass);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
