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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int Cursor; } ;
struct TYPE_5__ {TYPE_1__ State; } ;
typedef  TYPE_2__ SFG_Window ;

/* Variables and functions */

void fgSetCursor ( SFG_Window *window, int cursorID )
{
#if TARGET_HOST_POSIX_X11
    {
        Cursor cursor;
        /*
         * XXX FULL_CROSSHAIR demotes to plain CROSSHAIR. Old GLUT allows
         * for this, but if there is a system that easily supports a full-
         * window (or full-screen) crosshair, we might consider it.
         */
        int cursorIDToUse =
            ( cursorID == GLUT_CURSOR_FULL_CROSSHAIR ) ? GLUT_CURSOR_CROSSHAIR : cursorID;

        if( ( cursorIDToUse >= 0 ) &&
            ( cursorIDToUse < sizeof( cursorCache ) / sizeof( cursorCache[0] ) ) ) {
            cursorCacheEntry *entry = &cursorCache[ cursorIDToUse ];
            if( entry->cachedCursor == None ) {
                entry->cachedCursor =
                    XCreateFontCursor( fgDisplay.Display, entry->cursorShape );
            }
            cursor = entry->cachedCursor;
        } else {
            switch( cursorIDToUse )
            {
            case GLUT_CURSOR_NONE:
                cursor = getEmptyCursor( );
                break;

            case GLUT_CURSOR_INHERIT:
                cursor = None;
                break;

            default:
                fgError( "Unknown cursor type: %d", cursorIDToUse );
                return;
            }
        }

        if ( cursorIDToUse == GLUT_CURSOR_INHERIT ) {
            XUndefineCursor( fgDisplay.Display, window->Window.Handle );
        } else if ( cursor != None ) {
            XDefineCursor( fgDisplay.Display, window->Window.Handle, cursor );
        } else if ( cursorIDToUse != GLUT_CURSOR_NONE ) {
            fgError( "Failed to create cursor" );
        }
    }

#elif TARGET_HOST_MS_WINDOWS

    /*
     * Joe Krahn is re-writing the following code.
     */
    /* Set the cursor AND change it for this window class. */
#if !defined(__MINGW64__) && _MSC_VER <= 1200
#       define MAP_CURSOR(a,b)                                   \
        case a:                                                  \
            SetCursor( LoadCursor( NULL, b ) );                  \
            SetClassLong( window->Window.Handle,                 \
                          GCL_HCURSOR,                           \
                          ( LONG )LoadCursor( NULL, b ) );       \
        break;
    /* Nuke the cursor AND change it for this window class. */
#       define ZAP_CURSOR(a,b)                                   \
        case a:                                                  \
            SetCursor( NULL );                                   \
            SetClassLong( window->Window.Handle,                 \
                          GCL_HCURSOR, ( LONG )NULL );           \
        break;
#else
#       define MAP_CURSOR(a,b)                                   \
        case a:                                                  \
            SetCursor( LoadCursor( NULL, b ) );                  \
            SetClassLongPtr( window->Window.Handle,              \
                          GCLP_HCURSOR,                          \
                          ( LONG )( LONG_PTR )LoadCursor( NULL, b ) );       \
        break;
    /* Nuke the cursor AND change it for this window class. */
#       define ZAP_CURSOR(a,b)                                   \
        case a:                                                  \
            SetCursor( NULL );                                   \
            SetClassLongPtr( window->Window.Handle,              \
                          GCLP_HCURSOR, ( LONG )( LONG_PTR )NULL );          \
        break;
#endif

    switch( cursorID )
    {
        MAP_CURSOR( GLUT_CURSOR_RIGHT_ARROW,         IDC_ARROW     );
        MAP_CURSOR( GLUT_CURSOR_LEFT_ARROW,          IDC_ARROW     );
        MAP_CURSOR( GLUT_CURSOR_INFO,                IDC_HELP      );
        MAP_CURSOR( GLUT_CURSOR_DESTROY,             IDC_CROSS     );
        MAP_CURSOR( GLUT_CURSOR_HELP,                IDC_HELP      );
        MAP_CURSOR( GLUT_CURSOR_CYCLE,               IDC_SIZEALL   );
        MAP_CURSOR( GLUT_CURSOR_SPRAY,               IDC_CROSS     );
        MAP_CURSOR( GLUT_CURSOR_WAIT,                IDC_WAIT      );
        MAP_CURSOR( GLUT_CURSOR_TEXT,                IDC_IBEAM     );
        MAP_CURSOR( GLUT_CURSOR_CROSSHAIR,           IDC_CROSS     );
        MAP_CURSOR( GLUT_CURSOR_UP_DOWN,             IDC_SIZENS    );
        MAP_CURSOR( GLUT_CURSOR_LEFT_RIGHT,          IDC_SIZEWE    );
        MAP_CURSOR( GLUT_CURSOR_TOP_SIDE,            IDC_ARROW     ); /* XXX ToDo */
        MAP_CURSOR( GLUT_CURSOR_BOTTOM_SIDE,         IDC_ARROW     ); /* XXX ToDo */
        MAP_CURSOR( GLUT_CURSOR_LEFT_SIDE,           IDC_ARROW     ); /* XXX ToDo */
        MAP_CURSOR( GLUT_CURSOR_RIGHT_SIDE,          IDC_ARROW     ); /* XXX ToDo */
        MAP_CURSOR( GLUT_CURSOR_TOP_LEFT_CORNER,     IDC_SIZENWSE  );
        MAP_CURSOR( GLUT_CURSOR_TOP_RIGHT_CORNER,    IDC_SIZENESW  );
        MAP_CURSOR( GLUT_CURSOR_BOTTOM_RIGHT_CORNER, IDC_SIZENWSE  );
        MAP_CURSOR( GLUT_CURSOR_BOTTOM_LEFT_CORNER,  IDC_SIZENESW  );
        MAP_CURSOR( GLUT_CURSOR_INHERIT,             IDC_ARROW     ); /* XXX ToDo */
        ZAP_CURSOR( GLUT_CURSOR_NONE,                NULL          );
        MAP_CURSOR( GLUT_CURSOR_FULL_CROSSHAIR,      IDC_CROSS     ); /* XXX ToDo */

    default:
        fgError( "Unknown cursor type: %d", cursorID );
        break;
    }
#endif

    window->State.Cursor = cursorID;
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
          int cursorID = 100;
          int _len_window0 = 1;
          struct TYPE_5__ * window = (struct TYPE_5__ *) malloc(_len_window0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0].State.Cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fgSetCursor(window,cursorID);
          free(window);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int cursorID = 10;
          int _len_window0 = 100;
          struct TYPE_5__ * window = (struct TYPE_5__ *) malloc(_len_window0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0].State.Cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fgSetCursor(window,cursorID);
          free(window);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
