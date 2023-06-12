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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int channel; int param; int value; } ;
struct TYPE_4__ {TYPE_1__ control; } ;
struct snd_seq_event {scalar_t__ type; TYPE_2__ data; } ;
struct snd_midi_event {unsigned char lastcmd; scalar_t__ nostat; } ;

/* Variables and functions */
 int ENOMEM ; 
 int MIDI_CMD_CONTROL ; 
#define  MIDI_CTL_LSB_DATA_ENTRY 133 
#define  MIDI_CTL_MSB_DATA_ENTRY 132 
#define  MIDI_CTL_NONREG_PARM_NUM_LSB 131 
#define  MIDI_CTL_NONREG_PARM_NUM_MSB 130 
#define  MIDI_CTL_REGIST_PARM_NUM_LSB 129 
#define  MIDI_CTL_REGIST_PARM_NUM_MSB 128 
 scalar_t__ SNDRV_SEQ_EVENT_NONREGPARAM ; 

__attribute__((used)) static int extra_decode_xrpn(struct snd_midi_event *dev, unsigned char *buf,
			     int count, struct snd_seq_event *ev)
{
	unsigned char cmd;
	char *cbytes;
	static char cbytes_nrpn[4] = { MIDI_CTL_NONREG_PARM_NUM_MSB,
				       MIDI_CTL_NONREG_PARM_NUM_LSB,
				       MIDI_CTL_MSB_DATA_ENTRY,
				       MIDI_CTL_LSB_DATA_ENTRY };
	static char cbytes_rpn[4] =  { MIDI_CTL_REGIST_PARM_NUM_MSB,
				       MIDI_CTL_REGIST_PARM_NUM_LSB,
				       MIDI_CTL_MSB_DATA_ENTRY,
				       MIDI_CTL_LSB_DATA_ENTRY };
	unsigned char bytes[4];
	int idx = 0, i;

	if (count < 8)
		return -ENOMEM;
	if (dev->nostat && count < 12)
		return -ENOMEM;
	cmd = MIDI_CMD_CONTROL|(ev->data.control.channel & 0x0f);
	bytes[0] = (ev->data.control.param & 0x3f80) >> 7;
	bytes[1] = ev->data.control.param & 0x007f;
	bytes[2] = (ev->data.control.value & 0x3f80) >> 7;
	bytes[3] = ev->data.control.value & 0x007f;
	if (cmd != dev->lastcmd && !dev->nostat) {
		if (count < 9)
			return -ENOMEM;
		buf[idx++] = dev->lastcmd = cmd;
	}
	cbytes = ev->type == SNDRV_SEQ_EVENT_NONREGPARAM ? cbytes_nrpn : cbytes_rpn;
	for (i = 0; i < 4; i++) {
		if (dev->nostat)
			buf[idx++] = dev->lastcmd = cmd;
		buf[idx++] = cbytes[i];
		buf[idx++] = bytes[i];
	}
	return idx;
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
          // static_instructions_O0 : 98
          // dynamic_instructions_O0 : 214
          // ------------------------------- 
          // static_instructions_O1 : 52
          // dynamic_instructions_O1 : 100
          // ------------------------------- 
          // static_instructions_O2 : 82
          // dynamic_instructions_O2 : 82
          // ------------------------------- 
          // static_instructions_O3 : 82
          // dynamic_instructions_O3 : 82
          // ------------------------------- 
          // static_instructions_Ofast : 82
          // dynamic_instructions_Ofast : 82
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 96
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 101
          // ------------------------------- 

          int count = 255;
        
          int _len_dev0 = 65025;
          struct snd_midi_event * dev = (struct snd_midi_event *) malloc(_len_dev0*sizeof(struct snd_midi_event));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].lastcmd = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].nostat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ev0 = 65025;
          struct snd_seq_event * ev = (struct snd_seq_event *) malloc(_len_ev0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
              ev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.channel = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.param = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.value = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = extra_decode_xrpn(dev,buf,count,ev);
          printf("%d\n", benchRet); 
          free(dev);
          free(buf);
          free(ev);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int count = 10;
        
          int _len_dev0 = 100;
          struct snd_midi_event * dev = (struct snd_midi_event *) malloc(_len_dev0*sizeof(struct snd_midi_event));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].lastcmd = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].nostat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ev0 = 100;
          struct snd_seq_event * ev = (struct snd_seq_event *) malloc(_len_ev0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
              ev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.channel = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.param = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.value = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = extra_decode_xrpn(dev,buf,count,ev);
          printf("%d\n", benchRet); 
          free(dev);
          free(buf);
          free(ev);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct snd_midi_event * dev = (struct snd_midi_event *) malloc(_len_dev0*sizeof(struct snd_midi_event));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].lastcmd = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].nostat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ev0 = 1;
          struct snd_seq_event * ev = (struct snd_seq_event *) malloc(_len_ev0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_ev0; _i0++) {
              ev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.channel = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.param = ((-2 * (next_i()%2)) + 1) * next_i();
          ev[_i0].data.control.value = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = extra_decode_xrpn(dev,buf,count,ev);
          printf("%d\n", benchRet); 
          free(dev);
          free(buf);
          free(ev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
