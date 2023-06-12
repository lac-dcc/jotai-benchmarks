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

/* Type definitions */
typedef  scalar_t__ u8 ;
typedef  scalar_t__ u32 ;
struct qmi_elem_info {scalar_t__ data_type; scalar_t__ tlv_type; } ;

/* Variables and functions */
 scalar_t__ QMI_EOTI ; 

__attribute__((used)) static struct qmi_elem_info *find_ei(struct qmi_elem_info *ei_array,
				     u32 type)
{
	struct qmi_elem_info *temp_ei = ei_array;

	while (temp_ei->data_type != QMI_EOTI) {
		if (temp_ei->tlv_type == (u8)type)
			return temp_ei;
		temp_ei = temp_ei + 1;
	}

	return NULL;
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ei_array0 = 1;
          struct qmi_elem_info * ei_array = (struct qmi_elem_info *) malloc(_len_ei_array0*sizeof(struct qmi_elem_info));
          for(int _i0 = 0; _i0 < _len_ei_array0; _i0++) {
              ei_array[_i0].data_type = ((-2 * (next_i()%2)) + 1) * next_i();
          ei_array[_i0].tlv_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct qmi_elem_info * benchRet = find_ei(ei_array,type);
          printf("%ld\n", (*benchRet).data_type);
          printf("%ld\n", (*benchRet).tlv_type);
          free(ei_array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
