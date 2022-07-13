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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct se_cmd {TYPE_2__* se_dev; } ;
struct TYPE_3__ {int block_size; } ;
struct TYPE_4__ {TYPE_1__ dev_attrib; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 sbc_get_size(struct se_cmd *cmd, u32 sectors)
{
	return cmd->se_dev->dev_attrib.block_size * sectors;
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
          int sectors = 100;
          int _len_cmd0 = 1;
          struct se_cmd * cmd = (struct se_cmd *) malloc(_len_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__se_dev0 = 1;
          cmd[_i0].se_dev = (struct TYPE_4__ *) malloc(_len_cmd__i0__se_dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__se_dev0; _j0++) {
            cmd[_i0].se_dev->dev_attrib.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sbc_get_size(cmd,sectors);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].se_dev);
          }
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sectors = 255;
          int _len_cmd0 = 65025;
          struct se_cmd * cmd = (struct se_cmd *) malloc(_len_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__se_dev0 = 1;
          cmd[_i0].se_dev = (struct TYPE_4__ *) malloc(_len_cmd__i0__se_dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__se_dev0; _j0++) {
            cmd[_i0].se_dev->dev_attrib.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sbc_get_size(cmd,sectors);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].se_dev);
          }
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sectors = 10;
          int _len_cmd0 = 100;
          struct se_cmd * cmd = (struct se_cmd *) malloc(_len_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__se_dev0 = 1;
          cmd[_i0].se_dev = (struct TYPE_4__ *) malloc(_len_cmd__i0__se_dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__se_dev0; _j0++) {
            cmd[_i0].se_dev->dev_attrib.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sbc_get_size(cmd,sectors);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].se_dev);
          }
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
