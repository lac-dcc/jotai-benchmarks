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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  downloaded; } ;
struct Curl_easy {TYPE_1__ progress; } ;
typedef  int /*<<< orphan*/  curl_off_t ;

/* Variables and functions */

void Curl_pgrsSetDownloadCounter(struct Curl_easy *data, curl_off_t size)
{
  data->progress.downloaded = size;
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
          int size = 100;
        
          int _len_data0 = 1;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              data[_i0].progress.downloaded = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          Curl_pgrsSetDownloadCounter(data,size);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
        
          int _len_data0 = 65025;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              data[_i0].progress.downloaded = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          Curl_pgrsSetDownloadCounter(data,size);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
        
          int _len_data0 = 100;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              data[_i0].progress.downloaded = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          Curl_pgrsSetDownloadCounter(data,size);
          free(data);
        
        break;
    }
    // empty
    case 3:
    {
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_data0 = 1;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              data[_i0].progress.downloaded = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          Curl_pgrsSetDownloadCounter(data,size);
          free(data);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
