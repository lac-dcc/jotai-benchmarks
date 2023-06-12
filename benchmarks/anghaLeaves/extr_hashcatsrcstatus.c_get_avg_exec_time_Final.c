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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {double* exec_msec; scalar_t__ exec_pos; } ;
typedef  TYPE_1__ hc_device_param_t ;

/* Variables and functions */
 int EXEC_CACHE ; 

double get_avg_exec_time (hc_device_param_t *device_param, const int last_num_entries)
{
  int exec_pos = (int) device_param->exec_pos - last_num_entries;

  if (exec_pos < 0) exec_pos += EXEC_CACHE;

  double exec_msec_sum = 0;

  int exec_msec_cnt = 0;

  for (int i = 0; i < last_num_entries; i++)
  {
    double exec_msec = device_param->exec_msec[(exec_pos + i) % EXEC_CACHE];

    if (exec_msec > 0)
    {
      exec_msec_sum += exec_msec;

      exec_msec_cnt++;
    }
  }

  if (exec_msec_cnt == 0) return 0;

  return exec_msec_sum / exec_msec_cnt;
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
          const int last_num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_device_param0 = 1;
          struct TYPE_3__ * device_param = (struct TYPE_3__ *) malloc(_len_device_param0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_device_param0; _i0++) {
              int _len_device_param__i0__exec_msec0 = 1;
          device_param[_i0].exec_msec = (double *) malloc(_len_device_param__i0__exec_msec0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_device_param__i0__exec_msec0; _j0++) {
            device_param[_i0].exec_msec[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          device_param[_i0].exec_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          double benchRet = get_avg_exec_time(device_param,last_num_entries);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_device_param0; _aux++) {
          free(device_param[_aux].exec_msec);
          }
          free(device_param);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
