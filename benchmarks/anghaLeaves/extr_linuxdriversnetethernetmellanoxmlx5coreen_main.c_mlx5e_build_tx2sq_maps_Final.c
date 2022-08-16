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
struct mlx5e_txqsq {size_t txq_ix; } ;
struct TYPE_2__ {int num; struct mlx5e_channel** c; } ;
struct mlx5e_priv {struct mlx5e_txqsq** txq2sq; TYPE_1__ channels; } ;
struct mlx5e_channel {int num_tc; struct mlx5e_txqsq* sq; } ;

/* Variables and functions */

__attribute__((used)) static void mlx5e_build_tx2sq_maps(struct mlx5e_priv *priv)
{
	struct mlx5e_channel *c;
	struct mlx5e_txqsq *sq;
	int i, tc;

	for (i = 0; i < priv->channels.num; i++) {
		c = priv->channels.c[i];
		for (tc = 0; tc < c->num_tc; tc++) {
			sq = &c->sq[tc];
			priv->txq2sq[sq->txq_ix] = sq;
		}
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

    // int-bounds
    case 0:
    {
          int _len_priv0 = 1;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__txq2sq0 = 1;
          priv[_i0].txq2sq = (struct mlx5e_txqsq **) malloc(_len_priv__i0__txq2sq0*sizeof(struct mlx5e_txqsq *));
          for(int _j0 = 0; _j0 < _len_priv__i0__txq2sq0; _j0++) {
            int _len_priv__i0__txq2sq1 = 1;
            priv[_i0].txq2sq[_j0] = (struct mlx5e_txqsq *) malloc(_len_priv__i0__txq2sq1*sizeof(struct mlx5e_txqsq));
            for(int _j1 = 0; _j1 < _len_priv__i0__txq2sq1; _j1++) {
              priv[_i0].txq2sq[_j0]->txq_ix = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        priv[_i0].channels.num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__channels_c0 = 1;
          priv[_i0].channels.c = (struct mlx5e_channel **) malloc(_len_priv__i0__channels_c0*sizeof(struct mlx5e_channel *));
          for(int _j0 = 0; _j0 < _len_priv__i0__channels_c0; _j0++) {
            int _len_priv__i0__channels_c1 = 1;
            priv[_i0].channels.c[_j0] = (struct mlx5e_channel *) malloc(_len_priv__i0__channels_c1*sizeof(struct mlx5e_channel));
            for(int _j1 = 0; _j1 < _len_priv__i0__channels_c1; _j1++) {
              priv[_i0].channels.c[_j0]->num_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__channels_c__j0__sq0 = 1;
          priv[_i0].channels.c[_j0]->sq = (struct mlx5e_txqsq *) malloc(_len_priv__i0__channels_c__j0__sq0*sizeof(struct mlx5e_txqsq));
          for(int _j0 = 0; _j0 < _len_priv__i0__channels_c__j0__sq0; _j0++) {
            priv[_i0].channels.c[_j0]->sq->txq_ix = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          mlx5e_build_tx2sq_maps(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(*(priv[_aux].txq2sq));
        free(priv[_aux].txq2sq);
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
