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
       3            empty\n\
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
typedef  int /*<<< orphan*/  u8 ;
typedef  unsigned int u32 ;
struct spi_nor {struct cqspi_flash_pdata* priv; } ;
struct cqspi_flash_pdata {unsigned int inst_width; unsigned int addr_width; unsigned int data_width; } ;

/* Variables and functions */
 unsigned int CQSPI_REG_RD_INSTR_TYPE_ADDR_LSB ; 
 unsigned int CQSPI_REG_RD_INSTR_TYPE_DATA_LSB ; 
 unsigned int CQSPI_REG_RD_INSTR_TYPE_INSTR_LSB ; 

__attribute__((used)) static unsigned int cqspi_calc_rdreg(struct spi_nor *nor, const u8 opcode)
{
	struct cqspi_flash_pdata *f_pdata = nor->priv;
	u32 rdreg = 0;

	rdreg |= f_pdata->inst_width << CQSPI_REG_RD_INSTR_TYPE_INSTR_LSB;
	rdreg |= f_pdata->addr_width << CQSPI_REG_RD_INSTR_TYPE_ADDR_LSB;
	rdreg |= f_pdata->data_width << CQSPI_REG_RD_INSTR_TYPE_DATA_LSB;

	return rdreg;
}

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
          const int opcode = 100;
        
          int _len_nor0 = 1;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
              int _len_nor__i0__priv0 = 1;
          nor[_i0].priv = (struct cqspi_flash_pdata *) malloc(_len_nor__i0__priv0*sizeof(struct cqspi_flash_pdata));
          for(int _j0 = 0; _j0 < _len_nor__i0__priv0; _j0++) {
              nor[_i0].priv->inst_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->data_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = cqspi_calc_rdreg(nor,opcode);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_nor0; _aux++) {
          free(nor[_aux].priv);
          }
          free(nor);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int opcode = 255;
        
          int _len_nor0 = 65025;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
              int _len_nor__i0__priv0 = 1;
          nor[_i0].priv = (struct cqspi_flash_pdata *) malloc(_len_nor__i0__priv0*sizeof(struct cqspi_flash_pdata));
          for(int _j0 = 0; _j0 < _len_nor__i0__priv0; _j0++) {
              nor[_i0].priv->inst_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->data_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = cqspi_calc_rdreg(nor,opcode);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_nor0; _aux++) {
          free(nor[_aux].priv);
          }
          free(nor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int opcode = 10;
        
          int _len_nor0 = 100;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
              int _len_nor__i0__priv0 = 1;
          nor[_i0].priv = (struct cqspi_flash_pdata *) malloc(_len_nor__i0__priv0*sizeof(struct cqspi_flash_pdata));
          for(int _j0 = 0; _j0 < _len_nor__i0__priv0; _j0++) {
              nor[_i0].priv->inst_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->data_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = cqspi_calc_rdreg(nor,opcode);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_nor0; _aux++) {
          free(nor[_aux].priv);
          }
          free(nor);
        
        break;
    }
    // empty
    case 3:
    {
          const int opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_nor0 = 1;
          struct spi_nor * nor = (struct spi_nor *) malloc(_len_nor0*sizeof(struct spi_nor));
          for(int _i0 = 0; _i0 < _len_nor0; _i0++) {
              int _len_nor__i0__priv0 = 1;
          nor[_i0].priv = (struct cqspi_flash_pdata *) malloc(_len_nor__i0__priv0*sizeof(struct cqspi_flash_pdata));
          for(int _j0 = 0; _j0 < _len_nor__i0__priv0; _j0++) {
              nor[_i0].priv->inst_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          nor[_i0].priv->data_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = cqspi_calc_rdreg(nor,opcode);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_nor0; _aux++) {
          free(nor[_aux].priv);
          }
          free(nor);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
