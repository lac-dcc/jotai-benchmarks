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
struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int acodec_flush_request; } ;
typedef  TYPE_1__ IJKFF_Pipenode_Opaque ;
typedef  TYPE_2__ IJKFF_Pipenode ;

/* Variables and functions */

__attribute__((used)) static int func_flush(IJKFF_Pipenode *node)
{
    IJKFF_Pipenode_Opaque *opaque   = node->opaque;

    if (!opaque)
        return -1;

    opaque->acodec_flush_request = true;

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
          int _len_node0 = 1;
          struct TYPE_5__ * node = (struct TYPE_5__ *) malloc(_len_node0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              int _len_node__i0__opaque0 = 1;
          node[_i0].opaque = (struct TYPE_4__ *) malloc(_len_node__i0__opaque0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_node__i0__opaque0; _j0++) {
            node[_i0].opaque->acodec_flush_request = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = func_flush(node);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].opaque);
          }
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
