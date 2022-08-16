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
struct asus_wmi_driver {int dummy; } ;

/* Variables and functions */
 int ASUS_WMI_KEY_IGNORE ; 
#define  HOME_HOLD 130 
#define  HOME_PRESS 129 
#define  HOME_RELEASE 128 

__attribute__((used)) static void eeepc_wmi_key_filter(struct asus_wmi_driver *asus_wmi, int *code,
				 unsigned int *value, bool *autorelease)
{
	switch (*code) {
	case HOME_PRESS:
		*value = 1;
		*autorelease = 0;
		break;
	case HOME_HOLD:
		*code = ASUS_WMI_KEY_IGNORE;
		break;
	case HOME_RELEASE:
		*code = HOME_PRESS;
		*value = 0;
		*autorelease = 0;
		break;
	}
}


// ------------------------------------------------------------------------- //




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
          int _len_asus_wmi0 = 1;
          struct asus_wmi_driver * asus_wmi = (struct asus_wmi_driver *) malloc(_len_asus_wmi0*sizeof(struct asus_wmi_driver));
          for(int _i0 = 0; _i0 < _len_asus_wmi0; _i0++) {
            asus_wmi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 1;
          int * code = (int *) malloc(_len_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          unsigned int * value = (unsigned int *) malloc(_len_value0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_autorelease0 = 1;
          int * autorelease = (int *) malloc(_len_autorelease0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_autorelease0; _i0++) {
            autorelease[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          eeepc_wmi_key_filter(asus_wmi,code,value,autorelease);
          free(asus_wmi);
          free(code);
          free(value);
          free(autorelease);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
