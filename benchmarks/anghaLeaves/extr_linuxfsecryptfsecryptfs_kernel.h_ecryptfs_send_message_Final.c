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

/* Type definitions */
struct ecryptfs_msg_ctx {int dummy; } ;

/* Variables and functions */
 int ENOTCONN ; 

__attribute__((used)) static inline int ecryptfs_send_message(char *data, int data_len,
					struct ecryptfs_msg_ctx **msg_ctx)
{
	return -ENOTCONN;
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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int data_len = 100;
        
          int _len_data0 = 1;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_msg_ctx0 = 1;
          struct ecryptfs_msg_ctx ** msg_ctx = (struct ecryptfs_msg_ctx **) malloc(_len_msg_ctx0*sizeof(struct ecryptfs_msg_ctx *));
          for(int _i0 = 0; _i0 < _len_msg_ctx0; _i0++) {
            int _len_msg_ctx1 = 1;
            msg_ctx[_i0] = (struct ecryptfs_msg_ctx *) malloc(_len_msg_ctx1*sizeof(struct ecryptfs_msg_ctx));
            for(int _i1 = 0; _i1 < _len_msg_ctx1; _i1++) {
                msg_ctx[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = ecryptfs_send_message(data,data_len,msg_ctx);
          printf("%d\n", benchRet); 
          free(data);
          for(int i1 = 0; i1 < _len_msg_ctx0; i1++) {
              free(msg_ctx[i1]);
          }
          free(msg_ctx);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int data_len = 255;
        
          int _len_data0 = 65025;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_msg_ctx0 = 65025;
          struct ecryptfs_msg_ctx ** msg_ctx = (struct ecryptfs_msg_ctx **) malloc(_len_msg_ctx0*sizeof(struct ecryptfs_msg_ctx *));
          for(int _i0 = 0; _i0 < _len_msg_ctx0; _i0++) {
            int _len_msg_ctx1 = 1;
            msg_ctx[_i0] = (struct ecryptfs_msg_ctx *) malloc(_len_msg_ctx1*sizeof(struct ecryptfs_msg_ctx));
            for(int _i1 = 0; _i1 < _len_msg_ctx1; _i1++) {
                msg_ctx[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = ecryptfs_send_message(data,data_len,msg_ctx);
          printf("%d\n", benchRet); 
          free(data);
          for(int i1 = 0; i1 < _len_msg_ctx0; i1++) {
              free(msg_ctx[i1]);
          }
          free(msg_ctx);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int data_len = 10;
        
          int _len_data0 = 100;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_msg_ctx0 = 100;
          struct ecryptfs_msg_ctx ** msg_ctx = (struct ecryptfs_msg_ctx **) malloc(_len_msg_ctx0*sizeof(struct ecryptfs_msg_ctx *));
          for(int _i0 = 0; _i0 < _len_msg_ctx0; _i0++) {
            int _len_msg_ctx1 = 1;
            msg_ctx[_i0] = (struct ecryptfs_msg_ctx *) malloc(_len_msg_ctx1*sizeof(struct ecryptfs_msg_ctx));
            for(int _i1 = 0; _i1 < _len_msg_ctx1; _i1++) {
                msg_ctx[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = ecryptfs_send_message(data,data_len,msg_ctx);
          printf("%d\n", benchRet); 
          free(data);
          for(int i1 = 0; i1 < _len_msg_ctx0; i1++) {
              free(msg_ctx[i1]);
          }
          free(msg_ctx);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int data_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_data0 = 1;
          char * data = (char *) malloc(_len_data0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_msg_ctx0 = 1;
          struct ecryptfs_msg_ctx ** msg_ctx = (struct ecryptfs_msg_ctx **) malloc(_len_msg_ctx0*sizeof(struct ecryptfs_msg_ctx *));
          for(int _i0 = 0; _i0 < _len_msg_ctx0; _i0++) {
            int _len_msg_ctx1 = 1;
            msg_ctx[_i0] = (struct ecryptfs_msg_ctx *) malloc(_len_msg_ctx1*sizeof(struct ecryptfs_msg_ctx));
            for(int _i1 = 0; _i1 < _len_msg_ctx1; _i1++) {
                msg_ctx[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = ecryptfs_send_message(data,data_len,msg_ctx);
          printf("%d\n", benchRet); 
          free(data);
          for(int i1 = 0; i1 < _len_msg_ctx0; i1++) {
              free(msg_ctx[i1]);
          }
          free(msg_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
