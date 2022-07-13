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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct ib_uverbs_flow_action_esp_keymat_aes_gcm {scalar_t__ iv_algo; int key_len; int icv_len; } ;
struct TYPE_2__ {struct ib_uverbs_flow_action_esp_keymat_aes_gcm aes_gcm; } ;
struct ib_flow_action_attrs_esp_keymats {TYPE_1__ keymat; } ;

/* Variables and functions */
 int EINVAL ; 
 int EOPNOTSUPP ; 
 scalar_t__ IB_UVERBS_FLOW_ACTION_IV_ALGO_SEQ ; 

__attribute__((used)) static int validate_flow_action_esp_keymat_aes_gcm(struct ib_flow_action_attrs_esp_keymats *keymat)
{
	struct ib_uverbs_flow_action_esp_keymat_aes_gcm *aes_gcm =
		&keymat->keymat.aes_gcm;

	if (aes_gcm->iv_algo > IB_UVERBS_FLOW_ACTION_IV_ALGO_SEQ)
		return -EOPNOTSUPP;

	if (aes_gcm->key_len != 32 &&
	    aes_gcm->key_len != 24 &&
	    aes_gcm->key_len != 16)
		return -EINVAL;

	if (aes_gcm->icv_len != 16 &&
	    aes_gcm->icv_len != 8 &&
	    aes_gcm->icv_len != 12)
		return -EINVAL;

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
          int _len_keymat0 = 1;
          struct ib_flow_action_attrs_esp_keymats * keymat = (struct ib_flow_action_attrs_esp_keymats *) malloc(_len_keymat0*sizeof(struct ib_flow_action_attrs_esp_keymats));
          for(int _i0 = 0; _i0 < _len_keymat0; _i0++) {
            keymat[_i0].keymat.aes_gcm.iv_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        keymat[_i0].keymat.aes_gcm.key_len = ((-2 * (next_i()%2)) + 1) * next_i();
        keymat[_i0].keymat.aes_gcm.icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = validate_flow_action_esp_keymat_aes_gcm(keymat);
          printf("%d\n", benchRet); 
          free(keymat);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_keymat0 = 65025;
          struct ib_flow_action_attrs_esp_keymats * keymat = (struct ib_flow_action_attrs_esp_keymats *) malloc(_len_keymat0*sizeof(struct ib_flow_action_attrs_esp_keymats));
          for(int _i0 = 0; _i0 < _len_keymat0; _i0++) {
            keymat[_i0].keymat.aes_gcm.iv_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        keymat[_i0].keymat.aes_gcm.key_len = ((-2 * (next_i()%2)) + 1) * next_i();
        keymat[_i0].keymat.aes_gcm.icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = validate_flow_action_esp_keymat_aes_gcm(keymat);
          printf("%d\n", benchRet); 
          free(keymat);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_keymat0 = 100;
          struct ib_flow_action_attrs_esp_keymats * keymat = (struct ib_flow_action_attrs_esp_keymats *) malloc(_len_keymat0*sizeof(struct ib_flow_action_attrs_esp_keymats));
          for(int _i0 = 0; _i0 < _len_keymat0; _i0++) {
            keymat[_i0].keymat.aes_gcm.iv_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        keymat[_i0].keymat.aes_gcm.key_len = ((-2 * (next_i()%2)) + 1) * next_i();
        keymat[_i0].keymat.aes_gcm.icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = validate_flow_action_esp_keymat_aes_gcm(keymat);
          printf("%d\n", benchRet); 
          free(keymat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
