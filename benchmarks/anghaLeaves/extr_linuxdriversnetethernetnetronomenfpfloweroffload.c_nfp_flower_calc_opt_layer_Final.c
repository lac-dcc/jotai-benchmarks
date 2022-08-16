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
typedef  int /*<<< orphan*/  u32 ;
struct nfp_flower_geneve_options {int dummy; } ;
struct flow_dissector_key_enc_opts {scalar_t__ len; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
 int /*<<< orphan*/  NFP_FLOWER_LAYER2_GENEVE_OP ; 
 scalar_t__ NFP_FL_MAX_GENEVE_OPT_KEY ; 

__attribute__((used)) static int
nfp_flower_calc_opt_layer(struct flow_dissector_key_enc_opts *enc_opts,
			  u32 *key_layer_two, int *key_size)
{
	if (enc_opts->len > NFP_FL_MAX_GENEVE_OPT_KEY)
		return -EOPNOTSUPP;

	if (enc_opts->len > 0) {
		*key_layer_two |= NFP_FLOWER_LAYER2_GENEVE_OP;
		*key_size += sizeof(struct nfp_flower_geneve_options);
	}

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
          int _len_enc_opts0 = 1;
          struct flow_dissector_key_enc_opts * enc_opts = (struct flow_dissector_key_enc_opts *) malloc(_len_enc_opts0*sizeof(struct flow_dissector_key_enc_opts));
          for(int _i0 = 0; _i0 < _len_enc_opts0; _i0++) {
            enc_opts[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key_layer_two0 = 1;
          int * key_layer_two = (int *) malloc(_len_key_layer_two0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key_layer_two0; _i0++) {
            key_layer_two[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key_size0 = 1;
          int * key_size = (int *) malloc(_len_key_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key_size0; _i0++) {
            key_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfp_flower_calc_opt_layer(enc_opts,key_layer_two,key_size);
          printf("%d\n", benchRet); 
          free(enc_opts);
          free(key_layer_two);
          free(key_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
