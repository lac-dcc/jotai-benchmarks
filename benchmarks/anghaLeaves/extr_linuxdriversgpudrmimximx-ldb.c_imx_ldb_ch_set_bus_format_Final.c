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
typedef  int u32 ;
struct imx_ldb_channel {int chno; struct imx_ldb* ldb; } ;
struct imx_ldb {int ldb_ctrl; } ;

/* Variables and functions */
 int LDB_BIT_MAP_CH0_JEIDA ; 
 int LDB_BIT_MAP_CH1_JEIDA ; 
 int LDB_DATA_WIDTH_CH0_24 ; 
 int LDB_DATA_WIDTH_CH1_24 ; 
 int LDB_SPLIT_MODE_EN ; 
#define  MEDIA_BUS_FMT_RGB666_1X7X3_SPWG 130 
#define  MEDIA_BUS_FMT_RGB888_1X7X4_JEIDA 129 
#define  MEDIA_BUS_FMT_RGB888_1X7X4_SPWG 128 

__attribute__((used)) static void imx_ldb_ch_set_bus_format(struct imx_ldb_channel *imx_ldb_ch,
				      u32 bus_format)
{
	struct imx_ldb *ldb = imx_ldb_ch->ldb;
	int dual = ldb->ldb_ctrl & LDB_SPLIT_MODE_EN;

	switch (bus_format) {
	case MEDIA_BUS_FMT_RGB666_1X7X3_SPWG:
		break;
	case MEDIA_BUS_FMT_RGB888_1X7X4_SPWG:
		if (imx_ldb_ch->chno == 0 || dual)
			ldb->ldb_ctrl |= LDB_DATA_WIDTH_CH0_24;
		if (imx_ldb_ch->chno == 1 || dual)
			ldb->ldb_ctrl |= LDB_DATA_WIDTH_CH1_24;
		break;
	case MEDIA_BUS_FMT_RGB888_1X7X4_JEIDA:
		if (imx_ldb_ch->chno == 0 || dual)
			ldb->ldb_ctrl |= LDB_DATA_WIDTH_CH0_24 |
					 LDB_BIT_MAP_CH0_JEIDA;
		if (imx_ldb_ch->chno == 1 || dual)
			ldb->ldb_ctrl |= LDB_DATA_WIDTH_CH1_24 |
					 LDB_BIT_MAP_CH1_JEIDA;
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
          int bus_format = 100;
          int _len_imx_ldb_ch0 = 1;
          struct imx_ldb_channel * imx_ldb_ch = (struct imx_ldb_channel *) malloc(_len_imx_ldb_ch0*sizeof(struct imx_ldb_channel));
          for(int _i0 = 0; _i0 < _len_imx_ldb_ch0; _i0++) {
            imx_ldb_ch[_i0].chno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_imx_ldb_ch__i0__ldb0 = 1;
          imx_ldb_ch[_i0].ldb = (struct imx_ldb *) malloc(_len_imx_ldb_ch__i0__ldb0*sizeof(struct imx_ldb));
          for(int _j0 = 0; _j0 < _len_imx_ldb_ch__i0__ldb0; _j0++) {
            imx_ldb_ch[_i0].ldb->ldb_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          imx_ldb_ch_set_bus_format(imx_ldb_ch,bus_format);
          for(int _aux = 0; _aux < _len_imx_ldb_ch0; _aux++) {
          free(imx_ldb_ch[_aux].ldb);
          }
          free(imx_ldb_ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
