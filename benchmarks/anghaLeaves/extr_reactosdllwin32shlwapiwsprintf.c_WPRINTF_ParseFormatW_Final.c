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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_3__ {int flags; int width; int precision; void* type; } ;
typedef  TYPE_1__ WPRINTF_FORMAT ;
typedef  char* LPCWSTR ;
typedef  scalar_t__ INT ;

/* Variables and functions */
 int WPRINTF_I64 ; 
 int WPRINTF_INTPTR ; 
 int WPRINTF_LEFTALIGN ; 
 int WPRINTF_LONG ; 
 int WPRINTF_PREFIX_HEX ; 
 int WPRINTF_SHORT ; 
 int WPRINTF_UPPER_HEX ; 
 int WPRINTF_WIDE ; 
 int WPRINTF_ZEROPAD ; 
 void* WPR_CHAR ; 
 void* WPR_HEXA ; 
 void* WPR_SIGNED ; 
 void* WPR_STRING ; 
 void* WPR_UNKNOWN ; 
 void* WPR_UNSIGNED ; 
 void* WPR_WCHAR ; 
 void* WPR_WSTRING ; 

__attribute__((used)) static INT WPRINTF_ParseFormatW( LPCWSTR format, WPRINTF_FORMAT *res )
{
    LPCWSTR p = format;

    res->flags = 0;
    res->width = 0;
    res->precision = 0;
    if (*p == '-') { res->flags |= WPRINTF_LEFTALIGN; p++; }
    if (*p == '#') { res->flags |= WPRINTF_PREFIX_HEX; p++; }
    if (*p == '0') { res->flags |= WPRINTF_ZEROPAD; p++; }
    while ((*p >= '0') && (*p <= '9'))  /* width field */
    {
        res->width = res->width * 10 + *p - '0';
        p++;
    }
    if (*p == '.')  /* precision field */
    {
        p++;
        while ((*p >= '0') && (*p <= '9'))
        {
            res->precision = res->precision * 10 + *p - '0';
            p++;
        }
    }
    if (*p == 'l') { res->flags |= WPRINTF_LONG; p++; }
    else if (*p == 'h') { res->flags |= WPRINTF_SHORT; p++; }
    else if (*p == 'w') { res->flags |= WPRINTF_WIDE; p++; }
    else if (*p == 'I')
    {
        if (p[1] == '6' && p[2] == '4') { res->flags |= WPRINTF_I64; p += 3; }
        else if (p[1] == '3' && p[2] == '2') p += 3;
        else { res->flags |= WPRINTF_INTPTR; p++; }
    }
    switch(*p)
    {
    case 'c':
        res->type = (res->flags & WPRINTF_SHORT) ? WPR_CHAR : WPR_WCHAR;
        break;
    case 'C':
        res->type = (res->flags & WPRINTF_LONG) ? WPR_WCHAR : WPR_CHAR;
        break;
    case 'd':
    case 'i':
        res->type = WPR_SIGNED;
        break;
    case 's':
        res->type = ((res->flags & WPRINTF_SHORT) && !(res->flags & WPRINTF_WIDE)) ? WPR_STRING : WPR_WSTRING;
        break;
    case 'S':
        res->type = (res->flags & (WPRINTF_LONG|WPRINTF_WIDE)) ? WPR_WSTRING : WPR_STRING;
        break;
    case 'u':
        res->type = WPR_UNSIGNED;
        break;
    case 'p':
        res->width = 2 * sizeof(void *);
        res->flags |= WPRINTF_ZEROPAD | WPRINTF_INTPTR;
        /* fall through */
    case 'X':
        res->flags |= WPRINTF_UPPER_HEX;
        /* fall through */
    case 'x':
        res->type = WPR_HEXA;
        break;
    default:
        res->type = WPR_UNKNOWN;
        p--;  /* print format as normal char */
        break;
    }
    return (INT)(p - format) + 1;
}

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
          // static_instructions_O0 : 77
          // dynamic_instructions_O0 : 77
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 52
          // dynamic_instructions_Oz : 52
          // ------------------------------- 

          int _len_format0 = 65025;
          char * format = (char *) malloc(_len_format0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_res0 = 65025;
          struct TYPE_3__ * res = (struct TYPE_3__ *) malloc(_len_res0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].precision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = WPRINTF_ParseFormatW(format,res);
          printf("%ld\n", benchRet); 
          free(format);
          free(res);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 77
          // dynamic_instructions_O0 : 77
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 52
          // dynamic_instructions_Oz : 52
          // ------------------------------- 

          int _len_format0 = 100;
          char * format = (char *) malloc(_len_format0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_res0 = 100;
          struct TYPE_3__ * res = (struct TYPE_3__ *) malloc(_len_res0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].precision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = WPRINTF_ParseFormatW(format,res);
          printf("%ld\n", benchRet); 
          free(format);
          free(res);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 77
          // dynamic_instructions_O0 : 77
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 52
          // dynamic_instructions_Oz : 52
          // ------------------------------- 

          int _len_format0 = 1;
          char * format = (char *) malloc(_len_format0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_res0 = 1;
          struct TYPE_3__ * res = (struct TYPE_3__ *) malloc(_len_res0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].precision = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = WPRINTF_ParseFormatW(format,res);
          printf("%ld\n", benchRet); 
          free(format);
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
