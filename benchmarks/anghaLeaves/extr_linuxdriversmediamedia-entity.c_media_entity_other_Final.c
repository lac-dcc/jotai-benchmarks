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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct media_link {TYPE_2__* source; TYPE_1__* sink; } ;
struct media_entity {int dummy; } ;
struct TYPE_4__ {struct media_entity* entity; } ;
struct TYPE_3__ {struct media_entity* entity; } ;

/* Variables and functions */

__attribute__((used)) static struct media_entity *
media_entity_other(struct media_entity *entity, struct media_link *link)
{
	if (link->source->entity == entity)
		return link->sink->entity;
	else
		return link->source->entity;
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
          int _len_entity0 = 1;
          struct media_entity * entity = (struct media_entity *) malloc(_len_entity0*sizeof(struct media_entity));
          for(int _i0 = 0; _i0 < _len_entity0; _i0++) {
            entity[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_link0 = 1;
          struct media_link * link = (struct media_link *) malloc(_len_link0*sizeof(struct media_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__source0 = 1;
          link[_i0].source = (struct TYPE_4__ *) malloc(_len_link__i0__source0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_link__i0__source0; _j0++) {
              int _len_link__i0__source_entity0 = 1;
          link[_i0].source->entity = (struct media_entity *) malloc(_len_link__i0__source_entity0*sizeof(struct media_entity));
          for(int _j0 = 0; _j0 < _len_link__i0__source_entity0; _j0++) {
            link[_i0].source->entity->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_link__i0__sink0 = 1;
          link[_i0].sink = (struct TYPE_3__ *) malloc(_len_link__i0__sink0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_link__i0__sink0; _j0++) {
              int _len_link__i0__sink_entity0 = 1;
          link[_i0].sink->entity = (struct media_entity *) malloc(_len_link__i0__sink_entity0*sizeof(struct media_entity));
          for(int _j0 = 0; _j0 < _len_link__i0__sink_entity0; _j0++) {
            link[_i0].sink->entity->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct media_entity * benchRet = media_entity_other(entity,link);
          printf("%d\n", (*benchRet).dummy);
          free(entity);
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].source);
          }
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].sink);
          }
          free(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
