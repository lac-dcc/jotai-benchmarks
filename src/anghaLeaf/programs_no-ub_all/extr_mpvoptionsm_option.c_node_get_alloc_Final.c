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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_2__ {void* string; void* list; } ;
struct mpv_node {int format; TYPE_1__ u; } ;

/* Variables and functions */
#define  MPV_FORMAT_NODE_ARRAY 130 
#define  MPV_FORMAT_NODE_MAP 129 
#define  MPV_FORMAT_STRING 128 

void *node_get_alloc(struct mpv_node *node)
{
    // Assume it was allocated with copy_node(), which allocates all
    // sub-nodes with the parent node as talloc parent.
    switch (node->format) {
    case MPV_FORMAT_STRING:
        return node->u.string;
    case MPV_FORMAT_NODE_ARRAY:
    case MPV_FORMAT_NODE_MAP:
        return node->u.list;
    default:
        return NULL;
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

    // big-arr
    case 0:
    {
          int _len_node0 = 1;
          struct mpv_node * node = (struct mpv_node *) malloc(_len_node0*sizeof(struct mpv_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = node_get_alloc(node);
          printf("{{other_type}} %p\n", &benchRet); 
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
