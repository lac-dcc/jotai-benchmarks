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
struct TYPE_3__ {scalar_t__* timeserver; scalar_t__* proxy_user; scalar_t__* http_proxy; } ;
typedef  TYPE_1__ conf_t ;

/* Variables and functions */
 int MAX_STRING1 ; 

int conf_init(conf_t *conf)
{
  int i;

  *conf->http_proxy       = 0;
  for(i = 0; i<MAX_STRING1; i++)
    conf->proxy_user[i]     = 0;    /* Clean up password from memory */
  *conf->timeserver       = 0;
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
          int _len_conf0 = 1;
          struct TYPE_3__ * conf = (struct TYPE_3__ *) malloc(_len_conf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
              int _len_conf__i0__timeserver0 = 1;
          conf[_i0].timeserver = (long *) malloc(_len_conf__i0__timeserver0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_conf__i0__timeserver0; _j0++) {
            conf[_i0].timeserver[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf__i0__proxy_user0 = 1;
          conf[_i0].proxy_user = (long *) malloc(_len_conf__i0__proxy_user0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_conf__i0__proxy_user0; _j0++) {
            conf[_i0].proxy_user[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf__i0__http_proxy0 = 1;
          conf[_i0].http_proxy = (long *) malloc(_len_conf__i0__http_proxy0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_conf__i0__http_proxy0; _j0++) {
            conf[_i0].http_proxy[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = conf_init(conf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].timeserver);
          }
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].proxy_user);
          }
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].http_proxy);
          }
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
