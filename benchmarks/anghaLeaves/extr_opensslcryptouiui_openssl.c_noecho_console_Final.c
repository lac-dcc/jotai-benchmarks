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

/* Type definitions */
typedef  int /*<<< orphan*/  UI ;

/* Variables and functions */

__attribute__((used)) static int noecho_console(UI *ui)
{
# ifdef TTY_FLAGS
    memcpy(&(tty_new), &(tty_orig), sizeof(tty_orig));
    tty_new.TTY_FLAGS &= ~ECHO;
# endif

# if defined(TTY_set) && !defined(OPENSSL_SYS_VMS)
    if (is_a_tty && (TTY_set(fileno(tty_in), &tty_new) == -1))
        return 0;
# endif
# ifdef OPENSSL_SYS_VMS
    if (is_a_tty) {
        tty_new[0] = tty_orig[0];
        tty_new[1] = tty_orig[1] | TT$M_NOECHO;
        tty_new[2] = tty_orig[2];
        status = sys$qiow(0, channel, IO$_SETMODE, &iosb, 0, 0, tty_new, 12,
                          0, 0, 0, 0);
        if ((status != SS$_NORMAL) || (iosb.iosb$w_value != SS$_NORMAL)) {
            char tmp_num[2][12];

            BIO_snprintf(tmp_num[0], sizeof(tmp_num[0]) - 1, "%%X%08X",
                         status);
            BIO_snprintf(tmp_num[1], sizeof(tmp_num[1]) - 1, "%%X%08X",
                         iosb.iosb$w_value);
            UIerr(UI_F_NOECHO_CONSOLE, UI_R_SYSQIOW_ERROR);
            ERR_add_error_data(5, "status=", tmp_num[0],
                               ",", "iosb.iosb$w_value=", tmp_num[1]);
            return 0;
        }
    }
# endif
# if defined(_WIN32) && !defined(_WIN32_WCE)
    if (is_a_tty) {
        tty_new = tty_orig;
        tty_new &= ~ENABLE_ECHO_INPUT;
        SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), tty_new);
    }
# endif
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
          int _len_ui0 = 1;
          int * ui = (int *) malloc(_len_ui0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ui0; _i0++) {
            ui[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = noecho_console(ui);
          printf("%d\n", benchRet); 
          free(ui);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ui0 = 100;
          int * ui = (int *) malloc(_len_ui0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ui0; _i0++) {
            ui[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = noecho_console(ui);
          printf("%d\n", benchRet); 
          free(ui);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
