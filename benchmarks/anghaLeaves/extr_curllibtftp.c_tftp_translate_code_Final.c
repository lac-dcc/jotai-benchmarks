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
typedef  int tftp_error_t ;
typedef  int /*<<< orphan*/  CURLcode ;

/* Variables and functions */
 int /*<<< orphan*/  CURLE_ABORTED_BY_CALLBACK ; 
 int /*<<< orphan*/  CURLE_COULDNT_CONNECT ; 
 int /*<<< orphan*/  CURLE_OK ; 
 int /*<<< orphan*/  CURLE_OPERATION_TIMEDOUT ; 
 int /*<<< orphan*/  CURLE_REMOTE_DISK_FULL ; 
 int /*<<< orphan*/  CURLE_REMOTE_FILE_EXISTS ; 
 int /*<<< orphan*/  CURLE_TFTP_ILLEGAL ; 
 int /*<<< orphan*/  CURLE_TFTP_NOSUCHUSER ; 
 int /*<<< orphan*/  CURLE_TFTP_NOTFOUND ; 
 int /*<<< orphan*/  CURLE_TFTP_PERM ; 
 int /*<<< orphan*/  CURLE_TFTP_UNKNOWNID ; 
#define  TFTP_ERR_DISKFULL 137 
#define  TFTP_ERR_EXISTS 136 
#define  TFTP_ERR_ILLEGAL 135 
 int TFTP_ERR_NONE ; 
#define  TFTP_ERR_NORESPONSE 134 
#define  TFTP_ERR_NOSUCHUSER 133 
#define  TFTP_ERR_NOTFOUND 132 
#define  TFTP_ERR_PERM 131 
#define  TFTP_ERR_TIMEOUT 130 
#define  TFTP_ERR_UNDEF 129 
#define  TFTP_ERR_UNKNOWNID 128 

__attribute__((used)) static CURLcode tftp_translate_code(tftp_error_t error)
{
  CURLcode result = CURLE_OK;

  if(error != TFTP_ERR_NONE) {
    switch(error) {
    case TFTP_ERR_NOTFOUND:
      result = CURLE_TFTP_NOTFOUND;
      break;
    case TFTP_ERR_PERM:
      result = CURLE_TFTP_PERM;
      break;
    case TFTP_ERR_DISKFULL:
      result = CURLE_REMOTE_DISK_FULL;
      break;
    case TFTP_ERR_UNDEF:
    case TFTP_ERR_ILLEGAL:
      result = CURLE_TFTP_ILLEGAL;
      break;
    case TFTP_ERR_UNKNOWNID:
      result = CURLE_TFTP_UNKNOWNID;
      break;
    case TFTP_ERR_EXISTS:
      result = CURLE_REMOTE_FILE_EXISTS;
      break;
    case TFTP_ERR_NOSUCHUSER:
      result = CURLE_TFTP_NOSUCHUSER;
      break;
    case TFTP_ERR_TIMEOUT:
      result = CURLE_OPERATION_TIMEDOUT;
      break;
    case TFTP_ERR_NORESPONSE:
      result = CURLE_COULDNT_CONNECT;
      break;
    default:
      result = CURLE_ABORTED_BY_CALLBACK;
      break;
    }
  }
  else
    result = CURLE_OK;

  return result;
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
          int error = 100;
          int benchRet = tftp_translate_code(error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error = 255;
          int benchRet = tftp_translate_code(error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error = 10;
          int benchRet = tftp_translate_code(error);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
