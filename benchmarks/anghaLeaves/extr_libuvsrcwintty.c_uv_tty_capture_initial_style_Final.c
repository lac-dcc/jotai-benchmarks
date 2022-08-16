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
       1            big-arr-10x\n\
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
struct TYPE_3__ {int wAttributes; } ;
typedef  TYPE_1__ CONSOLE_SCREEN_BUFFER_INFO ;

/* Variables and functions */
 int BACKGROUND_BLUE ; 
 int BACKGROUND_GREEN ; 
 int BACKGROUND_INTENSITY ; 
 int BACKGROUND_RED ; 
 int COMMON_LVB_REVERSE_VIDEO ; 
 int FOREGROUND_BLUE ; 
 int FOREGROUND_GREEN ; 
 int FOREGROUND_INTENSITY ; 
 int FOREGROUND_RED ; 
 int uv_tty_default_bg_bright ; 
 int uv_tty_default_bg_color ; 
 int uv_tty_default_fg_bright ; 
 int uv_tty_default_fg_color ; 
 int uv_tty_default_inverse ; 
 int uv_tty_default_text_attributes ; 

__attribute__((used)) static void uv_tty_capture_initial_style(CONSOLE_SCREEN_BUFFER_INFO* info) {
  static int style_captured = 0;

  /* Only do this once.
     Assumption: Caller has acquired uv_tty_output_lock. */
  if (style_captured)
    return;

  /* Save raw win32 attributes. */
  uv_tty_default_text_attributes = info->wAttributes;

  /* Convert black text on black background to use white text. */
  if (uv_tty_default_text_attributes == 0)
    uv_tty_default_text_attributes = 7;

  /* Convert Win32 attributes to ANSI colors. */
  uv_tty_default_fg_color = 0;
  uv_tty_default_bg_color = 0;
  uv_tty_default_fg_bright = 0;
  uv_tty_default_bg_bright = 0;
  uv_tty_default_inverse = 0;

  if (uv_tty_default_text_attributes & FOREGROUND_RED)
    uv_tty_default_fg_color |= 1;

  if (uv_tty_default_text_attributes & FOREGROUND_GREEN)
    uv_tty_default_fg_color |= 2;

  if (uv_tty_default_text_attributes & FOREGROUND_BLUE)
    uv_tty_default_fg_color |= 4;

  if (uv_tty_default_text_attributes & BACKGROUND_RED)
    uv_tty_default_bg_color |= 1;

  if (uv_tty_default_text_attributes & BACKGROUND_GREEN)
    uv_tty_default_bg_color |= 2;

  if (uv_tty_default_text_attributes & BACKGROUND_BLUE)
    uv_tty_default_bg_color |= 4;

  if (uv_tty_default_text_attributes & FOREGROUND_INTENSITY)
    uv_tty_default_fg_bright = 1;

  if (uv_tty_default_text_attributes & BACKGROUND_INTENSITY)
    uv_tty_default_bg_bright = 1;

  if (uv_tty_default_text_attributes & COMMON_LVB_REVERSE_VIDEO)
    uv_tty_default_inverse = 1;

  style_captured = 1;
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
          int _len_info0 = 1;
          struct TYPE_3__ * info = (struct TYPE_3__ *) malloc(_len_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].wAttributes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uv_tty_capture_initial_style(info);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_info0 = 100;
          struct TYPE_3__ * info = (struct TYPE_3__ *) malloc(_len_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].wAttributes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uv_tty_capture_initial_style(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
