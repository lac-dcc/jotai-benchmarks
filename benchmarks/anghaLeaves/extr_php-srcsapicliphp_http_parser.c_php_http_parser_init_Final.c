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
struct TYPE_3__ {int type; scalar_t__ method; scalar_t__ flags; scalar_t__ upgrade; scalar_t__ nread; int /*<<< orphan*/  state; } ;
typedef  TYPE_1__ php_http_parser ;
typedef  enum php_http_parser_type { ____Placeholder_php_http_parser_type } php_http_parser_type ;

/* Variables and functions */
 int PHP_HTTP_REQUEST ; 
 int PHP_HTTP_RESPONSE ; 
 int /*<<< orphan*/  s_start_req ; 
 int /*<<< orphan*/  s_start_req_or_res ; 
 int /*<<< orphan*/  s_start_res ; 

void
php_http_parser_init (php_http_parser *parser, enum php_http_parser_type t)
{
  parser->type = t;
  parser->state = (t == PHP_HTTP_REQUEST ? s_start_req : (t == PHP_HTTP_RESPONSE ? s_start_res : s_start_req_or_res));
  parser->nread = 0;
  parser->upgrade = 0;
  parser->flags = 0;
  parser->method = 0;
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
          enum php_http_parser_type t = 0;
          int _len_parser0 = 1;
          struct TYPE_3__ * parser = (struct TYPE_3__ *) malloc(_len_parser0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].method = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].upgrade = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].nread = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          php_http_parser_init(parser,t);
          free(parser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
