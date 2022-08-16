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

__attribute__((used)) static char *pdo_dblib_get_field_name(int type)
{
	/*
	 * I don't return dbprtype(type) because it does not fully describe the type
	 * (example: varchar is reported as char by dbprtype)
	 *
	 * FIX ME: Cache datatypes from server systypes table in pdo_dblib_handle_factory()
	 * 		   to make this future proof.
	 */

	switch (type) {
		case 31: return "nvarchar";
		case 34: return "image";
		case 35: return "text";
		case 36: return "uniqueidentifier";
		case 37: return "varbinary"; /* & timestamp - Sybase AS12 */
		case 38: return "bigint"; /* & bigintn - Sybase AS12 */
		case 39: return "varchar"; /* & sysname & nvarchar - Sybase AS12 */
		case 40: return "date";
		case 41: return "time";
		case 42: return "datetime2";
		case 43: return "datetimeoffset";
		case 45: return "binary"; /* Sybase AS12 */
		case 47: return "char"; /* & nchar & uniqueidentifierstr Sybase AS12 */
		case 48: return "tinyint";
		case 50: return "bit"; /* Sybase AS12 */
		case 52: return "smallint";
		case 55: return "decimal"; /* Sybase AS12 */
		case 56: return "int";
		case 58: return "smalldatetime";
		case 59: return "real";
		case 60: return "money";
		case 61: return "datetime";
		case 62: return "float";
		case 63: return "numeric"; /* or uint, ubigint, usmallint Sybase AS12 */
		case 98: return "sql_variant";
		case 99: return "ntext";
		case 104: return "bit";
		case 106: return "decimal"; /* decimal n on sybase */
		case 108: return "numeric"; /* numeric n on sybase */
		case 122: return "smallmoney";
		case 127: return "bigint";
		case 165: return "varbinary";
		case 167: return "varchar";
		case 173: return "binary";
		case 175: return "char";
		case 189: return "timestamp";
		case 231: return "nvarchar";
		case 239: return "nchar";
		case 240: return "geometry";
		case 241: return "xml";
		default: return "unknown";
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
          int type = 100;
          char * benchRet = pdo_dblib_get_field_name(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          char * benchRet = pdo_dblib_get_field_name(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          char * benchRet = pdo_dblib_get_field_name(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
