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
typedef  int UINT ;

/* Variables and functions */
#define  PID_APPNAME 144 
#define  PID_AUTHOR 143 
#define  PID_CHARCOUNT 142 
#define  PID_CODEPAGE 141 
#define  PID_COMMENTS 140 
#define  PID_CREATE_DTM 139 
#define  PID_KEYWORDS 138 
#define  PID_LASTAUTHOR 137 
#define  PID_LASTPRINTED 136 
#define  PID_LASTSAVE_DTM 135 
#define  PID_PAGECOUNT 134 
#define  PID_REVNUMBER 133 
#define  PID_SECURITY 132 
#define  PID_SUBJECT 131 
#define  PID_TEMPLATE 130 
#define  PID_TITLE 129 
#define  PID_WORDCOUNT 128 
 int VT_EMPTY ; 
 int VT_FILETIME ; 
 int VT_I2 ; 
 int VT_I4 ; 
 int VT_LPSTR ; 

__attribute__((used)) static UINT get_type( UINT uiProperty )
{
    switch( uiProperty )
    {
#ifdef __REACTOS__
    case PID_CODEPAGE_MSI:
#else
    case PID_CODEPAGE:
#endif
         return VT_I2;

    case PID_SUBJECT:
    case PID_AUTHOR:
    case PID_KEYWORDS:
    case PID_COMMENTS:
    case PID_TEMPLATE:
    case PID_LASTAUTHOR:
    case PID_REVNUMBER:
    case PID_APPNAME:
    case PID_TITLE:
         return VT_LPSTR;

    case PID_LASTPRINTED:
    case PID_CREATE_DTM:
    case PID_LASTSAVE_DTM:
         return VT_FILETIME;

    case PID_WORDCOUNT:
    case PID_CHARCOUNT:
#ifdef __REACTOS__
    case PID_SECURITY_MSI:
#else
    case PID_SECURITY:
#endif
    case PID_PAGECOUNT:
         return VT_I4;
    }
    return VT_EMPTY;
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
          int uiProperty = 100;
          int benchRet = get_type(uiProperty);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int uiProperty = 255;
          int benchRet = get_type(uiProperty);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int uiProperty = 10;
          int benchRet = get_type(uiProperty);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
