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
typedef  int u32 ;

/* Variables and functions */
#define  HASH_CATEGORY_ARCHIVE 146 
 char const* HASH_CATEGORY_ARCHIVE_STR ; 
#define  HASH_CATEGORY_DATABASE_SERVER 145 
 char const* HASH_CATEGORY_DATABASE_SERVER_STR ; 
#define  HASH_CATEGORY_DOCUMENTS 144 
 char const* HASH_CATEGORY_DOCUMENTS_STR ; 
#define  HASH_CATEGORY_EAS 143 
 char const* HASH_CATEGORY_EAS_STR ; 
#define  HASH_CATEGORY_FDE 142 
 char const* HASH_CATEGORY_FDE_STR ; 
#define  HASH_CATEGORY_FORUM_SOFTWARE 141 
 char const* HASH_CATEGORY_FORUM_SOFTWARE_STR ; 
#define  HASH_CATEGORY_GENERIC_KDF 140 
 char const* HASH_CATEGORY_GENERIC_KDF_STR ; 
#define  HASH_CATEGORY_NETWORK_PROTOCOL 139 
 char const* HASH_CATEGORY_NETWORK_PROTOCOL_STR ; 
#define  HASH_CATEGORY_NETWORK_SERVER 138 
 char const* HASH_CATEGORY_NETWORK_SERVER_STR ; 
#define  HASH_CATEGORY_OS 137 
 char const* HASH_CATEGORY_OS_STR ; 
#define  HASH_CATEGORY_OTP 136 
 char const* HASH_CATEGORY_OTP_STR ; 
#define  HASH_CATEGORY_PASSWORD_MANAGER 135 
 char const* HASH_CATEGORY_PASSWORD_MANAGER_STR ; 
#define  HASH_CATEGORY_PLAIN 134 
 char const* HASH_CATEGORY_PLAIN_STR ; 
#define  HASH_CATEGORY_RAW_CHECKSUM 133 
 char const* HASH_CATEGORY_RAW_CHECKSUM_STR ; 
#define  HASH_CATEGORY_RAW_CIPHER_KPA 132 
 char const* HASH_CATEGORY_RAW_CIPHER_KPA_STR ; 
#define  HASH_CATEGORY_RAW_HASH 131 
#define  HASH_CATEGORY_RAW_HASH_AUTHENTICATED 130 
 char const* HASH_CATEGORY_RAW_HASH_AUTHENTICATED_STR ; 
#define  HASH_CATEGORY_RAW_HASH_SALTED 129 
 char const* HASH_CATEGORY_RAW_HASH_SALTED_STR ; 
 char const* HASH_CATEGORY_RAW_HASH_STR ; 
#define  HASH_CATEGORY_UNDEFINED 128 
 char const* HASH_CATEGORY_UNDEFINED_STR ; 

const char *strhashcategory (const u32 hash_category)
{
  switch (hash_category)
  {
    case HASH_CATEGORY_UNDEFINED:               return HASH_CATEGORY_UNDEFINED_STR;
    case HASH_CATEGORY_RAW_HASH:                return HASH_CATEGORY_RAW_HASH_STR;
    case HASH_CATEGORY_RAW_HASH_SALTED:         return HASH_CATEGORY_RAW_HASH_SALTED_STR;
    case HASH_CATEGORY_RAW_HASH_AUTHENTICATED:  return HASH_CATEGORY_RAW_HASH_AUTHENTICATED_STR;
    case HASH_CATEGORY_RAW_CIPHER_KPA:          return HASH_CATEGORY_RAW_CIPHER_KPA_STR;
    case HASH_CATEGORY_GENERIC_KDF:             return HASH_CATEGORY_GENERIC_KDF_STR;
    case HASH_CATEGORY_NETWORK_PROTOCOL:        return HASH_CATEGORY_NETWORK_PROTOCOL_STR;
    case HASH_CATEGORY_FORUM_SOFTWARE:          return HASH_CATEGORY_FORUM_SOFTWARE_STR;
    case HASH_CATEGORY_DATABASE_SERVER:         return HASH_CATEGORY_DATABASE_SERVER_STR;
    case HASH_CATEGORY_NETWORK_SERVER:          return HASH_CATEGORY_NETWORK_SERVER_STR;
    case HASH_CATEGORY_RAW_CHECKSUM:            return HASH_CATEGORY_RAW_CHECKSUM_STR;
    case HASH_CATEGORY_OS:                      return HASH_CATEGORY_OS_STR;
    case HASH_CATEGORY_EAS:                     return HASH_CATEGORY_EAS_STR;
    case HASH_CATEGORY_ARCHIVE:                 return HASH_CATEGORY_ARCHIVE_STR;
    case HASH_CATEGORY_FDE:                     return HASH_CATEGORY_FDE_STR;
    case HASH_CATEGORY_DOCUMENTS:               return HASH_CATEGORY_DOCUMENTS_STR;
    case HASH_CATEGORY_PASSWORD_MANAGER:        return HASH_CATEGORY_PASSWORD_MANAGER_STR;
    case HASH_CATEGORY_OTP:                     return HASH_CATEGORY_OTP_STR;
    case HASH_CATEGORY_PLAIN:                   return HASH_CATEGORY_PLAIN_STR;
  }

  return NULL;
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
          const int hash_category = 100;
          const char * benchRet = strhashcategory(hash_category);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int hash_category = 255;
          const char * benchRet = strhashcategory(hash_category);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int hash_category = 10;
          const char * benchRet = strhashcategory(hash_category);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
