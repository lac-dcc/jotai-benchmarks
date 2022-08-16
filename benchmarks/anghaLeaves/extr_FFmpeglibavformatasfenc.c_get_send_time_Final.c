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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint64_t ;
typedef  scalar_t__ int64_t ;
typedef  int int32_t ;
struct TYPE_5__ {int next_start_sec; TYPE_1__* index_ptr; scalar_t__ data_offset; } ;
struct TYPE_4__ {scalar_t__ send_time; scalar_t__ offset; } ;
typedef  TYPE_2__ ASFContext ;

/* Variables and functions */
 scalar_t__ DATA_HEADER_SIZE ; 

__attribute__((used)) static int32_t get_send_time(ASFContext *asf, int64_t pres_time, uint64_t *offset)
{
    int i;
    int32_t send_time = 0;
    *offset = asf->data_offset + DATA_HEADER_SIZE;
    for (i = 0; i < asf->next_start_sec; i++) {
        if (pres_time <= asf->index_ptr[i].send_time)
            break;
        send_time = asf->index_ptr[i].send_time;
        *offset   = asf->index_ptr[i].offset;
    }

    return send_time / 10000;
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
          long pres_time = 100;
          int _len_asf0 = 1;
          struct TYPE_5__ * asf = (struct TYPE_5__ *) malloc(_len_asf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_asf0; _i0++) {
            asf[_i0].next_start_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_asf__i0__index_ptr0 = 1;
          asf[_i0].index_ptr = (struct TYPE_4__ *) malloc(_len_asf__i0__index_ptr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_asf__i0__index_ptr0; _j0++) {
            asf[_i0].index_ptr->send_time = ((-2 * (next_i()%2)) + 1) * next_i();
        asf[_i0].index_ptr->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        asf[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 1;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_send_time(asf,pres_time,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_asf0; _aux++) {
          free(asf[_aux].index_ptr);
          }
          free(asf);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
