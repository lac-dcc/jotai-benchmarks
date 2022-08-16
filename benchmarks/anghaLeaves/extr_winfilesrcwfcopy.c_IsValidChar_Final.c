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
typedef  int TUCHAR ;
typedef  int BOOL ;

/* Variables and functions */
#define  CHAR_BACKSLASH 139 
#define  CHAR_COLON 138 
#define  CHAR_COMMA 137 
#define  CHAR_DQUOTE 136 
#define  CHAR_GREATER 135 
#define  CHAR_LESS 134 
#define  CHAR_PIPE 133 
#define  CHAR_QUESTION 132 
#define  CHAR_SEMICOLON 131 
#define  CHAR_SLASH 130 
#define  CHAR_SPACE 129 
#define  CHAR_STAR 128 
 int FALSE ; 

BOOL
IsValidChar(TUCHAR ch, BOOL fPath, BOOL bLFN)
{
   switch (ch) {
   case CHAR_SEMICOLON:   // terminator
   case CHAR_COMMA:       // terminator
      return bLFN;

   case CHAR_PIPE:       // pipe
   case CHAR_GREATER:    // redir
   case CHAR_LESS:       // redir
   case CHAR_DQUOTE:     // quote
      return FALSE;

   case CHAR_QUESTION:    // wc           we only do wilds here because they're
   case CHAR_STAR:        // wc           legal for qualifypath
   case CHAR_BACKSLASH:   // path separator
   case CHAR_COLON:       // drive colon
   case CHAR_SLASH:       // path sep
   case CHAR_SPACE:       // space: valid on NT FAT, but winball can't use.
      return fPath;
   }

   //
   // cannot be a control character or space
   //
   return ch > CHAR_SPACE;
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
          int ch = 100;
          int fPath = 100;
          int bLFN = 100;
          int benchRet = IsValidChar(ch,fPath,bLFN);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ch = 255;
          int fPath = 255;
          int bLFN = 255;
          int benchRet = IsValidChar(ch,fPath,bLFN);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ch = 10;
          int fPath = 10;
          int bLFN = 10;
          int benchRet = IsValidChar(ch,fPath,bLFN);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
