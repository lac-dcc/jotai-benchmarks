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
typedef  int VARTYPE ;
typedef  int /*<<< orphan*/  VARIANT ;
typedef  int /*<<< orphan*/  UINT_PTR ;
typedef  int /*<<< orphan*/  SHORT ;
typedef  int /*<<< orphan*/  LPUNKNOWN ;
typedef  int /*<<< orphan*/  LPDISPATCH ;
typedef  int /*<<< orphan*/  LONG64 ;
typedef  int /*<<< orphan*/  LONG ;
typedef  int /*<<< orphan*/  INT ;
typedef  int DWORD ;
typedef  int /*<<< orphan*/  DECIMAL ;
typedef  int /*<<< orphan*/  DATE ;
typedef  int /*<<< orphan*/  CY ;
typedef  int /*<<< orphan*/  BYTE ;
typedef  int /*<<< orphan*/  BSTR ;

/* Variables and functions */
#define  VT_BOOL 150 
#define  VT_BSTR 149 
#define  VT_CY 148 
#define  VT_DATE 147 
#define  VT_DECIMAL 146 
#define  VT_DISPATCH 145 
#define  VT_ERROR 144 
#define  VT_I1 143 
#define  VT_I2 142 
#define  VT_I4 141 
#define  VT_I8 140 
#define  VT_INT 139 
#define  VT_INT_PTR 138 
#define  VT_R4 137 
#define  VT_R8 136 
#define  VT_UI1 135 
#define  VT_UI2 134 
#define  VT_UI4 133 
#define  VT_UI8 132 
#define  VT_UINT 131 
#define  VT_UINT_PTR 130 
#define  VT_UNKNOWN 129 
#define  VT_VARIANT 128 
 int /*<<< orphan*/  has_i8 ; 
 int /*<<< orphan*/  has_int_ptr ; 

__attribute__((used)) static DWORD SAFEARRAY_GetVTSize(VARTYPE vt)
{
  switch (vt)
  {
    case VT_I1:
    case VT_UI1:      return sizeof(BYTE);
    case VT_BOOL:
    case VT_I2:
    case VT_UI2:      return sizeof(SHORT);
    case VT_I4:
    case VT_UI4:
    case VT_R4:
    case VT_ERROR:    return sizeof(LONG);
    case VT_R8:       return sizeof(LONG64);
    case VT_I8:
    case VT_UI8:
      if (has_i8)
        return sizeof(LONG64);
      break;
    case VT_INT:
    case VT_UINT:     return sizeof(INT);
    case VT_INT_PTR:
    case VT_UINT_PTR: 
      if (has_int_ptr)
        return sizeof(UINT_PTR);
      break;
    case VT_CY:       return sizeof(CY);
    case VT_DATE:     return sizeof(DATE);
    case VT_BSTR:     return sizeof(BSTR);
    case VT_DISPATCH: return sizeof(LPDISPATCH);
    case VT_VARIANT:  return sizeof(VARIANT);
    case VT_UNKNOWN:  return sizeof(LPUNKNOWN);
    case VT_DECIMAL:  return sizeof(DECIMAL);
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
          int vt = 100;
          int benchRet = SAFEARRAY_GetVTSize(vt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vt = 255;
          int benchRet = SAFEARRAY_GetVTSize(vt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vt = 10;
          int benchRet = SAFEARRAY_GetVTSize(vt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
