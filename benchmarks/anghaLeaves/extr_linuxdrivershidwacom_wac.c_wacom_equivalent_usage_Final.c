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

/* Variables and functions */
 int HID_UP_DIGITIZER ; 
 int HID_UP_UNDEFINED ; 
 int HID_USAGE_PAGE ; 
 int WACOM_HID_SP_BUTTON ; 
 int WACOM_HID_SP_DIGITIZER ; 
 int WACOM_HID_SP_DIGITIZERINFO ; 
 int WACOM_HID_SP_PAD ; 
 int WACOM_HID_UP_WACOMDIGITIZER ; 
 int WACOM_HID_UP_WACOMTOUCH ; 
 int WACOM_HID_WD_DISTANCE ; 
 int WACOM_HID_WD_REPORT_VALID ; 
 int WACOM_HID_WD_SENSE ; 
 int WACOM_HID_WD_SERIALHI ; 
 int WACOM_HID_WD_TOOLTYPE ; 
 int WACOM_HID_WD_TOUCHRING ; 
 int WACOM_HID_WD_TOUCHRINGSTATUS ; 
 int WACOM_HID_WD_TOUCHSTRIP ; 
 int WACOM_HID_WD_TOUCHSTRIP2 ; 

int wacom_equivalent_usage(int usage)
{
	if ((usage & HID_USAGE_PAGE) == WACOM_HID_UP_WACOMDIGITIZER) {
		int subpage = (usage & 0xFF00) << 8;
		int subusage = (usage & 0xFF);

		if (subpage == WACOM_HID_SP_PAD ||
		    subpage == WACOM_HID_SP_BUTTON ||
		    subpage == WACOM_HID_SP_DIGITIZER ||
		    subpage == WACOM_HID_SP_DIGITIZERINFO ||
		    usage == WACOM_HID_WD_SENSE ||
		    usage == WACOM_HID_WD_SERIALHI ||
		    usage == WACOM_HID_WD_TOOLTYPE ||
		    usage == WACOM_HID_WD_DISTANCE ||
		    usage == WACOM_HID_WD_TOUCHSTRIP ||
		    usage == WACOM_HID_WD_TOUCHSTRIP2 ||
		    usage == WACOM_HID_WD_TOUCHRING ||
		    usage == WACOM_HID_WD_TOUCHRINGSTATUS ||
		    usage == WACOM_HID_WD_REPORT_VALID) {
			return usage;
		}

		if (subpage == HID_UP_UNDEFINED)
			subpage = HID_UP_DIGITIZER;

		return subpage | subusage;
	}

	if ((usage & HID_USAGE_PAGE) == WACOM_HID_UP_WACOMTOUCH) {
		int subpage = (usage & 0xFF00) << 8;
		int subusage = (usage & 0xFF);

		if (subpage == HID_UP_UNDEFINED)
			subpage = WACOM_HID_SP_DIGITIZER;

		return subpage | subusage;
	}

	return usage;
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
          int usage = 100;
          int benchRet = wacom_equivalent_usage(usage);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int usage = 255;
          int benchRet = wacom_equivalent_usage(usage);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int usage = 10;
          int benchRet = wacom_equivalent_usage(usage);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
