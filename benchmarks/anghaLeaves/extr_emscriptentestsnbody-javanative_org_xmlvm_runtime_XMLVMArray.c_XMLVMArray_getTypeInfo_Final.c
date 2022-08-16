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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int useAtomicMalloc; int sizeOfBaseType; } ;
typedef  TYPE_1__ TYPE_INFO ;
typedef  scalar_t__ JAVA_OBJECT ;
typedef  int /*<<< orphan*/  JAVA_ARRAY_SHORT ;
typedef  int /*<<< orphan*/  JAVA_ARRAY_LONG ;
typedef  int /*<<< orphan*/  JAVA_ARRAY_INT ;
typedef  int /*<<< orphan*/  JAVA_ARRAY_FLOAT ;
typedef  int /*<<< orphan*/  JAVA_ARRAY_DOUBLE ;
typedef  int /*<<< orphan*/  JAVA_ARRAY_BYTE ;

/* Variables and functions */
 scalar_t__ __CLASS_boolean ; 
 scalar_t__ __CLASS_byte ; 
 scalar_t__ __CLASS_char ; 
 scalar_t__ __CLASS_double ; 
 scalar_t__ __CLASS_float ; 
 scalar_t__ __CLASS_int ; 
 scalar_t__ __CLASS_long ; 
 scalar_t__ __CLASS_short ; 

TYPE_INFO XMLVMArray_getTypeInfo(JAVA_OBJECT type)
{
    TYPE_INFO info;
    info.useAtomicMalloc = 1;
    
    if (type == __CLASS_byte || type == __CLASS_boolean) {
        info.sizeOfBaseType = sizeof(JAVA_ARRAY_BYTE);
    } else if (type == __CLASS_char || type == __CLASS_short) {
        info.sizeOfBaseType = sizeof(JAVA_ARRAY_SHORT);
    } else if (type == __CLASS_int) {
        info.sizeOfBaseType = sizeof(JAVA_ARRAY_INT);
    } else if (type == __CLASS_float) {
        info.sizeOfBaseType = sizeof(JAVA_ARRAY_FLOAT);
    } else if (type == __CLASS_double) {
        info.sizeOfBaseType = sizeof(JAVA_ARRAY_DOUBLE);
    } else if (type == __CLASS_long) {
        info.sizeOfBaseType = sizeof(JAVA_ARRAY_LONG);
    } else {
        info.sizeOfBaseType = sizeof(void*);
        // For arrays of object references we need to use the regular malloc() as the
        // GC needs to scan this memory region.
        info.useAtomicMalloc = 0;
    }
    
    return info;
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
          long type = 100;
          struct TYPE_3__ benchRet = XMLVMArray_getTypeInfo(type);
          printf("%d\n", benchRet.useAtomicMalloc);
          printf("%d\n", benchRet.sizeOfBaseType);
        
        break;
    }
    // big-arr
    case 1:
    {
          long type = 255;
          struct TYPE_3__ benchRet = XMLVMArray_getTypeInfo(type);
          printf("%d\n", benchRet.useAtomicMalloc);
          printf("%d\n", benchRet.sizeOfBaseType);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long type = 10;
          struct TYPE_3__ benchRet = XMLVMArray_getTypeInfo(type);
          printf("%d\n", benchRet.useAtomicMalloc);
          printf("%d\n", benchRet.sizeOfBaseType);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
