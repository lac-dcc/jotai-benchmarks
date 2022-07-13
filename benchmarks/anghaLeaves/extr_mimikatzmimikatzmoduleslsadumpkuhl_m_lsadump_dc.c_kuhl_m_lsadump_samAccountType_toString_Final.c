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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  char* LPCWSTR ;
typedef  int DWORD ;

/* Variables and functions */
#define  SAM_ALIAS_OBJECT 137 
#define  SAM_APP_BASIC_GROUP 136 
#define  SAM_APP_QUERY_GROUP 135 
#define  SAM_DOMAIN_OBJECT 134 
#define  SAM_GROUP_OBJECT 133 
#define  SAM_MACHINE_ACCOUNT 132 
#define  SAM_NON_SECURITY_ALIAS_OBJECT 131 
#define  SAM_NON_SECURITY_GROUP_OBJECT 130 
#define  SAM_TRUST_ACCOUNT 129 
#define  SAM_USER_OBJECT 128 

LPCWSTR kuhl_m_lsadump_samAccountType_toString(DWORD accountType)
{
	LPCWSTR target;
	switch(accountType)
	{
	case SAM_DOMAIN_OBJECT:
		target = L"DOMAIN_OBJECT";
		break;
	case SAM_GROUP_OBJECT:
		target = L"GROUP_OBJECT";
		break;
	case SAM_NON_SECURITY_GROUP_OBJECT:
		target = L"NON_SECURITY_GROUP_OBJECT";
		break;
	case SAM_ALIAS_OBJECT:
		target = L"ALIAS_OBJECT";
		break;
	case SAM_NON_SECURITY_ALIAS_OBJECT:
		target = L"NON_SECURITY_ALIAS_OBJECT";
		break;
	case SAM_USER_OBJECT:
		target = L"USER_OBJECT";
		break;
	case SAM_MACHINE_ACCOUNT:
		target = L"MACHINE_ACCOUNT";
		break;
	case SAM_TRUST_ACCOUNT:
		target = L"TRUST_ACCOUNT";
		break;
	case SAM_APP_BASIC_GROUP:
		target = L"APP_BASIC_GROUP";
		break;
	case SAM_APP_QUERY_GROUP:
		target = L"APP_QUERY_GROUP";
		break;
	default:
		target = L"unknown";
	}
	return target;
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
          int accountType = 100;
          char * benchRet = kuhl_m_lsadump_samAccountType_toString(accountType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int accountType = 255;
          char * benchRet = kuhl_m_lsadump_samAccountType_toString(accountType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int accountType = 10;
          char * benchRet = kuhl_m_lsadump_samAccountType_toString(accountType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
