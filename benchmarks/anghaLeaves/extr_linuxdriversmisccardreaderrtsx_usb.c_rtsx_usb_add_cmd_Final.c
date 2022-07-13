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

/* Type definitions */
typedef  int u8 ;
typedef  int u16 ;
struct rtsx_ucr {int cmd_idx; int* cmd_buf; } ;

/* Variables and functions */
 int CMD_OFFSET ; 
 int IOBUF_SIZE ; 

void rtsx_usb_add_cmd(struct rtsx_ucr *ucr, u8 cmd_type, u16 reg_addr,
		u8 mask, u8 data)
{
	int i;

	if (ucr->cmd_idx < (IOBUF_SIZE - CMD_OFFSET) / 4) {
		i = CMD_OFFSET + ucr->cmd_idx * 4;

		ucr->cmd_buf[i++] = ((cmd_type & 0x03) << 6) |
			(u8)((reg_addr >> 8) & 0x3F);
		ucr->cmd_buf[i++] = (u8)reg_addr;
		ucr->cmd_buf[i++] = mask;
		ucr->cmd_buf[i++] = data;

		ucr->cmd_idx++;
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
          int cmd_type = 100;
          int reg_addr = 100;
          int mask = 100;
          int data = 100;
          int _len_ucr0 = 1;
          struct rtsx_ucr * ucr = (struct rtsx_ucr *) malloc(_len_ucr0*sizeof(struct rtsx_ucr));
          for(int _i0 = 0; _i0 < _len_ucr0; _i0++) {
            ucr[_i0].cmd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ucr__i0__cmd_buf0 = 1;
          ucr[_i0].cmd_buf = (int *) malloc(_len_ucr__i0__cmd_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ucr__i0__cmd_buf0; _j0++) {
            ucr[_i0].cmd_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtsx_usb_add_cmd(ucr,cmd_type,reg_addr,mask,data);
          for(int _aux = 0; _aux < _len_ucr0; _aux++) {
          free(ucr[_aux].cmd_buf);
          }
          free(ucr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd_type = 255;
          int reg_addr = 255;
          int mask = 255;
          int data = 255;
          int _len_ucr0 = 65025;
          struct rtsx_ucr * ucr = (struct rtsx_ucr *) malloc(_len_ucr0*sizeof(struct rtsx_ucr));
          for(int _i0 = 0; _i0 < _len_ucr0; _i0++) {
            ucr[_i0].cmd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ucr__i0__cmd_buf0 = 1;
          ucr[_i0].cmd_buf = (int *) malloc(_len_ucr__i0__cmd_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ucr__i0__cmd_buf0; _j0++) {
            ucr[_i0].cmd_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtsx_usb_add_cmd(ucr,cmd_type,reg_addr,mask,data);
          for(int _aux = 0; _aux < _len_ucr0; _aux++) {
          free(ucr[_aux].cmd_buf);
          }
          free(ucr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd_type = 10;
          int reg_addr = 10;
          int mask = 10;
          int data = 10;
          int _len_ucr0 = 100;
          struct rtsx_ucr * ucr = (struct rtsx_ucr *) malloc(_len_ucr0*sizeof(struct rtsx_ucr));
          for(int _i0 = 0; _i0 < _len_ucr0; _i0++) {
            ucr[_i0].cmd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ucr__i0__cmd_buf0 = 1;
          ucr[_i0].cmd_buf = (int *) malloc(_len_ucr__i0__cmd_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ucr__i0__cmd_buf0; _j0++) {
            ucr[_i0].cmd_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtsx_usb_add_cmd(ucr,cmd_type,reg_addr,mask,data);
          for(int _aux = 0; _aux < _len_ucr0; _aux++) {
          free(ucr[_aux].cmd_buf);
          }
          free(ucr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
