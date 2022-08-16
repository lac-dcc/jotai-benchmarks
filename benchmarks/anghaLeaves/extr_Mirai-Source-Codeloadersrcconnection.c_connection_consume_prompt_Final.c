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
struct connection {int rdbuf_pos; char* rdbuf; } ;

/* Variables and functions */

int connection_consume_prompt(struct connection *conn)
{
    char *pch;
    int i, prompt_ending = -1;

    for (i = conn->rdbuf_pos; i >= 0; i--)
    {
        if (conn->rdbuf[i] == ':' || conn->rdbuf[i] == '>' || conn->rdbuf[i] == '$' || conn->rdbuf[i] == '#' || conn->rdbuf[i] == '%')
        {
#ifdef DEBUG
            printf("matched any prompt at %d, \"%c\", \"%s\"\n", i, conn->rdbuf[i], conn->rdbuf);
#endif
            prompt_ending = i;
            break;
        }
    }

    if (prompt_ending == -1)
        return 0;
    else
        return prompt_ending;
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
          int _len_conn0 = 1;
          struct connection * conn = (struct connection *) malloc(_len_conn0*sizeof(struct connection));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0].rdbuf_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conn__i0__rdbuf0 = 1;
          conn[_i0].rdbuf = (char *) malloc(_len_conn__i0__rdbuf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_conn__i0__rdbuf0; _j0++) {
            conn[_i0].rdbuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = connection_consume_prompt(conn);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].rdbuf);
          }
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
