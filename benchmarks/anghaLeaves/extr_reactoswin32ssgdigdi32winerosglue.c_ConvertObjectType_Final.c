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
typedef  int WORD ;
typedef  int /*<<< orphan*/  GDILOOBJTYPE ;

/* Variables and functions */
 int /*<<< orphan*/  GDILoObjType_LO_ALTDC_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_BITMAP_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_BRUSH_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_DC_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_EXTPEN_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_FONT_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_ICMLCS_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_METADC16_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_METAFILE16_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_METAFILE_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_PALETTE_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_PEN_TYPE ; 
 int /*<<< orphan*/  GDILoObjType_LO_REGION_TYPE ; 
#define  OBJ_BITMAP 141 
#define  OBJ_BRUSH 140 
#define  OBJ_COLORSPACE 139 
#define  OBJ_DC 138 
#define  OBJ_ENHMETADC 137 
#define  OBJ_ENHMETAFILE 136 
#define  OBJ_EXTPEN 135 
#define  OBJ_FONT 134 
#define  OBJ_MEMDC 133 
#define  OBJ_METADC 132 
#define  OBJ_METAFILE 131 
#define  OBJ_PAL 130 
#define  OBJ_PEN 129 
#define  OBJ_REGION 128 

__attribute__((used)) static
GDILOOBJTYPE
ConvertObjectType(
    WORD wType)
{
    /* Get the GDI object type */
    switch (wType)
    {
        case OBJ_PEN: return GDILoObjType_LO_PEN_TYPE;
        case OBJ_BRUSH: return GDILoObjType_LO_BRUSH_TYPE;
        case OBJ_DC: return GDILoObjType_LO_DC_TYPE;
        case OBJ_METADC: return GDILoObjType_LO_METADC16_TYPE;
        case OBJ_PAL: return GDILoObjType_LO_PALETTE_TYPE;
        case OBJ_FONT: return GDILoObjType_LO_FONT_TYPE;
        case OBJ_BITMAP: return GDILoObjType_LO_BITMAP_TYPE;
        case OBJ_REGION: return GDILoObjType_LO_REGION_TYPE;
        case OBJ_METAFILE: return GDILoObjType_LO_METAFILE16_TYPE;
        case OBJ_MEMDC: return GDILoObjType_LO_DC_TYPE;
        case OBJ_EXTPEN: return GDILoObjType_LO_EXTPEN_TYPE;
        case OBJ_ENHMETADC: return GDILoObjType_LO_ALTDC_TYPE;
        case OBJ_ENHMETAFILE: return GDILoObjType_LO_METAFILE_TYPE;
        case OBJ_COLORSPACE: return GDILoObjType_LO_ICMLCS_TYPE;
        default: return 0;
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
          int wType = 100;
          int benchRet = ConvertObjectType(wType);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int wType = 255;
          int benchRet = ConvertObjectType(wType);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int wType = 10;
          int benchRet = ConvertObjectType(wType);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
