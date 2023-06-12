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
struct stm32_dcmi {unsigned int num_of_sd_formats; struct dcmi_format** sd_formats; } ;
struct dcmi_format {unsigned int fourcc; } ;

/* Variables and functions */

__attribute__((used)) static const struct dcmi_format *find_format_by_fourcc(struct stm32_dcmi *dcmi,
						       unsigned int fourcc)
{
	unsigned int num_formats = dcmi->num_of_sd_formats;
	const struct dcmi_format *fmt;
	unsigned int i;

	for (i = 0; i < num_formats; i++) {
		fmt = dcmi->sd_formats[i];
		if (fmt->fourcc == fourcc)
			return fmt;
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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned int fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dcmi0 = 1;
          struct stm32_dcmi * dcmi = (struct stm32_dcmi *) malloc(_len_dcmi0*sizeof(struct stm32_dcmi));
          for(int _i0 = 0; _i0 < _len_dcmi0; _i0++) {
              dcmi[_i0].num_of_sd_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dcmi__i0__sd_formats0 = 1;
          dcmi[_i0].sd_formats = (struct dcmi_format **) malloc(_len_dcmi__i0__sd_formats0*sizeof(struct dcmi_format *));
          for(int _j0 = 0; _j0 < _len_dcmi__i0__sd_formats0; _j0++) {
            int _len_dcmi__i0__sd_formats1 = 1;
            dcmi[_i0].sd_formats[_j0] = (struct dcmi_format *) malloc(_len_dcmi__i0__sd_formats1*sizeof(struct dcmi_format));
            for(int _j1 = 0; _j1 < _len_dcmi__i0__sd_formats1; _j1++) {
                dcmi[_i0].sd_formats[_j0]->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          const struct dcmi_format * benchRet = find_format_by_fourcc(dcmi,fourcc);
          for(int _aux = 0; _aux < _len_dcmi0; _aux++) {
          free(*(dcmi[_aux].sd_formats));
        free(dcmi[_aux].sd_formats);
          }
          free(dcmi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
