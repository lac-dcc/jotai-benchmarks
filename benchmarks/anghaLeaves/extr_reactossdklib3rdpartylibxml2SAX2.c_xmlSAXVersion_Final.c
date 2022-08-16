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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* fatalError; void* error; int /*<<< orphan*/  warning; int /*<<< orphan*/  comment; int /*<<< orphan*/  processingInstruction; void* ignorableWhitespace; int /*<<< orphan*/  cdataBlock; void* characters; int /*<<< orphan*/  reference; int /*<<< orphan*/  endDocument; int /*<<< orphan*/  startDocument; int /*<<< orphan*/  setDocumentLocator; int /*<<< orphan*/  unparsedEntityDecl; int /*<<< orphan*/  notationDecl; int /*<<< orphan*/  elementDecl; int /*<<< orphan*/  attributeDecl; int /*<<< orphan*/  entityDecl; int /*<<< orphan*/  getParameterEntity; int /*<<< orphan*/  getEntity; int /*<<< orphan*/  resolveEntity; int /*<<< orphan*/  hasExternalSubset; int /*<<< orphan*/  hasInternalSubset; int /*<<< orphan*/  isStandalone; int /*<<< orphan*/  externalSubset; int /*<<< orphan*/  internalSubset; int /*<<< orphan*/  initialized; int /*<<< orphan*/ * serror; int /*<<< orphan*/  endElementNs; int /*<<< orphan*/  startElementNs; int /*<<< orphan*/ * endElement; int /*<<< orphan*/ * startElement; } ;
typedef  TYPE_1__ xmlSAXHandler ;

/* Variables and functions */
 int /*<<< orphan*/  XML_SAX2_MAGIC ; 
 void* xmlParserError ; 
 int /*<<< orphan*/  xmlParserWarning ; 
 int /*<<< orphan*/  xmlSAX2AttributeDecl ; 
 int /*<<< orphan*/  xmlSAX2CDataBlock ; 
 void* xmlSAX2Characters ; 
 int /*<<< orphan*/  xmlSAX2Comment ; 
 int /*<<< orphan*/  xmlSAX2ElementDecl ; 
 int /*<<< orphan*/  xmlSAX2EndDocument ; 
 int /*<<< orphan*/  xmlSAX2EndElementNs ; 
 int /*<<< orphan*/  xmlSAX2EntityDecl ; 
 int /*<<< orphan*/  xmlSAX2ExternalSubset ; 
 int /*<<< orphan*/  xmlSAX2GetEntity ; 
 int /*<<< orphan*/  xmlSAX2GetParameterEntity ; 
 int /*<<< orphan*/  xmlSAX2HasExternalSubset ; 
 int /*<<< orphan*/  xmlSAX2HasInternalSubset ; 
 int /*<<< orphan*/  xmlSAX2InternalSubset ; 
 int /*<<< orphan*/  xmlSAX2IsStandalone ; 
 int /*<<< orphan*/  xmlSAX2NotationDecl ; 
 int /*<<< orphan*/  xmlSAX2ProcessingInstruction ; 
 int /*<<< orphan*/  xmlSAX2Reference ; 
 int /*<<< orphan*/  xmlSAX2ResolveEntity ; 
 int /*<<< orphan*/  xmlSAX2SetDocumentLocator ; 
 int /*<<< orphan*/  xmlSAX2StartDocument ; 
 int /*<<< orphan*/  xmlSAX2StartElementNs ; 
 int /*<<< orphan*/  xmlSAX2UnparsedEntityDecl ; 

int
xmlSAXVersion(xmlSAXHandler *hdlr, int version)
{
    if (hdlr == NULL) return(-1);
    if (version == 2) {
	hdlr->startElement = NULL;
	hdlr->endElement = NULL;
	hdlr->startElementNs = xmlSAX2StartElementNs;
	hdlr->endElementNs = xmlSAX2EndElementNs;
	hdlr->serror = NULL;
	hdlr->initialized = XML_SAX2_MAGIC;
#ifdef LIBXML_SAX1_ENABLED
    } else if (version == 1) {
	hdlr->startElement = xmlSAX2StartElement;
	hdlr->endElement = xmlSAX2EndElement;
	hdlr->initialized = 1;
#endif /* LIBXML_SAX1_ENABLED */
    } else
        return(-1);
    hdlr->internalSubset = xmlSAX2InternalSubset;
    hdlr->externalSubset = xmlSAX2ExternalSubset;
    hdlr->isStandalone = xmlSAX2IsStandalone;
    hdlr->hasInternalSubset = xmlSAX2HasInternalSubset;
    hdlr->hasExternalSubset = xmlSAX2HasExternalSubset;
    hdlr->resolveEntity = xmlSAX2ResolveEntity;
    hdlr->getEntity = xmlSAX2GetEntity;
    hdlr->getParameterEntity = xmlSAX2GetParameterEntity;
    hdlr->entityDecl = xmlSAX2EntityDecl;
    hdlr->attributeDecl = xmlSAX2AttributeDecl;
    hdlr->elementDecl = xmlSAX2ElementDecl;
    hdlr->notationDecl = xmlSAX2NotationDecl;
    hdlr->unparsedEntityDecl = xmlSAX2UnparsedEntityDecl;
    hdlr->setDocumentLocator = xmlSAX2SetDocumentLocator;
    hdlr->startDocument = xmlSAX2StartDocument;
    hdlr->endDocument = xmlSAX2EndDocument;
    hdlr->reference = xmlSAX2Reference;
    hdlr->characters = xmlSAX2Characters;
    hdlr->cdataBlock = xmlSAX2CDataBlock;
    hdlr->ignorableWhitespace = xmlSAX2Characters;
    hdlr->processingInstruction = xmlSAX2ProcessingInstruction;
    hdlr->comment = xmlSAX2Comment;
    hdlr->warning = xmlParserWarning;
    hdlr->error = xmlParserError;
    hdlr->fatalError = xmlParserError;

    return(0);
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
          int version = 100;
          int _len_hdlr0 = 1;
          struct TYPE_3__ * hdlr = (struct TYPE_3__ *) malloc(_len_hdlr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hdlr0; _i0++) {
            hdlr[_i0].warning = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].comment = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].processingInstruction = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].cdataBlock = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].reference = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].endDocument = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].startDocument = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].setDocumentLocator = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].unparsedEntityDecl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].notationDecl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].elementDecl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].attributeDecl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].entityDecl = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].getParameterEntity = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].getEntity = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].resolveEntity = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].hasExternalSubset = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].hasInternalSubset = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].isStandalone = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].externalSubset = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].internalSubset = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdlr__i0__serror0 = 1;
          hdlr[_i0].serror = (int *) malloc(_len_hdlr__i0__serror0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdlr__i0__serror0; _j0++) {
            hdlr[_i0].serror[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdlr[_i0].endElementNs = ((-2 * (next_i()%2)) + 1) * next_i();
        hdlr[_i0].startElementNs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdlr__i0__endElement0 = 1;
          hdlr[_i0].endElement = (int *) malloc(_len_hdlr__i0__endElement0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdlr__i0__endElement0; _j0++) {
            hdlr[_i0].endElement[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdlr__i0__startElement0 = 1;
          hdlr[_i0].startElement = (int *) malloc(_len_hdlr__i0__startElement0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdlr__i0__startElement0; _j0++) {
            hdlr[_i0].startElement[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xmlSAXVersion(hdlr,version);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdlr0; _aux++) {
          free(hdlr[_aux].serror);
          }
          for(int _aux = 0; _aux < _len_hdlr0; _aux++) {
          free(hdlr[_aux].endElement);
          }
          for(int _aux = 0; _aux < _len_hdlr0; _aux++) {
          free(hdlr[_aux].startElement);
          }
          free(hdlr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
