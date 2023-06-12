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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int externalsr; } ;
struct TYPE_5__ {int sfreq; } ;
struct TYPE_7__ {TYPE_2__ aac_params; TYPE_1__ pcm_params; } ;
struct TYPE_8__ {TYPE_3__ uc; } ;
struct snd_sst_params {int codec; TYPE_4__ sparams; } ;

/* Variables and functions */
 int EINVAL ; 
#define  SST_CODEC_TYPE_AAC 130 
#define  SST_CODEC_TYPE_MP3 129 
#define  SST_CODEC_TYPE_PCM 128 

int sst_get_sfreq(struct snd_sst_params *str_param)
{
	switch (str_param->codec) {
	case SST_CODEC_TYPE_PCM:
		return str_param->sparams.uc.pcm_params.sfreq;
	case SST_CODEC_TYPE_AAC:
		return str_param->sparams.uc.aac_params.externalsr;
	case SST_CODEC_TYPE_MP3:
		return 0;
	default:
		return -EINVAL;
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_str_param0 = 65025;
          struct snd_sst_params * str_param = (struct snd_sst_params *) malloc(_len_str_param0*sizeof(struct snd_sst_params));
          for(int _i0 = 0; _i0 < _len_str_param0; _i0++) {
              str_param[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
          str_param[_i0].sparams.uc.aac_params.externalsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          str_param[_i0].sparams.uc.pcm_params.sfreq = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = sst_get_sfreq(str_param);
          printf("%d\n", benchRet); 
          free(str_param);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_str_param0 = 100;
          struct snd_sst_params * str_param = (struct snd_sst_params *) malloc(_len_str_param0*sizeof(struct snd_sst_params));
          for(int _i0 = 0; _i0 < _len_str_param0; _i0++) {
              str_param[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
          str_param[_i0].sparams.uc.aac_params.externalsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          str_param[_i0].sparams.uc.pcm_params.sfreq = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = sst_get_sfreq(str_param);
          printf("%d\n", benchRet); 
          free(str_param);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_str_param0 = 1;
          struct snd_sst_params * str_param = (struct snd_sst_params *) malloc(_len_str_param0*sizeof(struct snd_sst_params));
          for(int _i0 = 0; _i0 < _len_str_param0; _i0++) {
              str_param[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
          str_param[_i0].sparams.uc.aac_params.externalsr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          str_param[_i0].sparams.uc.pcm_params.sfreq = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = sst_get_sfreq(str_param);
          printf("%d\n", benchRet); 
          free(str_param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
