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
struct text_data {int dummy; } ;
struct path_data {int dummy; } ;
struct list_data {int dummy; } ;
struct int_data {int dummy; } ;
struct group_data {int dummy; } ;
struct frame_rate_data {int dummy; } ;
struct float_data {int dummy; } ;
struct editable_list_data {int dummy; } ;
struct button_data {int dummy; } ;
typedef  enum obs_property_type { ____Placeholder_obs_property_type } obs_property_type ;

/* Variables and functions */
#define  OBS_PROPERTY_BOOL 140 
#define  OBS_PROPERTY_BUTTON 139 
#define  OBS_PROPERTY_COLOR 138 
#define  OBS_PROPERTY_EDITABLE_LIST 137 
#define  OBS_PROPERTY_FLOAT 136 
#define  OBS_PROPERTY_FONT 135 
#define  OBS_PROPERTY_FRAME_RATE 134 
#define  OBS_PROPERTY_GROUP 133 
#define  OBS_PROPERTY_INT 132 
#define  OBS_PROPERTY_INVALID 131 
#define  OBS_PROPERTY_LIST 130 
#define  OBS_PROPERTY_PATH 129 
#define  OBS_PROPERTY_TEXT 128 

__attribute__((used)) static inline size_t get_property_size(enum obs_property_type type)
{
	switch (type) {
	case OBS_PROPERTY_INVALID:   return 0;
	case OBS_PROPERTY_BOOL:      return 0;
	case OBS_PROPERTY_INT:       return sizeof(struct int_data);
	case OBS_PROPERTY_FLOAT:     return sizeof(struct float_data);
	case OBS_PROPERTY_TEXT:      return sizeof(struct text_data);
	case OBS_PROPERTY_PATH:      return sizeof(struct path_data);
	case OBS_PROPERTY_LIST:      return sizeof(struct list_data);
	case OBS_PROPERTY_COLOR:     return 0;
	case OBS_PROPERTY_BUTTON:    return sizeof(struct button_data);
	case OBS_PROPERTY_FONT:      return 0;
	case OBS_PROPERTY_EDITABLE_LIST:
		return sizeof(struct editable_list_data);
	case OBS_PROPERTY_FRAME_RATE:return sizeof(struct frame_rate_data);
	case OBS_PROPERTY_GROUP:     return sizeof(struct group_data);
	}

	return 0;
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
          enum obs_property_type type = 0;
          unsigned long benchRet = get_property_size(type);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
