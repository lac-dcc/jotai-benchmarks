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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ duration; } ;
struct TYPE_5__ {scalar_t__ user_duration; scalar_t__ outpoint; scalar_t__ file_inpoint; scalar_t__ file_start_time; scalar_t__ next_dts; } ;
typedef  TYPE_1__ ConcatFile ;
typedef  TYPE_2__ AVFormatContext ;

/* Variables and functions */
 scalar_t__ AV_NOPTS_VALUE ; 

__attribute__((used)) static int64_t get_best_effort_duration(ConcatFile *file, AVFormatContext *avf)
{
    if (file->user_duration != AV_NOPTS_VALUE)
        return file->user_duration;
    if (file->outpoint != AV_NOPTS_VALUE)
        return file->outpoint - file->file_inpoint;
    if (avf->duration > 0)
        return avf->duration - (file->file_inpoint - file->file_start_time);
    if (file->next_dts != AV_NOPTS_VALUE)
        return file->next_dts - file->file_inpoint;
    return AV_NOPTS_VALUE;
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
          int _len_file0 = 65025;
          struct TYPE_5__ * file = (struct TYPE_5__ *) malloc(_len_file0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].user_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].outpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].file_inpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].file_start_time = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].next_dts = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_avf0 = 65025;
          struct TYPE_6__ * avf = (struct TYPE_6__ *) malloc(_len_avf0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_avf0; _i0++) {
              avf[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = get_best_effort_duration(file,avf);
          printf("%ld\n", benchRet); 
          free(file);
          free(avf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_file0 = 100;
          struct TYPE_5__ * file = (struct TYPE_5__ *) malloc(_len_file0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].user_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].outpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].file_inpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].file_start_time = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].next_dts = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_avf0 = 100;
          struct TYPE_6__ * avf = (struct TYPE_6__ *) malloc(_len_avf0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_avf0; _i0++) {
              avf[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = get_best_effort_duration(file,avf);
          printf("%ld\n", benchRet); 
          free(file);
          free(avf);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_file0 = 1;
          struct TYPE_5__ * file = (struct TYPE_5__ *) malloc(_len_file0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].user_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].outpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].file_inpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].file_start_time = ((-2 * (next_i()%2)) + 1) * next_i();
          file[_i0].next_dts = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_avf0 = 1;
          struct TYPE_6__ * avf = (struct TYPE_6__ *) malloc(_len_avf0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_avf0; _i0++) {
              avf[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = get_best_effort_duration(file,avf);
          printf("%ld\n", benchRet); 
          free(file);
          free(avf);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
