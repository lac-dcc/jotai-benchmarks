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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct hns3_nic_priv {struct hnae3_handle* ae_handle; } ;
struct TYPE_9__ {int gl_adapt_enable; void* flow_level; void* int_gl; } ;
struct TYPE_10__ {TYPE_4__ coal; } ;
struct TYPE_7__ {int gl_adapt_enable; void* flow_level; void* int_gl; } ;
struct TYPE_8__ {TYPE_2__ coal; } ;
struct hns3_enet_tqp_vector {TYPE_5__ tx_group; TYPE_3__ rx_group; int /*<<< orphan*/  int_adapt_down; } ;
struct TYPE_6__ {scalar_t__ int_rl_setting; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;

/* Variables and functions */
 void* HNS3_FLOW_LOW ; 
 int /*<<< orphan*/  HNS3_INT_ADAPT_DOWN_START ; 
 void* HNS3_INT_GL_50K ; 

__attribute__((used)) static void hns3_vector_gl_rl_init(struct hns3_enet_tqp_vector *tqp_vector,
				   struct hns3_nic_priv *priv)
{
	struct hnae3_handle *h = priv->ae_handle;

	/* initialize the configuration for interrupt coalescing.
	 * 1. GL (Interrupt Gap Limiter)
	 * 2. RL (Interrupt Rate Limiter)
	 */

	/* Default: enable interrupt coalescing self-adaptive and GL */
	tqp_vector->tx_group.coal.gl_adapt_enable = 1;
	tqp_vector->rx_group.coal.gl_adapt_enable = 1;

	tqp_vector->tx_group.coal.int_gl = HNS3_INT_GL_50K;
	tqp_vector->rx_group.coal.int_gl = HNS3_INT_GL_50K;

	/* Default: disable RL */
	h->kinfo.int_rl_setting = 0;

	tqp_vector->int_adapt_down = HNS3_INT_ADAPT_DOWN_START;
	tqp_vector->rx_group.coal.flow_level = HNS3_FLOW_LOW;
	tqp_vector->tx_group.coal.flow_level = HNS3_FLOW_LOW;
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
          int _len_tqp_vector0 = 1;
          struct hns3_enet_tqp_vector * tqp_vector = (struct hns3_enet_tqp_vector *) malloc(_len_tqp_vector0*sizeof(struct hns3_enet_tqp_vector));
          for(int _i0 = 0; _i0 < _len_tqp_vector0; _i0++) {
            tqp_vector[_i0].tx_group.coal.gl_adapt_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        tqp_vector[_i0].rx_group.coal.gl_adapt_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        tqp_vector[_i0].int_adapt_down = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv0 = 1;
          struct hns3_nic_priv * priv = (struct hns3_nic_priv *) malloc(_len_priv0*sizeof(struct hns3_nic_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__ae_handle0 = 1;
          priv[_i0].ae_handle = (struct hnae3_handle *) malloc(_len_priv__i0__ae_handle0*sizeof(struct hnae3_handle));
          for(int _j0 = 0; _j0 < _len_priv__i0__ae_handle0; _j0++) {
            priv[_i0].ae_handle->kinfo.int_rl_setting = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hns3_vector_gl_rl_init(tqp_vector,priv);
          free(tqp_vector);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ae_handle);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
