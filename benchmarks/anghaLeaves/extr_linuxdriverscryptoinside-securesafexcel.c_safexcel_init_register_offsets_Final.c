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
struct safexcel_register_offsets {int /*<<< orphan*/  pe; int /*<<< orphan*/  hia_gen_cfg; int /*<<< orphan*/  hia_dse_thr; int /*<<< orphan*/  hia_dse; int /*<<< orphan*/  hia_dfe_thr; int /*<<< orphan*/  hia_dfe; int /*<<< orphan*/  hia_aic_xdr; int /*<<< orphan*/  hia_aic_r; int /*<<< orphan*/  hia_aic_g; int /*<<< orphan*/  hia_aic; } ;
struct safexcel_crypto_priv {int version; struct safexcel_register_offsets offsets; } ;

/* Variables and functions */
#define  EIP197B 130 
#define  EIP197D 129 
 int /*<<< orphan*/  EIP197_HIA_AIC_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_AIC_G_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_AIC_R_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_AIC_xDR_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_DFE_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_DFE_THR_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_DSE_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_DSE_THR_BASE ; 
 int /*<<< orphan*/  EIP197_HIA_GEN_CFG_BASE ; 
 int /*<<< orphan*/  EIP197_PE_BASE ; 
#define  EIP97IES 128 
 int /*<<< orphan*/  EIP97_HIA_AIC_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_AIC_G_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_AIC_R_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_AIC_xDR_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_DFE_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_DFE_THR_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_DSE_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_DSE_THR_BASE ; 
 int /*<<< orphan*/  EIP97_HIA_GEN_CFG_BASE ; 
 int /*<<< orphan*/  EIP97_PE_BASE ; 

__attribute__((used)) static void safexcel_init_register_offsets(struct safexcel_crypto_priv *priv)
{
	struct safexcel_register_offsets *offsets = &priv->offsets;

	switch (priv->version) {
	case EIP197B:
	case EIP197D:
		offsets->hia_aic	= EIP197_HIA_AIC_BASE;
		offsets->hia_aic_g	= EIP197_HIA_AIC_G_BASE;
		offsets->hia_aic_r	= EIP197_HIA_AIC_R_BASE;
		offsets->hia_aic_xdr	= EIP197_HIA_AIC_xDR_BASE;
		offsets->hia_dfe	= EIP197_HIA_DFE_BASE;
		offsets->hia_dfe_thr	= EIP197_HIA_DFE_THR_BASE;
		offsets->hia_dse	= EIP197_HIA_DSE_BASE;
		offsets->hia_dse_thr	= EIP197_HIA_DSE_THR_BASE;
		offsets->hia_gen_cfg	= EIP197_HIA_GEN_CFG_BASE;
		offsets->pe		= EIP197_PE_BASE;
		break;
	case EIP97IES:
		offsets->hia_aic	= EIP97_HIA_AIC_BASE;
		offsets->hia_aic_g	= EIP97_HIA_AIC_G_BASE;
		offsets->hia_aic_r	= EIP97_HIA_AIC_R_BASE;
		offsets->hia_aic_xdr	= EIP97_HIA_AIC_xDR_BASE;
		offsets->hia_dfe	= EIP97_HIA_DFE_BASE;
		offsets->hia_dfe_thr	= EIP97_HIA_DFE_THR_BASE;
		offsets->hia_dse	= EIP97_HIA_DSE_BASE;
		offsets->hia_dse_thr	= EIP97_HIA_DSE_THR_BASE;
		offsets->hia_gen_cfg	= EIP97_HIA_GEN_CFG_BASE;
		offsets->pe		= EIP97_PE_BASE;
		break;
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
          struct safexcel_crypto_priv * priv = (struct safexcel_crypto_priv *) malloc(_len_priv0*sizeof(struct safexcel_crypto_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.pe = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_gen_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_dse_thr = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_dse = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_dfe_thr = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_dfe = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_aic_xdr = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_aic_r = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_aic_g = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].offsets.hia_aic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          safexcel_init_register_offsets(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
