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
struct hid_sensor_hub_attribute_info {int size; int /*<<< orphan*/  logical_maximum; int /*<<< orphan*/  logical_minimum; int /*<<< orphan*/  unit_expo; int /*<<< orphan*/  units; void* report_id; void* index; } ;
struct hid_field {int report_size; int report_count; int /*<<< orphan*/  logical_maximum; int /*<<< orphan*/  logical_minimum; int /*<<< orphan*/  unit_exponent; int /*<<< orphan*/  unit; } ;
typedef  void* s32 ;

/* Variables and functions */

__attribute__((used)) static void sensor_hub_fill_attr_info(
		struct hid_sensor_hub_attribute_info *info,
		s32 index, s32 report_id, struct hid_field *field)
{
	info->index = index;
	info->report_id = report_id;
	info->units = field->unit;
	info->unit_expo = field->unit_exponent;
	info->size = (field->report_size * field->report_count)/8;
	info->logical_minimum = field->logical_minimum;
	info->logical_maximum = field->logical_maximum;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_info0 = 65025;
          struct hid_sensor_hub_attribute_info * info = (struct hid_sensor_hub_attribute_info *) malloc(_len_info0*sizeof(struct hid_sensor_hub_attribute_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].logical_maximum = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].logical_minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].unit_expo = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * index;
        
          void * report_id;
        
          int _len_field0 = 65025;
          struct hid_field * field = (struct hid_field *) malloc(_len_field0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
              field[_i0].report_size = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].report_count = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].logical_maximum = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].logical_minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].unit_exponent = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].unit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          sensor_hub_fill_attr_info(info,index,report_id,field);
          free(info);
          free(field);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_info0 = 100;
          struct hid_sensor_hub_attribute_info * info = (struct hid_sensor_hub_attribute_info *) malloc(_len_info0*sizeof(struct hid_sensor_hub_attribute_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].logical_maximum = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].logical_minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].unit_expo = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * index;
        
          void * report_id;
        
          int _len_field0 = 100;
          struct hid_field * field = (struct hid_field *) malloc(_len_field0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
              field[_i0].report_size = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].report_count = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].logical_maximum = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].logical_minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].unit_exponent = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].unit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          sensor_hub_fill_attr_info(info,index,report_id,field);
          free(info);
          free(field);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_info0 = 1;
          struct hid_sensor_hub_attribute_info * info = (struct hid_sensor_hub_attribute_info *) malloc(_len_info0*sizeof(struct hid_sensor_hub_attribute_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].logical_maximum = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].logical_minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].unit_expo = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * index;
        
          void * report_id;
        
          int _len_field0 = 1;
          struct hid_field * field = (struct hid_field *) malloc(_len_field0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
              field[_i0].report_size = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].report_count = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].logical_maximum = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].logical_minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].unit_exponent = ((-2 * (next_i()%2)) + 1) * next_i();
          field[_i0].unit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          sensor_hub_fill_attr_info(info,index,report_id,field);
          free(info);
          free(field);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
