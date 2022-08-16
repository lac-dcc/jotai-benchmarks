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
typedef  int u32 ;

/* Variables and functions */
#define  HLFMT_DCC 137 
#define  HLFMT_DCC2 136 
#define  HLFMT_HASHCAT 135 
#define  HLFMT_NETNTLM1 134 
#define  HLFMT_NETNTLM2 133 
#define  HLFMT_NSLDAP 132 
#define  HLFMT_NSLDAPS 131 
#define  HLFMT_PASSWD 130 
#define  HLFMT_PWDUMP 129 
#define  HLFMT_SHADOW 128 
 char const* HLFMT_TEXT_DCC ; 
 char const* HLFMT_TEXT_DCC2 ; 
 char const* HLFMT_TEXT_HASHCAT ; 
 char const* HLFMT_TEXT_NETNTLM1 ; 
 char const* HLFMT_TEXT_NETNTLM2 ; 
 char const* HLFMT_TEXT_NSLDAP ; 
 char const* HLFMT_TEXT_NSLDAPS ; 
 char const* HLFMT_TEXT_PASSWD ; 
 char const* HLFMT_TEXT_PWDUMP ; 
 char const* HLFMT_TEXT_SHADOW ; 

const char *strhlfmt (const u32 hashfile_format)
{
  switch (hashfile_format)
  {
    case HLFMT_HASHCAT:  return HLFMT_TEXT_HASHCAT;
    case HLFMT_PWDUMP:   return HLFMT_TEXT_PWDUMP;
    case HLFMT_PASSWD:   return HLFMT_TEXT_PASSWD;
    case HLFMT_SHADOW:   return HLFMT_TEXT_SHADOW;
    case HLFMT_DCC:      return HLFMT_TEXT_DCC;
    case HLFMT_DCC2:     return HLFMT_TEXT_DCC2;
    case HLFMT_NETNTLM1: return HLFMT_TEXT_NETNTLM1;
    case HLFMT_NETNTLM2: return HLFMT_TEXT_NETNTLM2;
    case HLFMT_NSLDAP:   return HLFMT_TEXT_NSLDAP;
    case HLFMT_NSLDAPS:  return HLFMT_TEXT_NSLDAPS;
  }

  return "Unknown";
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
          const int hashfile_format = 100;
          const char * benchRet = strhlfmt(hashfile_format);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int hashfile_format = 255;
          const char * benchRet = strhlfmt(hashfile_format);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int hashfile_format = 10;
          const char * benchRet = strhlfmt(hashfile_format);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
