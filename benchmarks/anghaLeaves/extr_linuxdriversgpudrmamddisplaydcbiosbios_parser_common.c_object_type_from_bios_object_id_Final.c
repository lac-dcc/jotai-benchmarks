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
typedef  int uint32_t ;
typedef  enum object_type { ____Placeholder_object_type } object_type ;

/* Variables and functions */
#define  GRAPH_OBJECT_TYPE_CONNECTOR 132 
#define  GRAPH_OBJECT_TYPE_ENCODER 131 
#define  GRAPH_OBJECT_TYPE_GENERIC 130 
#define  GRAPH_OBJECT_TYPE_GPU 129 
#define  GRAPH_OBJECT_TYPE_ROUTER 128 
 int OBJECT_TYPE_CONNECTOR ; 
 int OBJECT_TYPE_ENCODER ; 
 int OBJECT_TYPE_GENERIC ; 
 int OBJECT_TYPE_GPU ; 
 int OBJECT_TYPE_MASK ; 
 int OBJECT_TYPE_ROUTER ; 
 int OBJECT_TYPE_SHIFT ; 
 int OBJECT_TYPE_UNKNOWN ; 

__attribute__((used)) static enum object_type object_type_from_bios_object_id(uint32_t bios_object_id)
{
	uint32_t bios_object_type = (bios_object_id & OBJECT_TYPE_MASK)
				>> OBJECT_TYPE_SHIFT;
	enum object_type object_type;

	switch (bios_object_type) {
	case GRAPH_OBJECT_TYPE_GPU:
		object_type = OBJECT_TYPE_GPU;
		break;
	case GRAPH_OBJECT_TYPE_ENCODER:
		object_type = OBJECT_TYPE_ENCODER;
		break;
	case GRAPH_OBJECT_TYPE_CONNECTOR:
		object_type = OBJECT_TYPE_CONNECTOR;
		break;
	case GRAPH_OBJECT_TYPE_ROUTER:
		object_type = OBJECT_TYPE_ROUTER;
		break;
	case GRAPH_OBJECT_TYPE_GENERIC:
		object_type = OBJECT_TYPE_GENERIC;
		break;
	default:
		object_type = OBJECT_TYPE_UNKNOWN;
		break;
	}

	return object_type;
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
          int bios_object_id = 100;
          enum object_type benchRet = object_type_from_bios_object_id(bios_object_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bios_object_id = 255;
          enum object_type benchRet = object_type_from_bios_object_id(bios_object_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bios_object_id = 10;
          enum object_type benchRet = object_type_from_bios_object_id(bios_object_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
