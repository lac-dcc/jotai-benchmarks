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

/* Type definitions */
struct smi_info {int msg_flags; } ;

/* Variables and functions */
 int OEM_DATA_AVAIL ; 
 int RECEIVE_MSG_AVAIL ; 

__attribute__((used)) static int oem_data_avail_to_receive_msg_avail(struct smi_info *smi_info)
{
	smi_info->msg_flags = ((smi_info->msg_flags & ~OEM_DATA_AVAIL) |
			       RECEIVE_MSG_AVAIL);
	return 1;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_smi_info0 = 65025;
          struct smi_info * smi_info = (struct smi_info *) malloc(_len_smi_info0*sizeof(struct smi_info));
          for(int _i0 = 0; _i0 < _len_smi_info0; _i0++) {
              smi_info[_i0].msg_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = oem_data_avail_to_receive_msg_avail(smi_info);
          printf("%d\n", benchRet); 
          free(smi_info);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_smi_info0 = 100;
          struct smi_info * smi_info = (struct smi_info *) malloc(_len_smi_info0*sizeof(struct smi_info));
          for(int _i0 = 0; _i0 < _len_smi_info0; _i0++) {
              smi_info[_i0].msg_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = oem_data_avail_to_receive_msg_avail(smi_info);
          printf("%d\n", benchRet); 
          free(smi_info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_smi_info0 = 1;
          struct smi_info * smi_info = (struct smi_info *) malloc(_len_smi_info0*sizeof(struct smi_info));
          for(int _i0 = 0; _i0 < _len_smi_info0; _i0++) {
              smi_info[_i0].msg_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = oem_data_avail_to_receive_msg_avail(smi_info);
          printf("%d\n", benchRet); 
          free(smi_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
