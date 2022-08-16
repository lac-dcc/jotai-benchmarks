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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct onenand_chip {scalar_t__ page_shift; TYPE_1__* bufferram; } ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef  scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ blockpage; } ;

/* Variables and functions */
 int MAX_BUFFERRAM ; 

__attribute__((used)) static void onenand_invalidate_bufferram(struct mtd_info *mtd, loff_t addr,
		unsigned int len)
{
	struct onenand_chip *this = mtd->priv;
	int i;
	loff_t end_addr = addr + len;

	/* Invalidate BufferRAM */
	for (i = 0; i < MAX_BUFFERRAM; i++) {
		loff_t buf_addr = this->bufferram[i].blockpage << this->page_shift;
		if (buf_addr >= addr && buf_addr < end_addr)
			this->bufferram[i].blockpage = -1;
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
          long addr = 100;
          unsigned int len = 100;
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              int _len_mtd__i0__priv0 = 1;
          mtd[_i0].priv = (struct onenand_chip *) malloc(_len_mtd__i0__priv0*sizeof(struct onenand_chip));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv0; _j0++) {
            mtd[_i0].priv->page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__priv_bufferram0 = 1;
          mtd[_i0].priv->bufferram = (struct TYPE_2__ *) malloc(_len_mtd__i0__priv_bufferram0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__priv_bufferram0; _j0++) {
            mtd[_i0].priv->bufferram->blockpage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          onenand_invalidate_bufferram(mtd,addr,len);
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].priv);
          }
          free(mtd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
