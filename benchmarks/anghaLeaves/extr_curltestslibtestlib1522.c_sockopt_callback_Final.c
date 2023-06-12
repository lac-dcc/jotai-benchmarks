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
       3            empty\n\
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
typedef  int /*<<< orphan*/  curlsocktype ;
typedef  int /*<<< orphan*/  curl_socket_t ;

/* Variables and functions */
 int CURL_SOCKOPT_OK ; 

__attribute__((used)) static int sockopt_callback(void *clientp, curl_socket_t curlfd,
                            curlsocktype purpose)
{
#if defined(SOL_SOCKET) && defined(SO_SNDBUF)
  int sndbufsize = 4 * 1024; /* 4KB send buffer */
  (void) clientp;
  (void) purpose;
  setsockopt(curlfd, SOL_SOCKET, SO_SNDBUF,
             (const char *)&sndbufsize, sizeof(sndbufsize));
#else
  (void)clientp;
  (void)curlfd;
  (void)purpose;
#endif
  return CURL_SOCKOPT_OK;
}

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
          int curlfd = 100;
        
          int purpose = 100;
        
          void * clientp;
        
          int benchRet = sockopt_callback(clientp,curlfd,purpose);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int curlfd = 255;
        
          int purpose = 255;
        
          void * clientp;
        
          int benchRet = sockopt_callback(clientp,curlfd,purpose);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int curlfd = 10;
        
          int purpose = 10;
        
          void * clientp;
        
          int benchRet = sockopt_callback(clientp,curlfd,purpose);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          int curlfd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int purpose = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * clientp;
        
          int benchRet = sockopt_callback(clientp,curlfd,purpose);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
