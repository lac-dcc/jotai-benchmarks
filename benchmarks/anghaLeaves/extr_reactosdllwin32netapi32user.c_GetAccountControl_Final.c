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
typedef  int ULONG ;

/* Variables and functions */
 int UF_ACCOUNTDISABLE ; 
 int UF_DONT_EXPIRE_PASSWD ; 
 int UF_HOMEDIR_REQUIRED ; 
 int UF_INTERDOMAIN_TRUST_ACCOUNT ; 
 int UF_LOCKOUT ; 
 int UF_NORMAL_ACCOUNT ; 
 int UF_PASSWD_NOTREQD ; 
 int UF_SERVER_TRUST_ACCOUNT ; 
 int UF_TEMP_DUPLICATE_ACCOUNT ; 
 int UF_WORKSTATION_TRUST_ACCOUNT ; 
 int USER_ACCOUNT_AUTO_LOCKED ; 
 int USER_ACCOUNT_DISABLED ; 
 int USER_DONT_EXPIRE_PASSWORD ; 
 int USER_HOME_DIRECTORY_REQUIRED ; 
 int USER_INTERDOMAIN_TRUST_ACCOUNT ; 
 int USER_NORMAL_ACCOUNT ; 
 int USER_PASSWORD_NOT_REQUIRED ; 
 int USER_SERVER_TRUST_ACCOUNT ; 
 int USER_TEMP_DUPLICATE_ACCOUNT ; 
 int USER_WORKSTATION_TRUST_ACCOUNT ; 

__attribute__((used)) static
ULONG
GetAccountControl(ULONG Flags)
{
    ULONG AccountControl = 0;

    if (Flags & UF_ACCOUNTDISABLE)
        AccountControl |= USER_ACCOUNT_DISABLED;

    if (Flags & UF_HOMEDIR_REQUIRED)
        AccountControl |= USER_HOME_DIRECTORY_REQUIRED;

    if (Flags & UF_PASSWD_NOTREQD)
        AccountControl |= USER_PASSWORD_NOT_REQUIRED;

    if (Flags & UF_LOCKOUT)
        AccountControl |= USER_ACCOUNT_AUTO_LOCKED;

    if (Flags & UF_DONT_EXPIRE_PASSWD)
        AccountControl |= USER_DONT_EXPIRE_PASSWORD;

    /* Set account type flags */
    if (Flags & UF_TEMP_DUPLICATE_ACCOUNT)
        AccountControl |= USER_TEMP_DUPLICATE_ACCOUNT;
    else if (Flags & UF_NORMAL_ACCOUNT)
        AccountControl |= USER_NORMAL_ACCOUNT;
    else if (Flags & UF_INTERDOMAIN_TRUST_ACCOUNT)
        AccountControl |= USER_INTERDOMAIN_TRUST_ACCOUNT;
    else if (Flags & UF_WORKSTATION_TRUST_ACCOUNT)
        AccountControl |= USER_WORKSTATION_TRUST_ACCOUNT;
    else if (Flags & UF_SERVER_TRUST_ACCOUNT)
        AccountControl |= USER_SERVER_TRUST_ACCOUNT;

    return AccountControl;
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
          int Flags = 100;
          int benchRet = GetAccountControl(Flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Flags = 255;
          int benchRet = GetAccountControl(Flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Flags = 10;
          int benchRet = GetAccountControl(Flags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
