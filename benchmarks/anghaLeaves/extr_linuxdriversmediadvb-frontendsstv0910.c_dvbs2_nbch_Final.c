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
typedef  int const u32 ;
typedef  enum dvbs2_mod_cod { ____Placeholder_dvbs2_mod_cod } dvbs2_mod_cod ;
typedef  enum dvbs2_fectype { ____Placeholder_dvbs2_fectype } dvbs2_fectype ;

/* Variables and functions */
 int DVBS2_16K ; 
 int DVBS2_32APSK_9_10 ; 
 int DVBS2_QPSK_1_4 ; 

__attribute__((used)) static u32 dvbs2_nbch(enum dvbs2_mod_cod mod_cod, enum dvbs2_fectype fectype)
{
	static const u32 nbch[][2] = {
		{    0,     0}, /* DUMMY_PLF   */
		{16200,  3240}, /* QPSK_1_4,   */
		{21600,  5400}, /* QPSK_1_3,   */
		{25920,  6480}, /* QPSK_2_5,   */
		{32400,  7200}, /* QPSK_1_2,   */
		{38880,  9720}, /* QPSK_3_5,   */
		{43200, 10800}, /* QPSK_2_3,   */
		{48600, 11880}, /* QPSK_3_4,   */
		{51840, 12600}, /* QPSK_4_5,   */
		{54000, 13320}, /* QPSK_5_6,   */
		{57600, 14400}, /* QPSK_8_9,   */
		{58320, 16000}, /* QPSK_9_10,  */
		{43200,  9720}, /* 8PSK_3_5,   */
		{48600, 10800}, /* 8PSK_2_3,   */
		{51840, 11880}, /* 8PSK_3_4,   */
		{54000, 13320}, /* 8PSK_5_6,   */
		{57600, 14400}, /* 8PSK_8_9,   */
		{58320, 16000}, /* 8PSK_9_10,  */
		{43200, 10800}, /* 16APSK_2_3, */
		{48600, 11880}, /* 16APSK_3_4, */
		{51840, 12600}, /* 16APSK_4_5, */
		{54000, 13320}, /* 16APSK_5_6, */
		{57600, 14400}, /* 16APSK_8_9, */
		{58320, 16000}, /* 16APSK_9_10 */
		{48600, 11880}, /* 32APSK_3_4, */
		{51840, 12600}, /* 32APSK_4_5, */
		{54000, 13320}, /* 32APSK_5_6, */
		{57600, 14400}, /* 32APSK_8_9, */
		{58320, 16000}, /* 32APSK_9_10 */
	};

	if (mod_cod >= DVBS2_QPSK_1_4 &&
	    mod_cod <= DVBS2_32APSK_9_10 && fectype <= DVBS2_16K)
		return nbch[mod_cod][fectype];
	return 64800;
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
          enum dvbs2_mod_cod mod_cod = 0;
          enum dvbs2_fectype fectype = 0;
          const int benchRet = dvbs2_nbch(mod_cod,fectype);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
