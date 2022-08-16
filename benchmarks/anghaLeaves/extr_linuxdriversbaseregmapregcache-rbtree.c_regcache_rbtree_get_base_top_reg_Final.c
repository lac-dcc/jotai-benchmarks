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
struct regmap {int reg_stride; } ;
struct regcache_rbtree_node {unsigned int base_reg; int blklen; } ;

/* Variables and functions */

__attribute__((used)) static inline void regcache_rbtree_get_base_top_reg(
	struct regmap *map,
	struct regcache_rbtree_node *rbnode,
	unsigned int *base, unsigned int *top)
{
	*base = rbnode->base_reg;
	*top = rbnode->base_reg + ((rbnode->blklen - 1) * map->reg_stride);
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
          int _len_map0 = 1;
          struct regmap * map = (struct regmap *) malloc(_len_map0*sizeof(struct regmap));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].reg_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rbnode0 = 1;
          struct regcache_rbtree_node * rbnode = (struct regcache_rbtree_node *) malloc(_len_rbnode0*sizeof(struct regcache_rbtree_node));
          for(int _i0 = 0; _i0 < _len_rbnode0; _i0++) {
            rbnode[_i0].base_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        rbnode[_i0].blklen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 1;
          unsigned int * base = (unsigned int *) malloc(_len_base0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_top0 = 1;
          unsigned int * top = (unsigned int *) malloc(_len_top0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          regcache_rbtree_get_base_top_reg(map,rbnode,base,top);
          free(map);
          free(rbnode);
          free(base);
          free(top);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
