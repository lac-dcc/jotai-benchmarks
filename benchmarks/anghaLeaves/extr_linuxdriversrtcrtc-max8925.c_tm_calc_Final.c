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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct rtc_time {unsigned char tm_year; unsigned char tm_mon; unsigned char tm_mday; unsigned char tm_wday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned char HOUR_12 ; 
 unsigned char HOUR_AM_PM ; 
 size_t RTC_DATE ; 
 size_t RTC_HOUR ; 
 size_t RTC_MIN ; 
 size_t RTC_MONTH ; 
 size_t RTC_SEC ; 
 size_t RTC_WEEKDAY ; 
 size_t RTC_YEAR1 ; 
 size_t RTC_YEAR2 ; 
 int TIME_NUM ; 

__attribute__((used)) static int tm_calc(struct rtc_time *tm, unsigned char *buf, int len)
{
	if (len < TIME_NUM)
		return -EINVAL;
	tm->tm_year = (buf[RTC_YEAR2] >> 4) * 1000
			+ (buf[RTC_YEAR2] & 0xf) * 100
			+ (buf[RTC_YEAR1] >> 4) * 10
			+ (buf[RTC_YEAR1] & 0xf);
	tm->tm_year -= 1900;
	tm->tm_mon = ((buf[RTC_MONTH] >> 4) & 0x01) * 10
			+ (buf[RTC_MONTH] & 0x0f);
	tm->tm_mday = ((buf[RTC_DATE] >> 4) & 0x03) * 10
			+ (buf[RTC_DATE] & 0x0f);
	tm->tm_wday = buf[RTC_WEEKDAY] & 0x07;
	if (buf[RTC_HOUR] & HOUR_12) {
		tm->tm_hour = ((buf[RTC_HOUR] >> 4) & 0x1) * 10
				+ (buf[RTC_HOUR] & 0x0f);
		if (buf[RTC_HOUR] & HOUR_AM_PM)
			tm->tm_hour += 12;
	} else
		tm->tm_hour = ((buf[RTC_HOUR] >> 4) & 0x03) * 10
				+ (buf[RTC_HOUR] & 0x0f);
	tm->tm_min = ((buf[RTC_MIN] >> 4) & 0x7) * 10
			+ (buf[RTC_MIN] & 0x0f);
	tm->tm_sec = ((buf[RTC_SEC] >> 4) & 0x7) * 10
			+ (buf[RTC_SEC] & 0x0f);
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
          int len = 100;
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
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tm_calc(tm,buf,len);
          printf("%d\n", benchRet); 
          free(tm);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
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
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tm_calc(tm,buf,len);
          printf("%d\n", benchRet); 
          free(tm);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
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
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tm_calc(tm,buf,len);
          printf("%d\n", benchRet); 
          free(tm);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
