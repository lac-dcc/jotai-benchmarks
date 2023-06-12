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
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {unsigned short buf_ptr; unsigned char buf_base; } ;
struct TYPE_10__ {scalar_t__ virt_addr; } ;
struct TYPE_9__ {TYPE_1__** port_array; scalar_t__ memory_base; } ;
struct TYPE_8__ {unsigned long last_mem_alloc; } ;
typedef  TYPE_2__ SLMP_INFO ;
typedef  TYPE_3__ SCADESC_EX ;
typedef  TYPE_4__ SCADESC ;

/* Variables and functions */
 scalar_t__ SCABUFSIZE ; 

__attribute__((used)) static int alloc_frame_bufs(SLMP_INFO *info, SCADESC *buf_list,SCADESC_EX *buf_list_ex,int count)
{
	int i;
	unsigned long phys_addr;

	for ( i = 0; i < count; i++ ) {
		buf_list_ex[i].virt_addr = info->memory_base + info->port_array[0]->last_mem_alloc;
		phys_addr = info->port_array[0]->last_mem_alloc;
		info->port_array[0]->last_mem_alloc += SCABUFSIZE;

		buf_list[i].buf_ptr  = (unsigned short)phys_addr;
		buf_list[i].buf_base = (unsigned char)(phys_addr >> 16);
	}

	return 0;
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
          int count = 255;
        
          int _len_info0 = 65025;
          struct TYPE_9__ * info = (struct TYPE_9__ *) malloc(_len_info0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__port_array0 = 1;
          info[_i0].port_array = (struct TYPE_8__ **) malloc(_len_info__i0__port_array0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_info__i0__port_array0; _j0++) {
            int _len_info__i0__port_array1 = 1;
            info[_i0].port_array[_j0] = (struct TYPE_8__ *) malloc(_len_info__i0__port_array1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_info__i0__port_array1; _j1++) {
                info[_i0].port_array[_j0]->last_mem_alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          info[_i0].memory_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf_list0 = 65025;
          struct TYPE_11__ * buf_list = (struct TYPE_11__ *) malloc(_len_buf_list0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_buf_list0; _i0++) {
              buf_list[_i0].buf_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          buf_list[_i0].buf_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf_list_ex0 = 65025;
          struct TYPE_10__ * buf_list_ex = (struct TYPE_10__ *) malloc(_len_buf_list_ex0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_buf_list_ex0; _i0++) {
              buf_list_ex[_i0].virt_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = alloc_frame_bufs(info,buf_list,buf_list_ex,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].port_array));
        free(info[_aux].port_array);
          }
          free(info);
          free(buf_list);
          free(buf_list_ex);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int count = 10;
        
          int _len_info0 = 100;
          struct TYPE_9__ * info = (struct TYPE_9__ *) malloc(_len_info0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__port_array0 = 1;
          info[_i0].port_array = (struct TYPE_8__ **) malloc(_len_info__i0__port_array0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_info__i0__port_array0; _j0++) {
            int _len_info__i0__port_array1 = 1;
            info[_i0].port_array[_j0] = (struct TYPE_8__ *) malloc(_len_info__i0__port_array1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_info__i0__port_array1; _j1++) {
                info[_i0].port_array[_j0]->last_mem_alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          info[_i0].memory_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf_list0 = 100;
          struct TYPE_11__ * buf_list = (struct TYPE_11__ *) malloc(_len_buf_list0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_buf_list0; _i0++) {
              buf_list[_i0].buf_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          buf_list[_i0].buf_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf_list_ex0 = 100;
          struct TYPE_10__ * buf_list_ex = (struct TYPE_10__ *) malloc(_len_buf_list_ex0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_buf_list_ex0; _i0++) {
              buf_list_ex[_i0].virt_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = alloc_frame_bufs(info,buf_list,buf_list_ex,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].port_array));
        free(info[_aux].port_array);
          }
          free(info);
          free(buf_list);
          free(buf_list_ex);
        
        break;
    }
    // empty
    case 2:
    {
          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_info0 = 1;
          struct TYPE_9__ * info = (struct TYPE_9__ *) malloc(_len_info0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__port_array0 = 1;
          info[_i0].port_array = (struct TYPE_8__ **) malloc(_len_info__i0__port_array0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_info__i0__port_array0; _j0++) {
            int _len_info__i0__port_array1 = 1;
            info[_i0].port_array[_j0] = (struct TYPE_8__ *) malloc(_len_info__i0__port_array1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_info__i0__port_array1; _j1++) {
                info[_i0].port_array[_j0]->last_mem_alloc = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          info[_i0].memory_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf_list0 = 1;
          struct TYPE_11__ * buf_list = (struct TYPE_11__ *) malloc(_len_buf_list0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_buf_list0; _i0++) {
              buf_list[_i0].buf_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          buf_list[_i0].buf_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_buf_list_ex0 = 1;
          struct TYPE_10__ * buf_list_ex = (struct TYPE_10__ *) malloc(_len_buf_list_ex0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_buf_list_ex0; _i0++) {
              buf_list_ex[_i0].virt_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = alloc_frame_bufs(info,buf_list,buf_list_ex,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].port_array));
        free(info[_aux].port_array);
          }
          free(info);
          free(buf_list);
          free(buf_list_ex);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
