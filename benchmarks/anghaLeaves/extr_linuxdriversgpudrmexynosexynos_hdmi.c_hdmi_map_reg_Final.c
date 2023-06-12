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
       0            empty\n\
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
typedef  int u32 ;
struct hdmi_context {TYPE_1__* drv_data; } ;
struct TYPE_2__ {size_t type; } ;

/* Variables and functions */
 int HDMI_MAPPED_BASE ; 
 int** hdmi_reg_map ; 

__attribute__((used)) static inline u32 hdmi_map_reg(struct hdmi_context *hdata, u32 reg_id)
{
	if ((reg_id & 0xffff0000) == HDMI_MAPPED_BASE)
		return hdmi_reg_map[reg_id & 0xffff][hdata->drv_data->type];
	return reg_id;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int reg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hdata0 = 1;
          struct hdmi_context * hdata = (struct hdmi_context *) malloc(_len_hdata0*sizeof(struct hdmi_context));
          for(int _i0 = 0; _i0 < _len_hdata0; _i0++) {
              int _len_hdata__i0__drv_data0 = 1;
          hdata[_i0].drv_data = (struct TYPE_2__ *) malloc(_len_hdata__i0__drv_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdata__i0__drv_data0; _j0++) {
              hdata[_i0].drv_data->type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = hdmi_map_reg(hdata,reg_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdata0; _aux++) {
          free(hdata[_aux].drv_data);
          }
          free(hdata);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
