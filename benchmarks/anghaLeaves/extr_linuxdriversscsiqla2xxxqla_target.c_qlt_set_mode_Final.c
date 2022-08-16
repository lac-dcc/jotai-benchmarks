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
struct scsi_qla_host {TYPE_1__* host; } ;
struct TYPE_2__ {int /*<<< orphan*/  active_mode; } ;

/* Variables and functions */
 int /*<<< orphan*/  MODE_DUAL ; 
 int /*<<< orphan*/  MODE_TARGET ; 
 int /*<<< orphan*/  MODE_UNKNOWN ; 
#define  QLA2XXX_INI_MODE_DISABLED 131 
#define  QLA2XXX_INI_MODE_DUAL 130 
#define  QLA2XXX_INI_MODE_ENABLED 129 
#define  QLA2XXX_INI_MODE_EXCLUSIVE 128 
 int ql2x_ini_mode ; 

__attribute__((used)) static void qlt_set_mode(struct scsi_qla_host *vha)
{
	switch (ql2x_ini_mode) {
	case QLA2XXX_INI_MODE_DISABLED:
	case QLA2XXX_INI_MODE_EXCLUSIVE:
		vha->host->active_mode = MODE_TARGET;
		break;
	case QLA2XXX_INI_MODE_ENABLED:
		vha->host->active_mode = MODE_UNKNOWN;
		break;
	case QLA2XXX_INI_MODE_DUAL:
		vha->host->active_mode = MODE_DUAL;
		break;
	default:
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
          int _len_vha0 = 1;
          struct scsi_qla_host * vha = (struct scsi_qla_host *) malloc(_len_vha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_vha0; _i0++) {
              int _len_vha__i0__host0 = 1;
          vha[_i0].host = (struct TYPE_2__ *) malloc(_len_vha__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vha__i0__host0; _j0++) {
            vha[_i0].host->active_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlt_set_mode(vha);
          for(int _aux = 0; _aux < _len_vha0; _aux++) {
          free(vha[_aux].host);
          }
          free(vha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
