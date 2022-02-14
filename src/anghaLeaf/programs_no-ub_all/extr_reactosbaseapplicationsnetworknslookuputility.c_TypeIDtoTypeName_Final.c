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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int USHORT ;
typedef  char* PCHAR ;

/* Variables and functions */
#define  TYPE_A 135 
#define  TYPE_ANY 134 
#define  TYPE_CNAME 133 
#define  TYPE_MX 132 
#define  TYPE_NS 131 
#define  TYPE_PTR 130 
#define  TYPE_SOA 129 
#define  TYPE_WKS 128 
 char* TypeA ; 
 char* TypeAny ; 
 char* TypeCNAME ; 
 char* TypeMX ; 
 char* TypeNS ; 
 char* TypePTR ; 
 char* TypeSOA ; 
 char* TypeSRV ; 

PCHAR TypeIDtoTypeName( USHORT TypeID )
{
    switch( TypeID )
    {
    case TYPE_A:
        return TypeA;

    case TYPE_NS:
        return TypeNS;

    case TYPE_CNAME:
        return TypeCNAME;

    case TYPE_SOA:
        return TypeSOA;

    case TYPE_WKS:
        return TypeSRV;

    case TYPE_PTR:
        return TypePTR;

    case TYPE_MX:
        return TypeMX;

    case TYPE_ANY:
        return TypeAny;

    default:
        return "Unknown";
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

    // big-arr
    case 0:
    {
          int TypeID = 255;
          char * benchRet = TypeIDtoTypeName(TypeID);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
