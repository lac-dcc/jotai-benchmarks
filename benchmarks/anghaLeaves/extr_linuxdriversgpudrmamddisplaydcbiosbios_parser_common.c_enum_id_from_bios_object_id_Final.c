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
typedef  enum object_enum_id { ____Placeholder_object_enum_id } object_enum_id ;

/* Variables and functions */
 int ENUM_ID_1 ; 
 int ENUM_ID_2 ; 
 int ENUM_ID_3 ; 
 int ENUM_ID_4 ; 
 int ENUM_ID_5 ; 
 int ENUM_ID_6 ; 
 int ENUM_ID_7 ; 
 int ENUM_ID_MASK ; 
 int ENUM_ID_SHIFT ; 
 int ENUM_ID_UNKNOWN ; 
#define  GRAPH_OBJECT_ENUM_ID1 134 
#define  GRAPH_OBJECT_ENUM_ID2 133 
#define  GRAPH_OBJECT_ENUM_ID3 132 
#define  GRAPH_OBJECT_ENUM_ID4 131 
#define  GRAPH_OBJECT_ENUM_ID5 130 
#define  GRAPH_OBJECT_ENUM_ID6 129 
#define  GRAPH_OBJECT_ENUM_ID7 128 

__attribute__((used)) static enum object_enum_id enum_id_from_bios_object_id(uint32_t bios_object_id)
{
	uint32_t bios_enum_id =
			(bios_object_id & ENUM_ID_MASK) >> ENUM_ID_SHIFT;
	enum object_enum_id id;

	switch (bios_enum_id) {
	case GRAPH_OBJECT_ENUM_ID1:
		id = ENUM_ID_1;
		break;
	case GRAPH_OBJECT_ENUM_ID2:
		id = ENUM_ID_2;
		break;
	case GRAPH_OBJECT_ENUM_ID3:
		id = ENUM_ID_3;
		break;
	case GRAPH_OBJECT_ENUM_ID4:
		id = ENUM_ID_4;
		break;
	case GRAPH_OBJECT_ENUM_ID5:
		id = ENUM_ID_5;
		break;
	case GRAPH_OBJECT_ENUM_ID6:
		id = ENUM_ID_6;
		break;
	case GRAPH_OBJECT_ENUM_ID7:
		id = ENUM_ID_7;
		break;
	default:
		id = ENUM_ID_UNKNOWN;
		break;
	}

	return id;
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
          enum object_enum_id benchRet = enum_id_from_bios_object_id(bios_object_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bios_object_id = 255;
          enum object_enum_id benchRet = enum_id_from_bios_object_id(bios_object_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bios_object_id = 10;
          enum object_enum_id benchRet = enum_id_from_bios_object_id(bios_object_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
