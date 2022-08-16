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
typedef  int /*<<< orphan*/  u8 ;
struct niu {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int niu_n2_irq_init(struct niu *np, u8 *ldg_num_map)
{
#ifdef CONFIG_SPARC64
	struct platform_device *op = np->op;
	const u32 *int_prop;
	int i;

	int_prop = of_get_property(op->dev.of_node, "interrupts", NULL);
	if (!int_prop)
		return -ENODEV;

	for (i = 0; i < op->archdata.num_irqs; i++) {
		ldg_num_map[i] = int_prop[i];
		np->ldg[i].irq = op->archdata.irqs[i];
	}

	np->num_ldg = op->archdata.num_irqs;

	return 0;
#else
	return -EINVAL;
#endif
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
          int _len_np0 = 1;
          struct niu * np = (struct niu *) malloc(_len_np0*sizeof(struct niu));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ldg_num_map0 = 1;
          int * ldg_num_map = (int *) malloc(_len_ldg_num_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ldg_num_map0; _i0++) {
            ldg_num_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = niu_n2_irq_init(np,ldg_num_map);
          printf("%d\n", benchRet); 
          free(np);
          free(ldg_num_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
