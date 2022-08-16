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
       1            big-arr-10x\n\
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
struct device {int dummy; } ;

/* Variables and functions */
#define  ARIZONA_AOD_IRQ1 199 
#define  ARIZONA_AOD_IRQ2 198 
#define  ARIZONA_AOD_IRQ_RAW_STATUS 197 
#define  ARIZONA_AOD_WKUP_AND_TRIG 196 
#define  ARIZONA_ASYNC_SAMPLE_RATE_1_STATUS 195 
#define  ARIZONA_ASYNC_SAMPLE_RATE_2_STATUS 194 
#define  ARIZONA_DAC_COMP_1 193 
#define  ARIZONA_DAC_COMP_2 192 
#define  ARIZONA_DAC_COMP_3 191 
#define  ARIZONA_DAC_COMP_4 190 
#define  ARIZONA_DEVICE_REVISION 189 
#define  ARIZONA_DSP1_CLOCKING_1 188 
#define  ARIZONA_DSP1_RDMA_BUFFER_1 187 
#define  ARIZONA_DSP1_RDMA_BUFFER_2 186 
#define  ARIZONA_DSP1_RDMA_BUFFER_3 185 
#define  ARIZONA_DSP1_RDMA_BUFFER_4 184 
#define  ARIZONA_DSP1_RDMA_BUFFER_5 183 
#define  ARIZONA_DSP1_RDMA_BUFFER_6 182 
#define  ARIZONA_DSP1_RDMA_CONFIG_1 181 
#define  ARIZONA_DSP1_SCRATCH_0 180 
#define  ARIZONA_DSP1_SCRATCH_1 179 
#define  ARIZONA_DSP1_SCRATCH_2 178 
#define  ARIZONA_DSP1_SCRATCH_3 177 
#define  ARIZONA_DSP1_STATUS_1 176 
#define  ARIZONA_DSP1_STATUS_2 175 
#define  ARIZONA_DSP1_STATUS_3 174 
#define  ARIZONA_DSP1_WDMA_BUFFER_1 173 
#define  ARIZONA_DSP1_WDMA_BUFFER_2 172 
#define  ARIZONA_DSP1_WDMA_BUFFER_3 171 
#define  ARIZONA_DSP1_WDMA_BUFFER_4 170 
#define  ARIZONA_DSP1_WDMA_BUFFER_5 169 
#define  ARIZONA_DSP1_WDMA_BUFFER_6 168 
#define  ARIZONA_DSP1_WDMA_BUFFER_7 167 
#define  ARIZONA_DSP1_WDMA_BUFFER_8 166 
#define  ARIZONA_DSP1_WDMA_CONFIG_1 165 
#define  ARIZONA_DSP1_WDMA_CONFIG_2 164 
#define  ARIZONA_FX_CTRL2 163 
#define  ARIZONA_HAPTICS_STATUS 162 
#define  ARIZONA_HEADPHONE_DETECT_2 161 
#define  ARIZONA_HP_CTRL_1L 160 
#define  ARIZONA_HP_CTRL_1R 159 
#define  ARIZONA_HP_DACVAL 158 
#define  ARIZONA_INTERRUPT_RAW_STATUS_2 157 
#define  ARIZONA_INTERRUPT_RAW_STATUS_3 156 
#define  ARIZONA_INTERRUPT_RAW_STATUS_4 155 
#define  ARIZONA_INTERRUPT_RAW_STATUS_5 154 
#define  ARIZONA_INTERRUPT_RAW_STATUS_6 153 
#define  ARIZONA_INTERRUPT_RAW_STATUS_7 152 
#define  ARIZONA_INTERRUPT_RAW_STATUS_8 151 
#define  ARIZONA_INTERRUPT_STATUS_1 150 
#define  ARIZONA_INTERRUPT_STATUS_2 149 
#define  ARIZONA_INTERRUPT_STATUS_3 148 
#define  ARIZONA_INTERRUPT_STATUS_4 147 
#define  ARIZONA_INTERRUPT_STATUS_5 146 
#define  ARIZONA_IRQ2_STATUS_1 145 
#define  ARIZONA_IRQ2_STATUS_2 144 
#define  ARIZONA_IRQ2_STATUS_3 143 
#define  ARIZONA_IRQ2_STATUS_4 142 
#define  ARIZONA_IRQ2_STATUS_5 141 
#define  ARIZONA_IRQ_PIN_STATUS 140 
#define  ARIZONA_MIC_DETECT_3 139 
#define  ARIZONA_OUTPUT_STATUS_1 138 
#define  ARIZONA_SAMPLE_RATE_1_STATUS 137 
#define  ARIZONA_SAMPLE_RATE_2_STATUS 136 
#define  ARIZONA_SAMPLE_RATE_3_STATUS 135 
#define  ARIZONA_SLIMBUS_RX_PORT_STATUS 134 
#define  ARIZONA_SLIMBUS_TX_PORT_STATUS 133 
#define  ARIZONA_SOFTWARE_RESET 132 
#define  ARIZONA_WRITE_SEQUENCER_CTRL_0 131 
#define  ARIZONA_WRITE_SEQUENCER_CTRL_1 130 
#define  ARIZONA_WRITE_SEQUENCER_CTRL_2 129 
#define  ARIZONA_WRITE_SEQUENCER_CTRL_3 128 

__attribute__((used)) static bool wm5102_volatile_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case ARIZONA_SOFTWARE_RESET:
	case ARIZONA_DEVICE_REVISION:
	case ARIZONA_WRITE_SEQUENCER_CTRL_0:
	case ARIZONA_WRITE_SEQUENCER_CTRL_1:
	case ARIZONA_WRITE_SEQUENCER_CTRL_2:
	case ARIZONA_WRITE_SEQUENCER_CTRL_3:
	case ARIZONA_OUTPUT_STATUS_1:
	case ARIZONA_SLIMBUS_RX_PORT_STATUS:
	case ARIZONA_SLIMBUS_TX_PORT_STATUS:
	case ARIZONA_SAMPLE_RATE_1_STATUS:
	case ARIZONA_SAMPLE_RATE_2_STATUS:
	case ARIZONA_SAMPLE_RATE_3_STATUS:
	case ARIZONA_HAPTICS_STATUS:
	case ARIZONA_ASYNC_SAMPLE_RATE_1_STATUS:
	case ARIZONA_ASYNC_SAMPLE_RATE_2_STATUS:
	case ARIZONA_DAC_COMP_1:
	case ARIZONA_DAC_COMP_2:
	case ARIZONA_DAC_COMP_3:
	case ARIZONA_DAC_COMP_4:
	case ARIZONA_FX_CTRL2:
	case ARIZONA_INTERRUPT_STATUS_1:
	case ARIZONA_INTERRUPT_STATUS_2:
	case ARIZONA_INTERRUPT_STATUS_3:
	case ARIZONA_INTERRUPT_STATUS_4:
	case ARIZONA_INTERRUPT_STATUS_5:
	case ARIZONA_IRQ2_STATUS_1:
	case ARIZONA_IRQ2_STATUS_2:
	case ARIZONA_IRQ2_STATUS_3:
	case ARIZONA_IRQ2_STATUS_4:
	case ARIZONA_IRQ2_STATUS_5:
	case ARIZONA_INTERRUPT_RAW_STATUS_2:
	case ARIZONA_INTERRUPT_RAW_STATUS_3:
	case ARIZONA_INTERRUPT_RAW_STATUS_4:
	case ARIZONA_INTERRUPT_RAW_STATUS_5:
	case ARIZONA_INTERRUPT_RAW_STATUS_6:
	case ARIZONA_INTERRUPT_RAW_STATUS_7:
	case ARIZONA_INTERRUPT_RAW_STATUS_8:
	case ARIZONA_IRQ_PIN_STATUS:
	case ARIZONA_AOD_WKUP_AND_TRIG:
	case ARIZONA_AOD_IRQ1:
	case ARIZONA_AOD_IRQ2:
	case ARIZONA_AOD_IRQ_RAW_STATUS:
	case ARIZONA_DSP1_CLOCKING_1:
	case ARIZONA_DSP1_STATUS_1:
	case ARIZONA_DSP1_STATUS_2:
	case ARIZONA_DSP1_STATUS_3:
	case ARIZONA_DSP1_WDMA_BUFFER_1:
	case ARIZONA_DSP1_WDMA_BUFFER_2:
	case ARIZONA_DSP1_WDMA_BUFFER_3:
	case ARIZONA_DSP1_WDMA_BUFFER_4:
	case ARIZONA_DSP1_WDMA_BUFFER_5:
	case ARIZONA_DSP1_WDMA_BUFFER_6:
	case ARIZONA_DSP1_WDMA_BUFFER_7:
	case ARIZONA_DSP1_WDMA_BUFFER_8:
	case ARIZONA_DSP1_RDMA_BUFFER_1:
	case ARIZONA_DSP1_RDMA_BUFFER_2:
	case ARIZONA_DSP1_RDMA_BUFFER_3:
	case ARIZONA_DSP1_RDMA_BUFFER_4:
	case ARIZONA_DSP1_RDMA_BUFFER_5:
	case ARIZONA_DSP1_RDMA_BUFFER_6:
	case ARIZONA_DSP1_WDMA_CONFIG_1:
	case ARIZONA_DSP1_WDMA_CONFIG_2:
	case ARIZONA_DSP1_RDMA_CONFIG_1:
	case ARIZONA_DSP1_SCRATCH_0:
	case ARIZONA_DSP1_SCRATCH_1:
	case ARIZONA_DSP1_SCRATCH_2:
	case ARIZONA_DSP1_SCRATCH_3:
	case ARIZONA_HP_CTRL_1L:
	case ARIZONA_HP_CTRL_1R:
	case ARIZONA_HEADPHONE_DETECT_2:
	case ARIZONA_HP_DACVAL:
	case ARIZONA_MIC_DETECT_3:
		return true;
	default:
		if ((reg >= 0x100000 && reg < 0x106000) ||
		    (reg >= 0x180000 && reg < 0x180800) ||
		    (reg >= 0x190000 && reg < 0x194800) ||
		    (reg >= 0x1a8000 && reg < 0x1a9800))
			return true;
		else
			return false;
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
          unsigned int reg = 100;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm5102_volatile_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm5102_volatile_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
