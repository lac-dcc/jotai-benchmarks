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

__attribute__((used)) static inline char *http_get_error_msg_text (int *code) {
  /* the most frequent case */
  if (*code == 200) {
    return "OK";
  }
  switch (*code) {
    /* python generated from old array */
    case 201: return "Created";
    case 202: return "Accepted";
    case 204: return "No Content";
    case 206: return "Partial Content";
    case 301: return "Moved Permanently";
    case 302: return "Found";
    case 303: return "See Other";
    case 304: return "Not Modified";
    case 307: return "Temporary Redirect";
    case 400: return "Bad Request";
    case 403: return "Forbidden";
    case 404: return "Not Found";
    case 405: return "Method Not Allowed";
    case 406: return "Not Acceptable";
    case 408: return "Request Timeout";
    case 411: return "Length Required";
    case 413: return "Request Entity Too Large";
    case 414: return "Request-URI Too Long";
    case 418: return "I'm a teapot";
    case 501: return "Not Implemented";
    case 502: return "Bad Gateway";
    case 503: return "Service Unavailable";
    default: *code = 500;
  }
  return "Internal Server Error";
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
          int _len_code0 = 1;
          int * code = (int *) malloc(_len_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = http_get_error_msg_text(code);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(code);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_code0 = 65025;
          int * code = (int *) malloc(_len_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = http_get_error_msg_text(code);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(code);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_code0 = 100;
          int * code = (int *) malloc(_len_code0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = http_get_error_msg_text(code);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
