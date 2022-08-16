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
struct xfrm_state {TYPE_1__* aead; } ;
struct ipsec_sa_entry {int authsize; } ;
struct TYPE_2__ {int alg_icv_len; } ;

/* Variables and functions */
 int CHCR_SCMD_HMAC_CTRL_DIV2 ; 
 int CHCR_SCMD_HMAC_CTRL_IPSEC_96BIT ; 
 int CHCR_SCMD_HMAC_CTRL_NO_TRUNC ; 
 int EINVAL ; 
#define  ICV_12 130 
#define  ICV_16 129 
#define  ICV_8 128 

__attribute__((used)) static inline int chcr_ipsec_setauthsize(struct xfrm_state *x,
					 struct ipsec_sa_entry *sa_entry)
{
	int hmac_ctrl;
	int authsize = x->aead->alg_icv_len / 8;

	sa_entry->authsize = authsize;

	switch (authsize) {
	case ICV_8:
		hmac_ctrl = CHCR_SCMD_HMAC_CTRL_DIV2;
		break;
	case ICV_12:
		hmac_ctrl = CHCR_SCMD_HMAC_CTRL_IPSEC_96BIT;
		break;
	case ICV_16:
		hmac_ctrl = CHCR_SCMD_HMAC_CTRL_NO_TRUNC;
		break;
	default:
		return -EINVAL;
	}
	return hmac_ctrl;
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
          int _len_x0 = 1;
          struct xfrm_state * x = (struct xfrm_state *) malloc(_len_x0*sizeof(struct xfrm_state));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              int _len_x__i0__aead0 = 1;
          x[_i0].aead = (struct TYPE_2__ *) malloc(_len_x__i0__aead0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_x__i0__aead0; _j0++) {
            x[_i0].aead->alg_icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sa_entry0 = 1;
          struct ipsec_sa_entry * sa_entry = (struct ipsec_sa_entry *) malloc(_len_sa_entry0*sizeof(struct ipsec_sa_entry));
          for(int _i0 = 0; _i0 < _len_sa_entry0; _i0++) {
            sa_entry[_i0].authsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = chcr_ipsec_setauthsize(x,sa_entry);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].aead);
          }
          free(x);
          free(sa_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
