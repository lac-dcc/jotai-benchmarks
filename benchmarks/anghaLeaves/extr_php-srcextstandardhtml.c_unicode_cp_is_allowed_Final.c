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

/* Variables and functions */
#define  ENT_HTML_DOC_HTML401 131 
#define  ENT_HTML_DOC_HTML5 130 
#define  ENT_HTML_DOC_XHTML 129 
#define  ENT_HTML_DOC_XML1 128 

__attribute__((used)) static inline int unicode_cp_is_allowed(unsigned uni_cp, int document_type)
{
	/* XML 1.0				HTML 4.01			HTML 5
	 * 0x09..0x0A			0x09..0x0A			0x09..0x0A
	 * 0x0D					0x0D				0x0C..0x0D
	 * 0x0020..0xD7FF		0x20..0x7E			0x20..0x7E
	 *						0x00A0..0xD7FF		0x00A0..0xD7FF
	 * 0xE000..0xFFFD		0xE000..0x10FFFF	0xE000..0xFDCF
	 * 0x010000..0x10FFFF						0xFDF0..0x10FFFF (*)
	 *
	 * (*) exclude code points where ((code & 0xFFFF) >= 0xFFFE)
	 *
	 * References:
	 * XML 1.0:   <http://www.w3.org/TR/REC-xml/#charsets>
	 * HTML 4.01: <http://www.w3.org/TR/1999/PR-html40-19990824/sgml/sgmldecl.html>
	 * HTML 5:    <http://dev.w3.org/html5/spec/Overview.html#preprocessing-the-input-stream>
	 *
	 * Not sure this is the relevant part for HTML 5, though. I opted to
	 * disallow the characters that would result in a parse error when
	 * preprocessing of the input stream. See also section 8.1.3.
	 *
	 * It's unclear if XHTML 1.0 allows C1 characters. I'll opt to apply to
	 * XHTML 1.0 the same rules as for XML 1.0.
	 * See <http://cmsmcq.com/2007/C1.xml>.
	 */

	switch (document_type) {
	case ENT_HTML_DOC_HTML401:
		return (uni_cp >= 0x20 && uni_cp <= 0x7E) ||
			(uni_cp == 0x0A || uni_cp == 0x09 || uni_cp == 0x0D) ||
			(uni_cp >= 0xA0 && uni_cp <= 0xD7FF) ||
			(uni_cp >= 0xE000 && uni_cp <= 0x10FFFF);
	case ENT_HTML_DOC_HTML5:
		return (uni_cp >= 0x20 && uni_cp <= 0x7E) ||
			(uni_cp >= 0x09 && uni_cp <= 0x0D && uni_cp != 0x0B) || /* form feed U+0C allowed */
			(uni_cp >= 0xA0 && uni_cp <= 0xD7FF) ||
			(uni_cp >= 0xE000 && uni_cp <= 0x10FFFF &&
				((uni_cp & 0xFFFF) < 0xFFFE) && /* last two of each plane (nonchars) disallowed */
				(uni_cp < 0xFDD0 || uni_cp > 0xFDEF)); /* U+FDD0-U+FDEF (nonchars) disallowed */
	case ENT_HTML_DOC_XHTML:
	case ENT_HTML_DOC_XML1:
		return (uni_cp >= 0x20 && uni_cp <= 0xD7FF) ||
			(uni_cp == 0x0A || uni_cp == 0x09 || uni_cp == 0x0D) ||
			(uni_cp >= 0xE000 && uni_cp <= 0x10FFFF && uni_cp != 0xFFFE && uni_cp != 0xFFFF);
	default:
		return 1;
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

    // int-bounds
    case 0:
    {
          unsigned int uni_cp = 100;
          int document_type = 100;
          int benchRet = unicode_cp_is_allowed(uni_cp,document_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int uni_cp = 255;
          int document_type = 255;
          int benchRet = unicode_cp_is_allowed(uni_cp,document_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int uni_cp = 10;
          int document_type = 10;
          int benchRet = unicode_cp_is_allowed(uni_cp,document_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
