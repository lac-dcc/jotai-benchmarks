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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct TYPE_3__ {char transfertype; } ;
struct TYPE_4__ {TYPE_1__ ftpc; } ;
struct connectdata {TYPE_2__ proto; } ;

/* Variables and functions */

__attribute__((used)) static int ftp_need_type(struct connectdata *conn,
                         bool ascii_wanted)
{
  return conn->proto.ftpc.transfertype != (ascii_wanted?'A':'I');
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int ascii_wanted = 100;
        
          int _len_conn0 = 1;
          struct connectdata * conn = (struct connectdata *) malloc(_len_conn0*sizeof(struct connectdata));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].proto.ftpc.transfertype = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = ftp_need_type(conn,ascii_wanted);
          printf("%d\n", benchRet); 
          free(conn);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int ascii_wanted = 255;
        
          int _len_conn0 = 65025;
          struct connectdata * conn = (struct connectdata *) malloc(_len_conn0*sizeof(struct connectdata));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].proto.ftpc.transfertype = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = ftp_need_type(conn,ascii_wanted);
          printf("%d\n", benchRet); 
          free(conn);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int ascii_wanted = 10;
        
          int _len_conn0 = 100;
          struct connectdata * conn = (struct connectdata *) malloc(_len_conn0*sizeof(struct connectdata));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].proto.ftpc.transfertype = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = ftp_need_type(conn,ascii_wanted);
          printf("%d\n", benchRet); 
          free(conn);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int ascii_wanted = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_conn0 = 1;
          struct connectdata * conn = (struct connectdata *) malloc(_len_conn0*sizeof(struct connectdata));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              conn[_i0].proto.ftpc.transfertype = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = ftp_need_type(conn,ascii_wanted);
          printf("%d\n", benchRet); 
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
