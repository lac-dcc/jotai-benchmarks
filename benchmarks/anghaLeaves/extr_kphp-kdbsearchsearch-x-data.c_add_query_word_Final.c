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
typedef  scalar_t__ hash_t ;
struct TYPE_2__ {int sp; } ;

/* Variables and functions */
 TYPE_1__* IHE ; 
 int MAX_WORDS ; 
 char* QT ; 
 scalar_t__* QW ; 
 int Q_words ; 

__attribute__((used)) static int add_query_word (hash_t word, char tag) {
  int i;
  for (i = 0; i < Q_words; i++) {
    if (QW[i] == word) {
      return i;
    }
  }
  if (i == MAX_WORDS) {
    return -1;
  }
  QW[i] = word;
  QT[i] = tag;
  IHE[i].sp = -2;
  return Q_words++;
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
          long word = 100;
        
          char tag = 100;
        
          int benchRet = add_query_word(word,tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long word = 255;
        
          char tag = 255;
        
          int benchRet = add_query_word(word,tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long word = 10;
        
          char tag = 10;
        
          int benchRet = add_query_word(word,tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          long word = ((-2 * (next_i()%2)) + 1) * next_i();
        
          char tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = add_query_word(word,tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
