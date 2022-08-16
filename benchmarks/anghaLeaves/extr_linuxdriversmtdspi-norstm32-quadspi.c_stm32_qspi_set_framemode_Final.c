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
struct stm32_qspi_cmd {scalar_t__ addr_width; int /*<<< orphan*/  framemode; scalar_t__ tx_data; } ;
struct spi_nor {int read_proto; } ;

/* Variables and functions */
 int /*<<< orphan*/  CCR_ADMODE_1 ; 
 int /*<<< orphan*/  CCR_DMODE_1 ; 
 int /*<<< orphan*/  CCR_DMODE_2 ; 
 int /*<<< orphan*/  CCR_DMODE_4 ; 
 int /*<<< orphan*/  CCR_IMODE_1 ; 
#define  SNOR_PROTO_1_1_1 130 
#define  SNOR_PROTO_1_1_2 129 
#define  SNOR_PROTO_1_1_4 128 

__attribute__((used)) static void stm32_qspi_set_framemode(struct spi_nor *nor,
				     struct stm32_qspi_cmd *cmd, bool read)
{
	u32 dmode = CCR_DMODE_1;

	cmd->framemode = CCR_IMODE_1;

	if (read) {
		switch (nor->read_proto) {
		default:
		case SNOR_PROTO_1_1_1:
			dmode = CCR_DMODE_1;
			break;
		case SNOR_PROTO_1_1_2:
			dmode = CCR_DMODE_2;
			break;
		case SNOR_PROTO_1_1_4:
			dmode = CCR_DMODE_4;
			break;
		}
	}

	cmd->framemode |= cmd->tx_data ? dmode : 0;
	cmd->framemode |= cmd->addr_width ? CCR_ADMODE_1 : 0;
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
          int read = 100;
          int _len_nor0 = 1;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
            nor[_i0].read_proto = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct stm32_qspi_cmd * cmd = (struct stm32_qspi_cmd *) malloc(_len_cmd0*sizeof(struct stm32_qspi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].framemode = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].tx_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stm32_qspi_set_framemode(nor,cmd,read);
          free(nor);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
