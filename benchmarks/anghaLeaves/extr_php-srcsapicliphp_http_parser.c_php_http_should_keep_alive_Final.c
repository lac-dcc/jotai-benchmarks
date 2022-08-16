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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ http_major; scalar_t__ http_minor; int flags; } ;
typedef  TYPE_1__ php_http_parser ;

/* Variables and functions */
 int F_CONNECTION_CLOSE ; 
 int F_CONNECTION_KEEP_ALIVE ; 

int
php_http_should_keep_alive (php_http_parser *parser)
{
  if (parser->http_major > 0 && parser->http_minor > 0) {
    /* HTTP/1.1 */
    if (parser->flags & F_CONNECTION_CLOSE) {
      return 0;
    } else {
      return 1;
    }
  } else {
    /* HTTP/1.0 or earlier */
    if (parser->flags & F_CONNECTION_KEEP_ALIVE) {
      return 1;
    } else {
      return 0;
    }
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
          int _len_parser0 = 1;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].http_major = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].http_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = php_http_should_keep_alive(parser);
          printf("%d\n", benchRet); 
          free(parser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
