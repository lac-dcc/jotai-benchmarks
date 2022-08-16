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
typedef  int /*<<< orphan*/  SSL ;

/* Variables and functions */
 unsigned int COOKIE_LEN ; 

__attribute__((used)) static int cookie_gen(SSL *ssl, unsigned char *cookie, unsigned int *cookie_len)
{
    unsigned int i;

    for (i = 0; i < COOKIE_LEN; i++, cookie++)
        *cookie = i;
    *cookie_len = COOKIE_LEN;

    return 1;
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
          int _len_ssl0 = 1;
          int * ssl = (int *) malloc(_len_ssl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ssl0; _i0++) {
            ssl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cookie0 = 1;
          unsigned char * cookie = (unsigned char *) malloc(_len_cookie0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_cookie0; _i0++) {
            cookie[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cookie_len0 = 1;
          unsigned int * cookie_len = (unsigned int *) malloc(_len_cookie_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cookie_len0; _i0++) {
            cookie_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cookie_gen(ssl,cookie,cookie_len);
          printf("%d\n", benchRet); 
          free(ssl);
          free(cookie);
          free(cookie_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
