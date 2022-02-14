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
       0            big-arr\n\
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
 int NOTIFY_ALL ; 
 int NOTIFY_EVICTED ; 
 int NOTIFY_EXPIRED ; 
 int NOTIFY_GENERIC ; 
 int NOTIFY_HASH ; 
 int NOTIFY_KEYEVENT ; 
 int NOTIFY_KEYSPACE ; 
 int NOTIFY_KEY_MISS ; 
 int NOTIFY_LIST ; 
 int NOTIFY_SET ; 
 int NOTIFY_STREAM ; 
 int NOTIFY_STRING ; 
 int NOTIFY_ZSET ; 

int keyspaceEventsStringToFlags(char *classes) {
    char *p = classes;
    int c, flags = 0;

    while((c = *p++) != '\0') {
        switch(c) {
        case 'A': flags |= NOTIFY_ALL; break;
        case 'g': flags |= NOTIFY_GENERIC; break;
        case '$': flags |= NOTIFY_STRING; break;
        case 'l': flags |= NOTIFY_LIST; break;
        case 's': flags |= NOTIFY_SET; break;
        case 'h': flags |= NOTIFY_HASH; break;
        case 'z': flags |= NOTIFY_ZSET; break;
        case 'x': flags |= NOTIFY_EXPIRED; break;
        case 'e': flags |= NOTIFY_EVICTED; break;
        case 'K': flags |= NOTIFY_KEYSPACE; break;
        case 'E': flags |= NOTIFY_KEYEVENT; break;
        case 't': flags |= NOTIFY_STREAM; break;
        case 'm': flags |= NOTIFY_KEY_MISS; break;
        default: return -1;
        }
    }
    return flags;
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

    // big-arr
    case 0:
    {
          int _len_classes0 = 65025;
          char * classes = (char *) malloc(_len_classes0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_classes0; _i0++) {
            classes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = keyspaceEventsStringToFlags(classes);
          printf("%d\n", benchRet); 
          free(classes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
