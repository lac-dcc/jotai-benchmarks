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
typedef  int /*<<< orphan*/  uint32_t ;

/* Variables and functions */
 int /*<<< orphan*/  VMCS_GUEST_CR0 ; 
 int /*<<< orphan*/  VMCS_GUEST_CR3 ; 
 int /*<<< orphan*/  VMCS_GUEST_CR4 ; 
 int /*<<< orphan*/  VMCS_GUEST_CS_SELECTOR ; 
 int /*<<< orphan*/  VMCS_GUEST_DR7 ; 
 int /*<<< orphan*/  VMCS_GUEST_DS_SELECTOR ; 
 int /*<<< orphan*/  VMCS_GUEST_ES_SELECTOR ; 
 int /*<<< orphan*/  VMCS_GUEST_FS_SELECTOR ; 
 int /*<<< orphan*/  VMCS_GUEST_GS_SELECTOR ; 
 int /*<<< orphan*/  VMCS_GUEST_IA32_EFER ; 
 int /*<<< orphan*/  VMCS_GUEST_LDTR_SELECTOR ; 
 int /*<<< orphan*/  VMCS_GUEST_PDPTE0 ; 
 int /*<<< orphan*/  VMCS_GUEST_PDPTE1 ; 
 int /*<<< orphan*/  VMCS_GUEST_PDPTE2 ; 
 int /*<<< orphan*/  VMCS_GUEST_PDPTE3 ; 
 int /*<<< orphan*/  VMCS_GUEST_RFLAGS ; 
 int /*<<< orphan*/  VMCS_GUEST_RIP ; 
 int /*<<< orphan*/  VMCS_GUEST_RSP ; 
 int /*<<< orphan*/  VMCS_GUEST_SS_SELECTOR ; 
 int /*<<< orphan*/  VMCS_GUEST_TR_SELECTOR ; 
#define  VM_REG_GUEST_CR0 147 
#define  VM_REG_GUEST_CR3 146 
#define  VM_REG_GUEST_CR4 145 
#define  VM_REG_GUEST_CS 144 
#define  VM_REG_GUEST_DR7 143 
#define  VM_REG_GUEST_DS 142 
#define  VM_REG_GUEST_EFER 141 
#define  VM_REG_GUEST_ES 140 
#define  VM_REG_GUEST_FS 139 
#define  VM_REG_GUEST_GS 138 
#define  VM_REG_GUEST_LDTR 137 
#define  VM_REG_GUEST_PDPTE0 136 
#define  VM_REG_GUEST_PDPTE1 135 
#define  VM_REG_GUEST_PDPTE2 134 
#define  VM_REG_GUEST_PDPTE3 133 
#define  VM_REG_GUEST_RFLAGS 132 
#define  VM_REG_GUEST_RIP 131 
#define  VM_REG_GUEST_RSP 130 
#define  VM_REG_GUEST_SS 129 
#define  VM_REG_GUEST_TR 128 

__attribute__((used)) static uint32_t
vmcs_field_encoding(int ident)
{
	switch (ident) {
	case VM_REG_GUEST_CR0:
		return (VMCS_GUEST_CR0);
	case VM_REG_GUEST_CR3:
		return (VMCS_GUEST_CR3);
	case VM_REG_GUEST_CR4:
		return (VMCS_GUEST_CR4);
	case VM_REG_GUEST_DR7:
		return (VMCS_GUEST_DR7);
	case VM_REG_GUEST_RSP:
		return (VMCS_GUEST_RSP);
	case VM_REG_GUEST_RIP:
		return (VMCS_GUEST_RIP);
	case VM_REG_GUEST_RFLAGS:
		return (VMCS_GUEST_RFLAGS);
	case VM_REG_GUEST_ES:
		return (VMCS_GUEST_ES_SELECTOR);
	case VM_REG_GUEST_CS:
		return (VMCS_GUEST_CS_SELECTOR);
	case VM_REG_GUEST_SS:
		return (VMCS_GUEST_SS_SELECTOR);
	case VM_REG_GUEST_DS:
		return (VMCS_GUEST_DS_SELECTOR);
	case VM_REG_GUEST_FS:
		return (VMCS_GUEST_FS_SELECTOR);
	case VM_REG_GUEST_GS:
		return (VMCS_GUEST_GS_SELECTOR);
	case VM_REG_GUEST_TR:
		return (VMCS_GUEST_TR_SELECTOR);
	case VM_REG_GUEST_LDTR:
		return (VMCS_GUEST_LDTR_SELECTOR);
	case VM_REG_GUEST_EFER:
		return (VMCS_GUEST_IA32_EFER);
	case VM_REG_GUEST_PDPTE0:
		return (VMCS_GUEST_PDPTE0);
	case VM_REG_GUEST_PDPTE1:
		return (VMCS_GUEST_PDPTE1);
	case VM_REG_GUEST_PDPTE2:
		return (VMCS_GUEST_PDPTE2);
	case VM_REG_GUEST_PDPTE3:
		return (VMCS_GUEST_PDPTE3);
	default:
		return ((uint32_t) -1);
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
          int ident = 100;
          int benchRet = vmcs_field_encoding(ident);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ident = 255;
          int benchRet = vmcs_field_encoding(ident);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ident = 10;
          int benchRet = vmcs_field_encoding(ident);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
