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

/* Variables and functions */

__attribute__((used)) static inline void
extract_scp_header(unsigned int header,
		   unsigned int *target_id, unsigned int *source_id,
		   unsigned int *get_flag, unsigned int *req,
		   unsigned int *device_flag, unsigned int *resp_flag,
		   unsigned int *error_flag, unsigned int *data_size)
{
	if (data_size)
		*data_size = (header >> 27) & 0x1f;
	if (error_flag)
		*error_flag = (header >> 26) & 0x01;
	if (resp_flag)
		*resp_flag = (header >> 25) & 0x01;
	if (device_flag)
		*device_flag = (header >> 24) & 0x01;
	if (req)
		*req = (header >> 17) & 0x7f;
	if (get_flag)
		*get_flag = (header >> 16) & 0x01;
	if (source_id)
		*source_id = (header >> 8) & 0xff;
	if (target_id)
		*target_id = header & 0xff;
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
          unsigned int header = 100;
          int _len_target_id0 = 1;
          unsigned int * target_id = (unsigned int *) malloc(_len_target_id0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_target_id0; _i0++) {
            target_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_source_id0 = 1;
          unsigned int * source_id = (unsigned int *) malloc(_len_source_id0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_source_id0; _i0++) {
            source_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_get_flag0 = 1;
          unsigned int * get_flag = (unsigned int *) malloc(_len_get_flag0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_get_flag0; _i0++) {
            get_flag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 1;
          unsigned int * req = (unsigned int *) malloc(_len_req0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_device_flag0 = 1;
          unsigned int * device_flag = (unsigned int *) malloc(_len_device_flag0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_device_flag0; _i0++) {
            device_flag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp_flag0 = 1;
          unsigned int * resp_flag = (unsigned int *) malloc(_len_resp_flag0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_resp_flag0; _i0++) {
            resp_flag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_error_flag0 = 1;
          unsigned int * error_flag = (unsigned int *) malloc(_len_error_flag0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_error_flag0; _i0++) {
            error_flag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data_size0 = 1;
          unsigned int * data_size = (unsigned int *) malloc(_len_data_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data_size0; _i0++) {
            data_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          extract_scp_header(header,target_id,source_id,get_flag,req,device_flag,resp_flag,error_flag,data_size);
          free(target_id);
          free(source_id);
          free(get_flag);
          free(req);
          free(device_flag);
          free(resp_flag);
          free(error_flag);
          free(data_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
