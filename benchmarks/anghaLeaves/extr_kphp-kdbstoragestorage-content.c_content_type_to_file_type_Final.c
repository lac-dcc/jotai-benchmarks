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
typedef  enum ContentType { ____Placeholder_ContentType } ContentType ;

/* Variables and functions */
 int TL_STORAGE_FILE_GIF ; 
 int TL_STORAGE_FILE_JPEG ; 
 int TL_STORAGE_FILE_MOV ; 
 int TL_STORAGE_FILE_MP3 ; 
 int TL_STORAGE_FILE_MP4 ; 
 int TL_STORAGE_FILE_PARTIAL ; 
 int TL_STORAGE_FILE_PDF ; 
 int TL_STORAGE_FILE_PNG ; 
 int TL_STORAGE_FILE_UNKNOWN ; 
 int TL_STORAGE_FILE_WEBP ; 
#define  ct_gif 138 
#define  ct_jpeg 137 
#define  ct_last 136 
#define  ct_mov 135 
#define  ct_mp3 134 
#define  ct_mp4 133 
#define  ct_partial 132 
#define  ct_pdf 131 
#define  ct_png 130 
#define  ct_unknown 129 
#define  ct_webp 128 

int content_type_to_file_type (enum ContentType content_type) {
  switch (content_type) {
    case ct_unknown: return TL_STORAGE_FILE_UNKNOWN;
    case ct_jpeg: return TL_STORAGE_FILE_JPEG;
    case ct_gif: return TL_STORAGE_FILE_GIF;
    case ct_png: return TL_STORAGE_FILE_PNG;
    case ct_pdf: return TL_STORAGE_FILE_PDF;
    case ct_mp3: return TL_STORAGE_FILE_MP3;
    case ct_mov: return TL_STORAGE_FILE_MOV;
    case ct_partial: return TL_STORAGE_FILE_PARTIAL;
    case ct_mp4: return TL_STORAGE_FILE_MP4;
    case ct_webp: return TL_STORAGE_FILE_WEBP;
    case ct_last: break;
  }
  return 0;
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
          enum ContentType content_type = 0;
          int benchRet = content_type_to_file_type(content_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
