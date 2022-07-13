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

/* Variables and functions */
#define  CURLE_COULDNT_CONNECT 139 
#define  CURLE_COULDNT_RESOLVE_HOST 138 
#define  CURLE_COULDNT_RESOLVE_PROXY 137 
#define  CURLE_GOT_NOTHING 136 
#define  CURLE_OPERATION_TIMEDOUT 135 
 int CURLE_PEER_FAILED_VERIFICATION ; 
#define  CURLE_RECV_ERROR 134 
#define  CURLE_SEND_ERROR 133 
#define  CURLE_SEND_FAIL_REWIND 132 
 int CURLE_SSL_CACERT ; 
#define  CURLE_SSL_CACERT_BADFILE 131 
#define  CURLE_SSL_CERTPROBLEM 130 
#define  CURLE_SSL_CONNECT_ERROR 129 
#define  CURLE_SSL_ISSUER_ERROR 128 
 int HTTP_TASK_ERR_CONNECT ; 
 int HTTP_TASK_ERR_NET ; 
 int HTTP_TASK_ERR_RESOLVE_HOST ; 
 int HTTP_TASK_ERR_RESOLVE_PROXY ; 
 int HTTP_TASK_ERR_SSL ; 
 int HTTP_TASK_ERR_TX ; 
 int HTTP_TASK_ERR_TX_TIMEOUT ; 
 int HTTP_TASK_ERR_UNHANDLED_REDIRECT ; 

__attribute__((used)) static int
curl_error_to_http_task_error (int curl_error)
{
    if (curl_error == CURLE_SSL_CACERT ||
        curl_error == CURLE_PEER_FAILED_VERIFICATION)
        return HTTP_TASK_ERR_SSL;

    switch (curl_error) {
    case CURLE_COULDNT_RESOLVE_PROXY:
        return HTTP_TASK_ERR_RESOLVE_PROXY;
    case CURLE_COULDNT_RESOLVE_HOST:
        return HTTP_TASK_ERR_RESOLVE_HOST;
    case CURLE_COULDNT_CONNECT:
        return HTTP_TASK_ERR_CONNECT;
    case CURLE_OPERATION_TIMEDOUT:
        return HTTP_TASK_ERR_TX_TIMEOUT;
    case CURLE_SSL_CONNECT_ERROR:
    case CURLE_SSL_CERTPROBLEM:
    case CURLE_SSL_CACERT_BADFILE:
    case CURLE_SSL_ISSUER_ERROR:
        return HTTP_TASK_ERR_SSL;
    case CURLE_GOT_NOTHING:
    case CURLE_SEND_ERROR:
    case CURLE_RECV_ERROR:
        return HTTP_TASK_ERR_TX;
    case CURLE_SEND_FAIL_REWIND:
        return HTTP_TASK_ERR_UNHANDLED_REDIRECT;
    default:
        return HTTP_TASK_ERR_NET;
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
          int curl_error = 100;
          int benchRet = curl_error_to_http_task_error(curl_error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int curl_error = 255;
          int benchRet = curl_error_to_http_task_error(curl_error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int curl_error = 10;
          int benchRet = curl_error_to_http_task_error(curl_error);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
