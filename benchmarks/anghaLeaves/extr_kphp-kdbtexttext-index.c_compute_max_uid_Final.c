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
struct message_short {int dummy; } ;
typedef  int /*<<< orphan*/  message_t ;

/* Variables and functions */
 double* UserMsgBytes ; 
 int* UserMsgCnt ; 
 int* UserMsgDel ; 
 int* UserMsgExtras ; 
 double* UserSearchWords ; 
 int extra_ints_num ; 
 int max_uid ; 
 int msgs_bytes ; 
 scalar_t__ total_packed_bytes ; 

int compute_max_uid (int min_uid, double threshold) {
  double sum = 0, max_sw = 0, ratio = msgs_bytes ?  (double) total_packed_bytes / msgs_bytes : 1;
  int i;
  for (i = min_uid; i <= max_uid && sum + max_sw <= threshold; i++) {
    if (max_sw < UserSearchWords[i] * 16.0) {
      max_sw = UserSearchWords[i] * 16.0;
    }
    sum += UserMsgCnt[i] * (sizeof (message_t) + 4 * extra_ints_num + 2.2) + 
      UserMsgBytes[i] * ratio + UserMsgDel[i] * sizeof (struct message_short) +
      UserMsgExtras[i] * 4;
  }
  return i;
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
          int min_uid = 100;
          double threshold = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int benchRet = compute_max_uid(min_uid,threshold);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int min_uid = 255;
          double threshold = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int benchRet = compute_max_uid(min_uid,threshold);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int min_uid = 10;
          double threshold = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int benchRet = compute_max_uid(min_uid,threshold);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
