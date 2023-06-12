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
typedef  int /*<<< orphan*/  u64 ;

/* Variables and functions */

__attribute__((used)) static void usnic_ib_fw_string_to_u64(char *fw_ver_str, u64 *fw_ver)
{
	*fw_ver = *((u64 *)fw_ver_str);
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_fw_ver_str0 = 65025;
          char * fw_ver_str = (char *) malloc(_len_fw_ver_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_fw_ver_str0; _i0++) {
            fw_ver_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_fw_ver0 = 65025;
          int * fw_ver = (int *) malloc(_len_fw_ver0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_ver0; _i0++) {
            fw_ver[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          usnic_ib_fw_string_to_u64(fw_ver_str,fw_ver);
          free(fw_ver_str);
          free(fw_ver);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_fw_ver_str0 = 100;
          char * fw_ver_str = (char *) malloc(_len_fw_ver_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_fw_ver_str0; _i0++) {
            fw_ver_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_fw_ver0 = 100;
          int * fw_ver = (int *) malloc(_len_fw_ver0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_ver0; _i0++) {
            fw_ver[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          usnic_ib_fw_string_to_u64(fw_ver_str,fw_ver);
          free(fw_ver_str);
          free(fw_ver);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
