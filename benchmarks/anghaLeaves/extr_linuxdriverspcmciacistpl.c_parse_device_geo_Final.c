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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int u_char ;
struct TYPE_7__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef  TYPE_2__ tuple_t ;
struct TYPE_8__ {int ngeo; TYPE_1__* geo; } ;
typedef  TYPE_3__ cistpl_device_geo_t ;
struct TYPE_6__ {int buswidth; int erase_block; int read_block; int write_block; int partition; int interleave; } ;

/* Variables and functions */
 int CISTPL_MAX_DEVICES ; 

__attribute__((used)) static int parse_device_geo(tuple_t *tuple, cistpl_device_geo_t *geo)
{
	u_char *p, *q;
	int n;

	p = (u_char *)tuple->TupleData;
	q = p + tuple->TupleDataLen;

	for (n = 0; n < CISTPL_MAX_DEVICES; n++) {
		if (p > q-6)
			break;
		geo->geo[n].buswidth = p[0];
		geo->geo[n].erase_block = 1 << (p[1]-1);
		geo->geo[n].read_block  = 1 << (p[2]-1);
		geo->geo[n].write_block = 1 << (p[3]-1);
		geo->geo[n].partition   = 1 << (p[4]-1);
		geo->geo[n].interleave  = 1 << (p[5]-1);
		p += 6;
	}
	geo->ngeo = n;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int _len_tuple0 = 65025;
          struct TYPE_7__ * tuple = (struct TYPE_7__ *) malloc(_len_tuple0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
              tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
          tuple[_i0].TupleData = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_geo0 = 65025;
          struct TYPE_8__ * geo = (struct TYPE_8__ *) malloc(_len_geo0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
              geo[_i0].ngeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_geo__i0__geo0 = 1;
          geo[_i0].geo = (struct TYPE_6__ *) malloc(_len_geo__i0__geo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_geo__i0__geo0; _j0++) {
              geo[_i0].geo->buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->erase_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->read_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->write_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->partition = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->interleave = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = parse_device_geo(tuple,geo);
          printf("%d\n", benchRet); 
          free(tuple);
          for(int _aux = 0; _aux < _len_geo0; _aux++) {
          free(geo[_aux].geo);
          }
          free(geo);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int _len_tuple0 = 100;
          struct TYPE_7__ * tuple = (struct TYPE_7__ *) malloc(_len_tuple0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
              tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
          tuple[_i0].TupleData = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_geo0 = 100;
          struct TYPE_8__ * geo = (struct TYPE_8__ *) malloc(_len_geo0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
              geo[_i0].ngeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_geo__i0__geo0 = 1;
          geo[_i0].geo = (struct TYPE_6__ *) malloc(_len_geo__i0__geo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_geo__i0__geo0; _j0++) {
              geo[_i0].geo->buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->erase_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->read_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->write_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->partition = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->interleave = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = parse_device_geo(tuple,geo);
          printf("%d\n", benchRet); 
          free(tuple);
          for(int _aux = 0; _aux < _len_geo0; _aux++) {
          free(geo[_aux].geo);
          }
          free(geo);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int _len_tuple0 = 1;
          struct TYPE_7__ * tuple = (struct TYPE_7__ *) malloc(_len_tuple0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_tuple0; _i0++) {
              tuple[_i0].TupleDataLen = ((-2 * (next_i()%2)) + 1) * next_i();
          tuple[_i0].TupleData = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_geo0 = 1;
          struct TYPE_8__ * geo = (struct TYPE_8__ *) malloc(_len_geo0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
              geo[_i0].ngeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_geo__i0__geo0 = 1;
          geo[_i0].geo = (struct TYPE_6__ *) malloc(_len_geo__i0__geo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_geo__i0__geo0; _j0++) {
              geo[_i0].geo->buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->erase_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->read_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->write_block = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->partition = ((-2 * (next_i()%2)) + 1) * next_i();
          geo[_i0].geo->interleave = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = parse_device_geo(tuple,geo);
          printf("%d\n", benchRet); 
          free(tuple);
          for(int _aux = 0; _aux < _len_geo0; _aux++) {
          free(geo[_aux].geo);
          }
          free(geo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
