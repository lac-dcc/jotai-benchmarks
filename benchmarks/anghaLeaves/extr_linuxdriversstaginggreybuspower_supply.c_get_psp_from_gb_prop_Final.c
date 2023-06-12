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
       3            empty\n\
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
typedef  enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;

/* Variables and functions */
#define  GB_POWER_SUPPLY_PROP_AUTHENTIC 189 
#define  GB_POWER_SUPPLY_PROP_CALIBRATE 188 
#define  GB_POWER_SUPPLY_PROP_CAPACITY 187 
#define  GB_POWER_SUPPLY_PROP_CAPACITY_ALERT_MAX 186 
#define  GB_POWER_SUPPLY_PROP_CAPACITY_ALERT_MIN 185 
#define  GB_POWER_SUPPLY_PROP_CAPACITY_LEVEL 184 
#define  GB_POWER_SUPPLY_PROP_CHARGE_AVG 183 
#define  GB_POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT 182 
#define  GB_POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT_MAX 181 
#define  GB_POWER_SUPPLY_PROP_CHARGE_COUNTER 180 
#define  GB_POWER_SUPPLY_PROP_CHARGE_EMPTY 179 
#define  GB_POWER_SUPPLY_PROP_CHARGE_EMPTY_DESIGN 178 
#define  GB_POWER_SUPPLY_PROP_CHARGE_FULL 177 
#define  GB_POWER_SUPPLY_PROP_CHARGE_FULL_DESIGN 176 
#define  GB_POWER_SUPPLY_PROP_CHARGE_NOW 175 
#define  GB_POWER_SUPPLY_PROP_CHARGE_TERM_CURRENT 174 
#define  GB_POWER_SUPPLY_PROP_CHARGE_TYPE 173 
#define  GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT 172 
#define  GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT_MAX 171 
#define  GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE 170 
#define  GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE_MAX 169 
#define  GB_POWER_SUPPLY_PROP_CURRENT_AVG 168 
#define  GB_POWER_SUPPLY_PROP_CURRENT_BOOT 167 
#define  GB_POWER_SUPPLY_PROP_CURRENT_MAX 166 
#define  GB_POWER_SUPPLY_PROP_CURRENT_NOW 165 
#define  GB_POWER_SUPPLY_PROP_CYCLE_COUNT 164 
#define  GB_POWER_SUPPLY_PROP_ENERGY_AVG 163 
#define  GB_POWER_SUPPLY_PROP_ENERGY_EMPTY 162 
#define  GB_POWER_SUPPLY_PROP_ENERGY_EMPTY_DESIGN 161 
#define  GB_POWER_SUPPLY_PROP_ENERGY_FULL 160 
#define  GB_POWER_SUPPLY_PROP_ENERGY_FULL_DESIGN 159 
#define  GB_POWER_SUPPLY_PROP_ENERGY_NOW 158 
#define  GB_POWER_SUPPLY_PROP_HEALTH 157 
#define  GB_POWER_SUPPLY_PROP_INPUT_CURRENT_LIMIT 156 
#define  GB_POWER_SUPPLY_PROP_ONLINE 155 
#define  GB_POWER_SUPPLY_PROP_POWER_AVG 154 
#define  GB_POWER_SUPPLY_PROP_POWER_NOW 153 
#define  GB_POWER_SUPPLY_PROP_PRESENT 152 
#define  GB_POWER_SUPPLY_PROP_SCOPE 151 
#define  GB_POWER_SUPPLY_PROP_STATUS 150 
#define  GB_POWER_SUPPLY_PROP_TECHNOLOGY 149 
#define  GB_POWER_SUPPLY_PROP_TEMP 148 
#define  GB_POWER_SUPPLY_PROP_TEMP_ALERT_MAX 147 
#define  GB_POWER_SUPPLY_PROP_TEMP_ALERT_MIN 146 
#define  GB_POWER_SUPPLY_PROP_TEMP_AMBIENT 145 
#define  GB_POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MAX 144 
#define  GB_POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MIN 143 
#define  GB_POWER_SUPPLY_PROP_TEMP_MAX 142 
#define  GB_POWER_SUPPLY_PROP_TEMP_MIN 141 
#define  GB_POWER_SUPPLY_PROP_TIME_TO_EMPTY_AVG 140 
#define  GB_POWER_SUPPLY_PROP_TIME_TO_EMPTY_NOW 139 
#define  GB_POWER_SUPPLY_PROP_TIME_TO_FULL_AVG 138 
#define  GB_POWER_SUPPLY_PROP_TIME_TO_FULL_NOW 137 
#define  GB_POWER_SUPPLY_PROP_TYPE 136 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_AVG 135 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_BOOT 134 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_MAX 133 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_MAX_DESIGN 132 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_MIN 131 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_MIN_DESIGN 130 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_NOW 129 
#define  GB_POWER_SUPPLY_PROP_VOLTAGE_OCV 128 
 int POWER_SUPPLY_PROP_AUTHENTIC ; 
 int POWER_SUPPLY_PROP_CALIBRATE ; 
 int POWER_SUPPLY_PROP_CAPACITY ; 
 int POWER_SUPPLY_PROP_CAPACITY_ALERT_MAX ; 
 int POWER_SUPPLY_PROP_CAPACITY_ALERT_MIN ; 
 int POWER_SUPPLY_PROP_CAPACITY_LEVEL ; 
 int POWER_SUPPLY_PROP_CHARGE_AVG ; 
 int POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT ; 
 int POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT_MAX ; 
 int POWER_SUPPLY_PROP_CHARGE_COUNTER ; 
 int POWER_SUPPLY_PROP_CHARGE_EMPTY ; 
 int POWER_SUPPLY_PROP_CHARGE_EMPTY_DESIGN ; 
 int POWER_SUPPLY_PROP_CHARGE_FULL ; 
 int POWER_SUPPLY_PROP_CHARGE_FULL_DESIGN ; 
 int POWER_SUPPLY_PROP_CHARGE_NOW ; 
 int POWER_SUPPLY_PROP_CHARGE_TERM_CURRENT ; 
 int POWER_SUPPLY_PROP_CHARGE_TYPE ; 
 int POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT ; 
 int POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT_MAX ; 
 int POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE ; 
 int POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE_MAX ; 
 int POWER_SUPPLY_PROP_CURRENT_AVG ; 
 int POWER_SUPPLY_PROP_CURRENT_BOOT ; 
 int POWER_SUPPLY_PROP_CURRENT_MAX ; 
 int POWER_SUPPLY_PROP_CURRENT_NOW ; 
 int POWER_SUPPLY_PROP_CYCLE_COUNT ; 
 int POWER_SUPPLY_PROP_ENERGY_AVG ; 
 int POWER_SUPPLY_PROP_ENERGY_EMPTY ; 
 int POWER_SUPPLY_PROP_ENERGY_EMPTY_DESIGN ; 
 int POWER_SUPPLY_PROP_ENERGY_FULL ; 
 int POWER_SUPPLY_PROP_ENERGY_FULL_DESIGN ; 
 int POWER_SUPPLY_PROP_ENERGY_NOW ; 
 int POWER_SUPPLY_PROP_HEALTH ; 
 int POWER_SUPPLY_PROP_INPUT_CURRENT_LIMIT ; 
 int POWER_SUPPLY_PROP_ONLINE ; 
 int POWER_SUPPLY_PROP_POWER_AVG ; 
 int POWER_SUPPLY_PROP_POWER_NOW ; 
 int POWER_SUPPLY_PROP_PRESENT ; 
 int POWER_SUPPLY_PROP_SCOPE ; 
 int POWER_SUPPLY_PROP_STATUS ; 
 int POWER_SUPPLY_PROP_TECHNOLOGY ; 
 int POWER_SUPPLY_PROP_TEMP ; 
 int POWER_SUPPLY_PROP_TEMP_ALERT_MAX ; 
 int POWER_SUPPLY_PROP_TEMP_ALERT_MIN ; 
 int POWER_SUPPLY_PROP_TEMP_AMBIENT ; 
 int POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MAX ; 
 int POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MIN ; 
 int POWER_SUPPLY_PROP_TEMP_MAX ; 
 int POWER_SUPPLY_PROP_TEMP_MIN ; 
 int POWER_SUPPLY_PROP_TIME_TO_EMPTY_AVG ; 
 int POWER_SUPPLY_PROP_TIME_TO_EMPTY_NOW ; 
 int POWER_SUPPLY_PROP_TIME_TO_FULL_AVG ; 
 int POWER_SUPPLY_PROP_TIME_TO_FULL_NOW ; 
 int POWER_SUPPLY_PROP_TYPE ; 
 int POWER_SUPPLY_PROP_VOLTAGE_AVG ; 
 int POWER_SUPPLY_PROP_VOLTAGE_BOOT ; 
 int POWER_SUPPLY_PROP_VOLTAGE_MAX ; 
 int POWER_SUPPLY_PROP_VOLTAGE_MAX_DESIGN ; 
 int POWER_SUPPLY_PROP_VOLTAGE_MIN ; 
 int POWER_SUPPLY_PROP_VOLTAGE_MIN_DESIGN ; 
 int POWER_SUPPLY_PROP_VOLTAGE_NOW ; 
 int POWER_SUPPLY_PROP_VOLTAGE_OCV ; 

__attribute__((used)) static int get_psp_from_gb_prop(int gb_prop, enum power_supply_property *psp)
{
	int prop;

	switch (gb_prop) {
	case GB_POWER_SUPPLY_PROP_STATUS:
		prop = POWER_SUPPLY_PROP_STATUS;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_TYPE:
		prop = POWER_SUPPLY_PROP_CHARGE_TYPE;
		break;
	case GB_POWER_SUPPLY_PROP_HEALTH:
		prop = POWER_SUPPLY_PROP_HEALTH;
		break;
	case GB_POWER_SUPPLY_PROP_PRESENT:
		prop = POWER_SUPPLY_PROP_PRESENT;
		break;
	case GB_POWER_SUPPLY_PROP_ONLINE:
		prop = POWER_SUPPLY_PROP_ONLINE;
		break;
	case GB_POWER_SUPPLY_PROP_AUTHENTIC:
		prop = POWER_SUPPLY_PROP_AUTHENTIC;
		break;
	case GB_POWER_SUPPLY_PROP_TECHNOLOGY:
		prop = POWER_SUPPLY_PROP_TECHNOLOGY;
		break;
	case GB_POWER_SUPPLY_PROP_CYCLE_COUNT:
		prop = POWER_SUPPLY_PROP_CYCLE_COUNT;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_MAX:
		prop = POWER_SUPPLY_PROP_VOLTAGE_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_MIN:
		prop = POWER_SUPPLY_PROP_VOLTAGE_MIN;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_MAX_DESIGN:
		prop = POWER_SUPPLY_PROP_VOLTAGE_MAX_DESIGN;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_MIN_DESIGN:
		prop = POWER_SUPPLY_PROP_VOLTAGE_MIN_DESIGN;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_NOW:
		prop = POWER_SUPPLY_PROP_VOLTAGE_NOW;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_AVG:
		prop = POWER_SUPPLY_PROP_VOLTAGE_AVG;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_OCV:
		prop = POWER_SUPPLY_PROP_VOLTAGE_OCV;
		break;
	case GB_POWER_SUPPLY_PROP_VOLTAGE_BOOT:
		prop = POWER_SUPPLY_PROP_VOLTAGE_BOOT;
		break;
	case GB_POWER_SUPPLY_PROP_CURRENT_MAX:
		prop = POWER_SUPPLY_PROP_CURRENT_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_CURRENT_NOW:
		prop = POWER_SUPPLY_PROP_CURRENT_NOW;
		break;
	case GB_POWER_SUPPLY_PROP_CURRENT_AVG:
		prop = POWER_SUPPLY_PROP_CURRENT_AVG;
		break;
	case GB_POWER_SUPPLY_PROP_CURRENT_BOOT:
		prop = POWER_SUPPLY_PROP_CURRENT_BOOT;
		break;
	case GB_POWER_SUPPLY_PROP_POWER_NOW:
		prop = POWER_SUPPLY_PROP_POWER_NOW;
		break;
	case GB_POWER_SUPPLY_PROP_POWER_AVG:
		prop = POWER_SUPPLY_PROP_POWER_AVG;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_FULL_DESIGN:
		prop = POWER_SUPPLY_PROP_CHARGE_FULL_DESIGN;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_EMPTY_DESIGN:
		prop = POWER_SUPPLY_PROP_CHARGE_EMPTY_DESIGN;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_FULL:
		prop = POWER_SUPPLY_PROP_CHARGE_FULL;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_EMPTY:
		prop = POWER_SUPPLY_PROP_CHARGE_EMPTY;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_NOW:
		prop = POWER_SUPPLY_PROP_CHARGE_NOW;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_AVG:
		prop = POWER_SUPPLY_PROP_CHARGE_AVG;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_COUNTER:
		prop = POWER_SUPPLY_PROP_CHARGE_COUNTER;
		break;
	case GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT:
		prop = POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT;
		break;
	case GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT_MAX:
		prop = POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE:
		prop = POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE;
		break;
	case GB_POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE_MAX:
		prop = POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT:
		prop = POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT_MAX:
		prop = POWER_SUPPLY_PROP_CHARGE_CONTROL_LIMIT_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_INPUT_CURRENT_LIMIT:
		prop = POWER_SUPPLY_PROP_INPUT_CURRENT_LIMIT;
		break;
	case GB_POWER_SUPPLY_PROP_ENERGY_FULL_DESIGN:
		prop = POWER_SUPPLY_PROP_ENERGY_FULL_DESIGN;
		break;
	case GB_POWER_SUPPLY_PROP_ENERGY_EMPTY_DESIGN:
		prop = POWER_SUPPLY_PROP_ENERGY_EMPTY_DESIGN;
		break;
	case GB_POWER_SUPPLY_PROP_ENERGY_FULL:
		prop = POWER_SUPPLY_PROP_ENERGY_FULL;
		break;
	case GB_POWER_SUPPLY_PROP_ENERGY_EMPTY:
		prop = POWER_SUPPLY_PROP_ENERGY_EMPTY;
		break;
	case GB_POWER_SUPPLY_PROP_ENERGY_NOW:
		prop = POWER_SUPPLY_PROP_ENERGY_NOW;
		break;
	case GB_POWER_SUPPLY_PROP_ENERGY_AVG:
		prop = POWER_SUPPLY_PROP_ENERGY_AVG;
		break;
	case GB_POWER_SUPPLY_PROP_CAPACITY:
		prop = POWER_SUPPLY_PROP_CAPACITY;
		break;
	case GB_POWER_SUPPLY_PROP_CAPACITY_ALERT_MIN:
		prop = POWER_SUPPLY_PROP_CAPACITY_ALERT_MIN;
		break;
	case GB_POWER_SUPPLY_PROP_CAPACITY_ALERT_MAX:
		prop = POWER_SUPPLY_PROP_CAPACITY_ALERT_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_CAPACITY_LEVEL:
		prop = POWER_SUPPLY_PROP_CAPACITY_LEVEL;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP:
		prop = POWER_SUPPLY_PROP_TEMP;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP_MAX:
		prop = POWER_SUPPLY_PROP_TEMP_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP_MIN:
		prop = POWER_SUPPLY_PROP_TEMP_MIN;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP_ALERT_MIN:
		prop = POWER_SUPPLY_PROP_TEMP_ALERT_MIN;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP_ALERT_MAX:
		prop = POWER_SUPPLY_PROP_TEMP_ALERT_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP_AMBIENT:
		prop = POWER_SUPPLY_PROP_TEMP_AMBIENT;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MIN:
		prop = POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MIN;
		break;
	case GB_POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MAX:
		prop = POWER_SUPPLY_PROP_TEMP_AMBIENT_ALERT_MAX;
		break;
	case GB_POWER_SUPPLY_PROP_TIME_TO_EMPTY_NOW:
		prop = POWER_SUPPLY_PROP_TIME_TO_EMPTY_NOW;
		break;
	case GB_POWER_SUPPLY_PROP_TIME_TO_EMPTY_AVG:
		prop = POWER_SUPPLY_PROP_TIME_TO_EMPTY_AVG;
		break;
	case GB_POWER_SUPPLY_PROP_TIME_TO_FULL_NOW:
		prop = POWER_SUPPLY_PROP_TIME_TO_FULL_NOW;
		break;
	case GB_POWER_SUPPLY_PROP_TIME_TO_FULL_AVG:
		prop = POWER_SUPPLY_PROP_TIME_TO_FULL_AVG;
		break;
	case GB_POWER_SUPPLY_PROP_TYPE:
		prop = POWER_SUPPLY_PROP_TYPE;
		break;
	case GB_POWER_SUPPLY_PROP_SCOPE:
		prop = POWER_SUPPLY_PROP_SCOPE;
		break;
	case GB_POWER_SUPPLY_PROP_CHARGE_TERM_CURRENT:
		prop = POWER_SUPPLY_PROP_CHARGE_TERM_CURRENT;
		break;
	case GB_POWER_SUPPLY_PROP_CALIBRATE:
		prop = POWER_SUPPLY_PROP_CALIBRATE;
		break;
	default:
		prop = -1;
		break;
	}

	if (prop < 0)
		return prop;

	*psp = (enum power_supply_property)prop;

	return 0;
}

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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int gb_prop = 100;
        
          int _len_psp0 = 1;
          enum power_supply_property * psp = (enum power_supply_property *) malloc(_len_psp0*sizeof(enum power_supply_property));
          for(int _i0 = 0; _i0 < _len_psp0; _i0++) {
            psp[_i0] = 0;
          }
        
          int benchRet = get_psp_from_gb_prop(gb_prop,psp);
          printf("%d\n", benchRet); 
          free(psp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int gb_prop = 255;
        
          int _len_psp0 = 65025;
          enum power_supply_property * psp = (enum power_supply_property *) malloc(_len_psp0*sizeof(enum power_supply_property));
          for(int _i0 = 0; _i0 < _len_psp0; _i0++) {
            psp[_i0] = 0;
          }
        
          int benchRet = get_psp_from_gb_prop(gb_prop,psp);
          printf("%d\n", benchRet); 
          free(psp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int gb_prop = 10;
        
          int _len_psp0 = 100;
          enum power_supply_property * psp = (enum power_supply_property *) malloc(_len_psp0*sizeof(enum power_supply_property));
          for(int _i0 = 0; _i0 < _len_psp0; _i0++) {
            psp[_i0] = 0;
          }
        
          int benchRet = get_psp_from_gb_prop(gb_prop,psp);
          printf("%d\n", benchRet); 
          free(psp);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int gb_prop = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_psp0 = 1;
          enum power_supply_property * psp = (enum power_supply_property *) malloc(_len_psp0*sizeof(enum power_supply_property));
          for(int _i0 = 0; _i0 < _len_psp0; _i0++) {
            psp[_i0] = 0;
          }
        
          int benchRet = get_psp_from_gb_prop(gb_prop,psp);
          printf("%d\n", benchRet); 
          free(psp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
