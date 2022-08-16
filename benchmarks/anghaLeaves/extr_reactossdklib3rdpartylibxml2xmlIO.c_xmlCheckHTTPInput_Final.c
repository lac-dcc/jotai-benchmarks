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
typedef  int /*<<< orphan*/  xmlParserInputPtr ;
typedef  int /*<<< orphan*/  xmlParserCtxtPtr ;

/* Variables and functions */

xmlParserInputPtr
xmlCheckHTTPInput(xmlParserCtxtPtr ctxt, xmlParserInputPtr ret) {
#ifdef LIBXML_HTTP_ENABLED
    if ((ret != NULL) && (ret->buf != NULL) &&
        (ret->buf->readcallback == xmlIOHTTPRead) &&
        (ret->buf->context != NULL)) {
        const char *encoding;
        const char *redir;
        const char *mime;
        int code;

        code = xmlNanoHTTPReturnCode(ret->buf->context);
        if (code >= 400) {
            /* fatal error */
	    if (ret->filename != NULL)
		__xmlLoaderErr(ctxt, "failed to load HTTP resource \"%s\"\n",
                         (const char *) ret->filename);
	    else
		__xmlLoaderErr(ctxt, "failed to load HTTP resource\n", NULL);
            xmlFreeInputStream(ret);
            ret = NULL;
        } else {

            mime = xmlNanoHTTPMimeType(ret->buf->context);
            if ((xmlStrstr(BAD_CAST mime, BAD_CAST "/xml")) ||
                (xmlStrstr(BAD_CAST mime, BAD_CAST "+xml"))) {
                encoding = xmlNanoHTTPEncoding(ret->buf->context);
                if (encoding != NULL) {
                    xmlCharEncodingHandlerPtr handler;

                    handler = xmlFindCharEncodingHandler(encoding);
                    if (handler != NULL) {
                        xmlSwitchInputEncoding(ctxt, ret, handler);
                    } else {
                        __xmlErrEncoding(ctxt, XML_ERR_UNKNOWN_ENCODING,
                                         "Unknown encoding %s",
                                         BAD_CAST encoding, NULL);
                    }
                    if (ret->encoding == NULL)
                        ret->encoding = xmlStrdup(BAD_CAST encoding);
                }
#if 0
            } else if (xmlStrstr(BAD_CAST mime, BAD_CAST "html")) {
#endif
            }
            redir = xmlNanoHTTPRedir(ret->buf->context);
            if (redir != NULL) {
                if (ret->filename != NULL)
                    xmlFree((xmlChar *) ret->filename);
                if (ret->directory != NULL) {
                    xmlFree((xmlChar *) ret->directory);
                    ret->directory = NULL;
                }
                ret->filename =
                    (char *) xmlStrdup((const xmlChar *) redir);
            }
        }
    }
#endif
    return(ret);
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
          int ctxt = 100;
          int ret = 100;
          int benchRet = xmlCheckHTTPInput(ctxt,ret);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ctxt = 255;
          int ret = 255;
          int benchRet = xmlCheckHTTPInput(ctxt,ret);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ctxt = 10;
          int ret = 10;
          int benchRet = xmlCheckHTTPInput(ctxt,ret);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
