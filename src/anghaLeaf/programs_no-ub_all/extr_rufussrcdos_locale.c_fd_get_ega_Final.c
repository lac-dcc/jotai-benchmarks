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
       0            big-arr\n\
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
typedef  int ULONG ;

/* Variables and functions */

__attribute__((used)) static const char* fd_get_ega(ULONG cp)
{
	switch(cp) {
	case   437: // United States
	case   850: // Latin-1 (Western European)
	case   852: // Latin-2 (Central European)
	case   853: // Latin-3 (Southern European)
	case   857: // Latin-5
	case   858: // Latin-1 with Euro
		return "ega.cpx";
	case   775: // Latin-7 (Baltic Rim)
	case   859: // Latin-9
	case  1116: // Estonian
	case  1117: // Latvian
	case  1118: // Lithuanian
	case  1119: // Cyrillic Russian and Lithuanian (*)
		return "ega2.cpx";
	case   771: // Cyrillic Russian and Lithuanian (KBL)
	case   772: // Cyrillic Russian and Lithuanian
	case   808: // Cyrillic Russian with Euro
	case   855: // Cyrillic South Slavic
	case   866: // Cyrillic Russian
	case   872: // Cyrillic South Slavic with Euro
		return "ega3.cpx";
	case   848: // Cyrillic Ukrainian with Euro
	case   849: // Cyrillic Belarusian with Euro
	case  1125: // Cyrillic Ukrainian
	case  1131: // Cyrillic Belarusian
	case  3012: // Cyrillic Russian and Latvian ("RusLat")
	case 30010: // Cyrillic Gagauz and Moldovan
		return "ega4.cpx";
	case   113: // Yugoslavian Latin
	case   737: // Greek-2
	case   851: // Greek (old codepage)
//	case   852: // Latin-2
//	case   858: // Multilingual Latin-1 with Euro
	case   869: // Greek
		return "ega5.cpx";
	case   899: // Armenian
	case 30008: // Cyrillic Abkhaz and Ossetian
	case 58210: // Cyrillic Russian and Azeri
	case 59829: // Georgian
	case 60258: // Cyrillic Russian and Latin Azeri
	case 60853: // Georgian with capital letters
		return "ega6.cpx";
	case 30011: // Cyrillic Russian Southern District
	case 30013: // Cyrillic Volga District: // Turkic languages
	case 30014: // Cyrillic Volga District: // Finno-ugric languages
	case 30017: // Cyrillic Northwestern District
	case 30018: // Cyrillic Russian and Latin Tatar
	case 30019: // Cyrillic Russian and Latin Chechen
		return "ega7.cpx";
	case   770: // Baltic
	case   773: // Latin-7 (old standard)
	case   774: // Lithuanian
//	case   775: // Latin-7
	case   777: // Accented Lithuanian (old)
	case   778: // Accented Lithuanian
		return "ega8.cpx";
//	case   858: // Latin-1 with Euro
	case   860: // Portuguese
	case   861: // Icelandic
	case   863: // Canadian French
	case   865: // Nordic
	case   867: // Czech Kamenicky
		return "ega9.cpx";
	case   667: // Polish
	case   668: // Polish (polish letters on cp852 codepoints)
	case   790: // Polish Mazovia
//	case   852: // Latin-2
	case   991: // Polish Mazovia with Zloty sign
	case  3845: // Hungarian
		return "ega10.cpx";
//	case   858: // Latin-1 with Euro
	case 30000: // Saami
	case 30001: // Celtic
	case 30004: // Greenlandic
	case 30007: // Latin
	case 30009: // Romani
		return "ega11.cpx";
//	case   852: // Latin-2
//	case   858: // Latin-1 with Euro
	case 30003: // Latin American
	case 30029: // Mexican
	case 30030: // Mexican II
	case 58335: // Kashubian
		return "ega12";
//	case   852: // Latin-2
	case   895: // Czech Kamenicky
	case 30002: // Cyrillic Tajik
	case 58152: // Cyrillic Kazakh with Euro
	case 59234: // Cyrillic Tatar
	case 62306: // Cyrillic Uzbek
		return "ega13.cpx";
	case 30006: // Vietnamese
	case 30012: // Cyrillic Russian Siberian and Far Eastern Districts
	case 30015: // Cyrillic Khanty
	case 30016: // Cyrillic Mansi
	case 30020: // Low saxon and frisian
	case 30021: // Oceania
		return "ega14.cpx";
	case 30023: // Southern Africa
	case 30024: // Northern and Eastern Africa
	case 30025: // Western Africa
	case 30026: // Central Africa
	case 30027: // Beninese
	case 30028: // Nigerian II
		return "ega15.cpx";
//	case   858: // Latin-1 with Euro
	case  3021: // Cyrillic MIK Bulgarian
	case 30005: // Nigerian
	case 30022: // Canadian First Nations
	case 30031: // Latin-4 (Northern European)
	case 30032: // Latin-6
		return "ega16.cpx";
	case   862: // Hebrew
	case   864: // Arabic
	case 30034: // Cherokee
	case 30033: // Crimean Tatar with Hryvnia
	case 30039: // Cyrillic Ukrainian with Hryvnia
	case 30040: // Cyrillic Russian with Hryvnia
		return "ega17.cpx";
	case   856: // Hebrew II
	case  3846: // Turkish
	case  3848: // Brazilian ABICOMP
		return "ega18.cpx";
	default:
		return NULL;
	}
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

    // big-arr
    case 0:
    {
          int cp = 255;
          const char * benchRet = fd_get_ega(cp);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
