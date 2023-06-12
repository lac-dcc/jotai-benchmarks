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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u32 ;
struct halmac_iqk_state_set {int process_status; } ;
struct TYPE_2__ {struct halmac_iqk_state_set iqk_set; } ;
struct halmac_adapter {TYPE_1__ halmac_state; } ;
typedef  enum halmac_ret_status { ____Placeholder_halmac_ret_status } halmac_ret_status ;
typedef  enum halmac_cmd_process_status { ____Placeholder_halmac_cmd_process_status } halmac_cmd_process_status ;

/* Variables and functions */
 int HALMAC_RET_SUCCESS ; 

enum halmac_ret_status
halmac_query_iqk_status_88xx(struct halmac_adapter *halmac_adapter,
			     enum halmac_cmd_process_status *process_status,
			     u8 *data, u32 *size)
{
	struct halmac_iqk_state_set *iqk_set =
		&halmac_adapter->halmac_state.iqk_set;

	*process_status = iqk_set->process_status;

	return HALMAC_RET_SUCCESS;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_halmac_adapter0 = 65025;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
              halmac_adapter[_i0].halmac_state.iqk_set.process_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_process_status0 = 65025;
          enum halmac_cmd_process_status * process_status = (enum halmac_cmd_process_status *) malloc(_len_process_status0*sizeof(enum halmac_cmd_process_status));
          for(int _i0 = 0; _i0 < _len_process_status0; _i0++) {
            process_status[_i0] = 0;
          }
        
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_size0 = 65025;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          enum halmac_ret_status benchRet = halmac_query_iqk_status_88xx(halmac_adapter,process_status,data,size);
          free(halmac_adapter);
          free(process_status);
          free(data);
          free(size);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_halmac_adapter0 = 100;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
              halmac_adapter[_i0].halmac_state.iqk_set.process_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_process_status0 = 100;
          enum halmac_cmd_process_status * process_status = (enum halmac_cmd_process_status *) malloc(_len_process_status0*sizeof(enum halmac_cmd_process_status));
          for(int _i0 = 0; _i0 < _len_process_status0; _i0++) {
            process_status[_i0] = 0;
          }
        
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_size0 = 100;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          enum halmac_ret_status benchRet = halmac_query_iqk_status_88xx(halmac_adapter,process_status,data,size);
          free(halmac_adapter);
          free(process_status);
          free(data);
          free(size);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_halmac_adapter0 = 1;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
              halmac_adapter[_i0].halmac_state.iqk_set.process_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_process_status0 = 1;
          enum halmac_cmd_process_status * process_status = (enum halmac_cmd_process_status *) malloc(_len_process_status0*sizeof(enum halmac_cmd_process_status));
          for(int _i0 = 0; _i0 < _len_process_status0; _i0++) {
            process_status[_i0] = 0;
          }
        
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_size0 = 1;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          enum halmac_ret_status benchRet = halmac_query_iqk_status_88xx(halmac_adapter,process_status,data,size);
          free(halmac_adapter);
          free(process_status);
          free(data);
          free(size);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
