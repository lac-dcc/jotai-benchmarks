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
struct snd_soc_tplg_link_config {int num_hw_configs; scalar_t__ default_hw_config_id; struct snd_soc_tplg_hw_config* hw_config; } ;
struct snd_soc_tplg_hw_config {scalar_t__ id; int fmt; int clock_gated; unsigned char invert_bclk; unsigned char invert_fsync; scalar_t__ bclk_master; scalar_t__ fsync_master; } ;
struct snd_soc_dai_link {int dai_fmt; } ;

/* Variables and functions */
 int SND_SOC_DAIFMT_CBM_CFM ; 
 int SND_SOC_DAIFMT_CBM_CFS ; 
 int SND_SOC_DAIFMT_CBS_CFM ; 
 int SND_SOC_DAIFMT_CBS_CFS ; 
 int SND_SOC_DAIFMT_CONT ; 
 int SND_SOC_DAIFMT_FORMAT_MASK ; 
 int SND_SOC_DAIFMT_GATED ; 
 int SND_SOC_DAIFMT_IB_IF ; 
 int SND_SOC_DAIFMT_IB_NF ; 
 int SND_SOC_DAIFMT_NB_IF ; 
 int SND_SOC_DAIFMT_NB_NF ; 
 scalar_t__ SND_SOC_TPLG_BCLK_CM ; 
#define  SND_SOC_TPLG_DAI_CLK_GATE_CONT 129 
#define  SND_SOC_TPLG_DAI_CLK_GATE_GATED 128 
 scalar_t__ SND_SOC_TPLG_FSYNC_CM ; 

__attribute__((used)) static void set_link_hw_format(struct snd_soc_dai_link *link,
			struct snd_soc_tplg_link_config *cfg)
{
	struct snd_soc_tplg_hw_config *hw_config;
	unsigned char bclk_master, fsync_master;
	unsigned char invert_bclk, invert_fsync;
	int i;

	for (i = 0; i < cfg->num_hw_configs; i++) {
		hw_config = &cfg->hw_config[i];
		if (hw_config->id != cfg->default_hw_config_id)
			continue;

		link->dai_fmt = hw_config->fmt & SND_SOC_DAIFMT_FORMAT_MASK;

		/* clock gating */
		switch (hw_config->clock_gated) {
		case SND_SOC_TPLG_DAI_CLK_GATE_GATED:
			link->dai_fmt |= SND_SOC_DAIFMT_GATED;
			break;

		case SND_SOC_TPLG_DAI_CLK_GATE_CONT:
			link->dai_fmt |= SND_SOC_DAIFMT_CONT;
			break;

		default:
			/* ignore the value */
			break;
		}

		/* clock signal polarity */
		invert_bclk = hw_config->invert_bclk;
		invert_fsync = hw_config->invert_fsync;
		if (!invert_bclk && !invert_fsync)
			link->dai_fmt |= SND_SOC_DAIFMT_NB_NF;
		else if (!invert_bclk && invert_fsync)
			link->dai_fmt |= SND_SOC_DAIFMT_NB_IF;
		else if (invert_bclk && !invert_fsync)
			link->dai_fmt |= SND_SOC_DAIFMT_IB_NF;
		else
			link->dai_fmt |= SND_SOC_DAIFMT_IB_IF;

		/* clock masters */
		bclk_master = (hw_config->bclk_master ==
			       SND_SOC_TPLG_BCLK_CM);
		fsync_master = (hw_config->fsync_master ==
				SND_SOC_TPLG_FSYNC_CM);
		if (bclk_master && fsync_master)
			link->dai_fmt |= SND_SOC_DAIFMT_CBM_CFM;
		else if (!bclk_master && fsync_master)
			link->dai_fmt |= SND_SOC_DAIFMT_CBS_CFM;
		else if (bclk_master && !fsync_master)
			link->dai_fmt |= SND_SOC_DAIFMT_CBM_CFS;
		else
			link->dai_fmt |= SND_SOC_DAIFMT_CBS_CFS;
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
          int _len_link0 = 1;
          struct snd_soc_dai_link * link = (struct snd_soc_dai_link *) malloc(_len_link0*sizeof(struct snd_soc_dai_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].dai_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 1;
          struct snd_soc_tplg_link_config * cfg = (struct snd_soc_tplg_link_config *) malloc(_len_cfg0*sizeof(struct snd_soc_tplg_link_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].num_hw_configs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].default_hw_config_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cfg__i0__hw_config0 = 1;
          cfg[_i0].hw_config = (struct snd_soc_tplg_hw_config *) malloc(_len_cfg__i0__hw_config0*sizeof(struct snd_soc_tplg_hw_config));
          for(int _j0 = 0; _j0 < _len_cfg__i0__hw_config0; _j0++) {
            cfg[_i0].hw_config->id = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].hw_config->fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].hw_config->clock_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].hw_config->invert_bclk = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].hw_config->invert_fsync = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].hw_config->bclk_master = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].hw_config->fsync_master = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_link_hw_format(link,cfg);
          free(link);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].hw_config);
          }
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
