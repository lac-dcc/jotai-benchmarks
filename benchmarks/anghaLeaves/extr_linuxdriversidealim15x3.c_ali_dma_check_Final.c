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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ide_cmd {int tf_flags; } ;
struct TYPE_3__ {scalar_t__ media; } ;
typedef  TYPE_1__ ide_drive_t ;

/* Variables and functions */
 int IDE_TFLAG_WRITE ; 
 scalar_t__ ide_disk ; 
 int m5229_revision ; 

__attribute__((used)) static int ali_dma_check(ide_drive_t *drive, struct ide_cmd *cmd)
{
	if (m5229_revision < 0xC2 && drive->media != ide_disk) {
		if (cmd->tf_flags & IDE_TFLAG_WRITE)
			return 1;	/* try PIO instead of DMA */
	}
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
          int _len_drive0 = 1;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive[_i0].media = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct ide_cmd * cmd = (struct ide_cmd *) malloc(_len_cmd0*sizeof(struct ide_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].tf_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ali_dma_check(drive,cmd);
          printf("%d\n", benchRet); 
          free(drive);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
