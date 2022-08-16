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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u32 ;
typedef  enum qe_clock { ____Placeholder_qe_clock } qe_clock ;
typedef  enum comm_dir { ____Placeholder_comm_dir } comm_dir ;

/* Variables and functions */
 int COMM_DIR_RX ; 
 int COMM_DIR_TX ; 
 int EINVAL ; 
#define  QE_BRG10 133 
#define  QE_BRG11 132 
#define  QE_BRG13 131 
#define  QE_BRG14 130 
#define  QE_BRG15 129 
#define  QE_BRG9 128 
 int QE_RSYNC_PIN ; 
 int QE_TSYNC_PIN ; 

__attribute__((used)) static int ucc_get_tdm_sync_source(u32 tdm_num, enum qe_clock clock,
				   enum comm_dir mode)
{
	int source = -EINVAL;

	if (mode == COMM_DIR_RX && clock == QE_RSYNC_PIN) {
		source = 0;
		return source;
	}
	if (mode == COMM_DIR_TX && clock == QE_TSYNC_PIN) {
		source = 0;
		return source;
	}

	switch (tdm_num) {
	case 0:
	case 1:
		switch (clock) {
		case QE_BRG9:
			source = 1;
			break;
		case QE_BRG10:
			source = 2;
			break;
		default:
			break;
		}
		break;
	case 2:
	case 3:
		switch (clock) {
		case QE_BRG9:
			source = 1;
			break;
		case QE_BRG11:
			source = 2;
			break;
		default:
			break;
		}
		break;
	case 4:
	case 5:
		switch (clock) {
		case QE_BRG13:
			source = 1;
			break;
		case QE_BRG14:
			source = 2;
			break;
		default:
			break;
		}
		break;
	case 6:
	case 7:
		switch (clock) {
		case QE_BRG13:
			source = 1;
			break;
		case QE_BRG15:
			source = 2;
			break;
		default:
			break;
		}
		break;
	}

	return source;
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
          int tdm_num = 100;
          enum qe_clock clock = 0;
          enum comm_dir mode = 0;
          int benchRet = ucc_get_tdm_sync_source(tdm_num,clock,mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tdm_num = 255;
          enum qe_clock clock = 0;
          enum comm_dir mode = 0;
          int benchRet = ucc_get_tdm_sync_source(tdm_num,clock,mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tdm_num = 10;
          enum qe_clock clock = 0;
          enum comm_dir mode = 0;
          int benchRet = ucc_get_tdm_sync_source(tdm_num,clock,mode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
