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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ sg_cnt; } ;
struct TYPE_3__ {scalar_t__ sg_cnt; } ;
struct qup_i2c_dev {scalar_t__ tag_buf_pos; TYPE_2__ brx; TYPE_1__ btx; } ;

/* Variables and functions */

__attribute__((used)) static void qup_i2c_bam_clear_tag_buffers(struct qup_i2c_dev *qup)
{
	qup->btx.sg_cnt = 0;
	qup->brx.sg_cnt = 0;
	qup->tag_buf_pos = 0;
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
          int _len_qup0 = 1;
          struct qup_i2c_dev * qup = (struct qup_i2c_dev *) malloc(_len_qup0*sizeof(struct qup_i2c_dev));
          for(int _i0 = 0; _i0 < _len_qup0; _i0++) {
            qup[_i0].tag_buf_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        qup[_i0].brx.sg_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qup[_i0].btx.sg_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qup_i2c_bam_clear_tag_buffers(qup);
          free(qup);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
