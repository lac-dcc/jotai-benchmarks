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
typedef  enum param_type { ____Placeholder_param_type } param_type ;

/* Variables and functions */
#define  TUNER_PARAM_TYPE_DIGITAL 132 
#define  TUNER_PARAM_TYPE_NTSC 131 
#define  TUNER_PARAM_TYPE_PAL 130 
#define  TUNER_PARAM_TYPE_RADIO 129 
#define  TUNER_PARAM_TYPE_SECAM 128 

__attribute__((used)) static inline char *tuner_param_name(enum param_type type)
{
	char *name;

	switch (type) {
	case TUNER_PARAM_TYPE_RADIO:
		name = "radio";
		break;
	case TUNER_PARAM_TYPE_PAL:
		name = "pal";
		break;
	case TUNER_PARAM_TYPE_SECAM:
		name = "secam";
		break;
	case TUNER_PARAM_TYPE_NTSC:
		name = "ntsc";
		break;
	case TUNER_PARAM_TYPE_DIGITAL:
		name = "digital";
		break;
	default:
		name = "unknown";
		break;
	}
	return name;
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
          enum param_type type = 0;
          char * benchRet = tuner_param_name(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
