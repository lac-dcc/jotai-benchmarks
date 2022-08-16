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
       1            big-arr-10x\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  UINT32 ;
struct TYPE_4__ {int Type; } ;
struct TYPE_5__ {TYPE_1__ Common; } ;
typedef  TYPE_2__ ACPI_OPERAND_OBJECT ;

/* Variables and functions */
 int /*<<< orphan*/  ACPI_RTYPE_ANY ; 
 int /*<<< orphan*/  ACPI_RTYPE_BUFFER ; 
 int /*<<< orphan*/  ACPI_RTYPE_INTEGER ; 
 int /*<<< orphan*/  ACPI_RTYPE_NONE ; 
 int /*<<< orphan*/  ACPI_RTYPE_PACKAGE ; 
 int /*<<< orphan*/  ACPI_RTYPE_REFERENCE ; 
 int /*<<< orphan*/  ACPI_RTYPE_STRING ; 
#define  ACPI_TYPE_BUFFER 132 
#define  ACPI_TYPE_INTEGER 131 
#define  ACPI_TYPE_LOCAL_REFERENCE 130 
#define  ACPI_TYPE_PACKAGE 129 
#define  ACPI_TYPE_STRING 128 

__attribute__((used)) static UINT32
AcpiNsGetBitmappedType (
    ACPI_OPERAND_OBJECT         *ReturnObject)
{
    UINT32                      ReturnBtype;


    if (!ReturnObject)
    {
        return (ACPI_RTYPE_NONE);
    }

    /* Map ACPI_OBJECT_TYPE to internal bitmapped type */

    switch (ReturnObject->Common.Type)
    {
    case ACPI_TYPE_INTEGER:

        ReturnBtype = ACPI_RTYPE_INTEGER;
        break;

    case ACPI_TYPE_BUFFER:

        ReturnBtype = ACPI_RTYPE_BUFFER;
        break;

    case ACPI_TYPE_STRING:

        ReturnBtype = ACPI_RTYPE_STRING;
        break;

    case ACPI_TYPE_PACKAGE:

        ReturnBtype = ACPI_RTYPE_PACKAGE;
        break;

    case ACPI_TYPE_LOCAL_REFERENCE:

        ReturnBtype = ACPI_RTYPE_REFERENCE;
        break;

    default:

        /* Not one of the supported objects, must be incorrect */

        ReturnBtype = ACPI_RTYPE_ANY;
        break;
    }

    return (ReturnBtype);
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
          int _len_ReturnObject0 = 1;
          struct TYPE_5__ * ReturnObject = (struct TYPE_5__ *) malloc(_len_ReturnObject0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ReturnObject0; _i0++) {
            ReturnObject[_i0].Common.Type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AcpiNsGetBitmappedType(ReturnObject);
          printf("%d\n", benchRet); 
          free(ReturnObject);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ReturnObject0 = 100;
          struct TYPE_5__ * ReturnObject = (struct TYPE_5__ *) malloc(_len_ReturnObject0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ReturnObject0; _i0++) {
            ReturnObject[_i0].Common.Type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AcpiNsGetBitmappedType(ReturnObject);
          printf("%d\n", benchRet); 
          free(ReturnObject);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
