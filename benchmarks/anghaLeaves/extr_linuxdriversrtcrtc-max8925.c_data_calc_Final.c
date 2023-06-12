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

/* Type definitions */
struct rtc_time {int tm_year; int tm_mon; int tm_mday; unsigned char tm_wday; int tm_hour; int tm_min; int tm_sec; } ;

/* Variables and functions */
 int EINVAL ; 
 size_t RTC_DATE ; 
 size_t RTC_HOUR ; 
 size_t RTC_MIN ; 
 size_t RTC_MONTH ; 
 size_t RTC_SEC ; 
 size_t RTC_WEEKDAY ; 
 size_t RTC_YEAR1 ; 
 size_t RTC_YEAR2 ; 
 int TIME_NUM ; 

__attribute__((used)) static int data_calc(unsigned char *buf, struct rtc_time *tm, int len)
{
	unsigned char high, low;

	if (len < TIME_NUM)
		return -EINVAL;

	high = (tm->tm_year + 1900) / 1000;
	low = (tm->tm_year + 1900) / 100;
	low = low - high * 10;
	buf[RTC_YEAR2] = (high << 4) + low;
	high = (tm->tm_year + 1900) / 10;
	low = tm->tm_year + 1900;
	low = low - high * 10;
	high = high - (high / 10) * 10;
	buf[RTC_YEAR1] = (high << 4) + low;
	high = tm->tm_mon / 10;
	low = tm->tm_mon;
	low = low - high * 10;
	buf[RTC_MONTH] = (high << 4) + low;
	high = tm->tm_mday / 10;
	low = tm->tm_mday;
	low = low - high * 10;
	buf[RTC_DATE] = (high << 4) + low;
	buf[RTC_WEEKDAY] = tm->tm_wday;
	high = tm->tm_hour / 10;
	low = tm->tm_hour;
	low = low - high * 10;
	buf[RTC_HOUR] = (high << 4) + low;
	high = tm->tm_min / 10;
	low = tm->tm_min;
	low = low - high * 10;
	buf[RTC_MIN] = (high << 4) + low;
	high = tm->tm_sec / 10;
	low = tm->tm_sec;
	low = low - high * 10;
	buf[RTC_SEC] = (high << 4) + low;
	return 0;
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
          // static_instructions_O0 : 189
          // dynamic_instructions_O0 : 189
          // ------------------------------- 
          // static_instructions_O1 : 101
          // dynamic_instructions_O1 : 101
          // ------------------------------- 
          // static_instructions_O2 : 100
          // dynamic_instructions_O2 : 100
          // ------------------------------- 
          // static_instructions_O3 : 100
          // dynamic_instructions_O3 : 100
          // ------------------------------- 
          // static_instructions_Ofast : 100
          // dynamic_instructions_Ofast : 100
          // ------------------------------- 
          // static_instructions_Os : 101
          // dynamic_instructions_Os : 101
          // ------------------------------- 
          // static_instructions_Oz : 83
          // dynamic_instructions_Oz : 83
          // ------------------------------- 

          int len = 100;
        
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tm0 = 1;
          struct rtc_time * tm = (struct rtc_time *) malloc(_len_tm0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
              tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = data_calc(buf,tm,len);
          printf("%d\n", benchRet); 
          free(buf);
          free(tm);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 189
          // dynamic_instructions_O0 : 189
          // ------------------------------- 
          // static_instructions_O1 : 101
          // dynamic_instructions_O1 : 101
          // ------------------------------- 
          // static_instructions_O2 : 100
          // dynamic_instructions_O2 : 100
          // ------------------------------- 
          // static_instructions_O3 : 100
          // dynamic_instructions_O3 : 100
          // ------------------------------- 
          // static_instructions_Ofast : 100
          // dynamic_instructions_Ofast : 100
          // ------------------------------- 
          // static_instructions_Os : 101
          // dynamic_instructions_Os : 101
          // ------------------------------- 
          // static_instructions_Oz : 83
          // dynamic_instructions_Oz : 83
          // ------------------------------- 

          int len = 255;
        
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tm0 = 65025;
          struct rtc_time * tm = (struct rtc_time *) malloc(_len_tm0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
              tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = data_calc(buf,tm,len);
          printf("%d\n", benchRet); 
          free(buf);
          free(tm);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 189
          // dynamic_instructions_O0 : 189
          // ------------------------------- 
          // static_instructions_O1 : 101
          // dynamic_instructions_O1 : 101
          // ------------------------------- 
          // static_instructions_O2 : 100
          // dynamic_instructions_O2 : 100
          // ------------------------------- 
          // static_instructions_O3 : 100
          // dynamic_instructions_O3 : 100
          // ------------------------------- 
          // static_instructions_Ofast : 100
          // dynamic_instructions_Ofast : 100
          // ------------------------------- 
          // static_instructions_Os : 101
          // dynamic_instructions_Os : 101
          // ------------------------------- 
          // static_instructions_Oz : 83
          // dynamic_instructions_Oz : 83
          // ------------------------------- 

          int len = 10;
        
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tm0 = 100;
          struct rtc_time * tm = (struct rtc_time *) malloc(_len_tm0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
              tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = data_calc(buf,tm,len);
          printf("%d\n", benchRet); 
          free(buf);
          free(tm);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tm0 = 1;
          struct rtc_time * tm = (struct rtc_time *) malloc(_len_tm0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
              tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
          tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = data_calc(buf,tm,len);
          printf("%d\n", benchRet); 
          free(buf);
          free(tm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
