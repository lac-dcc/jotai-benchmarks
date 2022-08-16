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
struct mlxsw_afa_block {TYPE_2__* first_set; } ;
struct TYPE_3__ {char* enc_actions; } ;
struct TYPE_4__ {TYPE_1__ ht_key; } ;

/* Variables and functions */

char *mlxsw_afa_block_first_set(struct mlxsw_afa_block *block)
{
	return block->first_set->ht_key.enc_actions;
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
          int _len_block0 = 1;
          struct mlxsw_afa_block * block = (struct mlxsw_afa_block *) malloc(_len_block0*sizeof(struct mlxsw_afa_block));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              int _len_block__i0__first_set0 = 1;
          block[_i0].first_set = (struct TYPE_4__ *) malloc(_len_block__i0__first_set0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_block__i0__first_set0; _j0++) {
              int _len_block__i0__first_set_ht_key_enc_actions0 = 1;
          block[_i0].first_set->ht_key.enc_actions = (char *) malloc(_len_block__i0__first_set_ht_key_enc_actions0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_block__i0__first_set_ht_key_enc_actions0; _j0++) {
            block[_i0].first_set->ht_key.enc_actions[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          char * benchRet = mlxsw_afa_block_first_set(block);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].first_set);
          }
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
