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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* xmlNodePtr ;
typedef  int /*<<< orphan*/  ptrdiff_t ;
struct TYPE_4__ {int type; scalar_t__ doc; struct TYPE_4__* next; scalar_t__ content; struct TYPE_4__* prev; struct TYPE_4__* parent; } ;

/* Variables and functions */
#define  XML_ATTRIBUTE_NODE 134 
#define  XML_CDATA_SECTION_NODE 133 
#define  XML_COMMENT_NODE 132 
#define  XML_ELEMENT_NODE 131 
#define  XML_NAMESPACE_DECL 130 
#define  XML_PI_NODE 129 
#define  XML_TEXT_NODE 128 

__attribute__((used)) static int
xmlXPathCmpNodesExt(xmlNodePtr node1, xmlNodePtr node2) {
    int depth1, depth2;
    int misc = 0, precedence1 = 0, precedence2 = 0;
    xmlNodePtr miscNode1 = NULL, miscNode2 = NULL;
    xmlNodePtr cur, root;
    ptrdiff_t l1, l2;

    if ((node1 == NULL) || (node2 == NULL))
	return(-2);

    if (node1 == node2)
	return(0);

    /*
     * a couple of optimizations which will avoid computations in most cases
     */
    switch (node1->type) {
	case XML_ELEMENT_NODE:
	    if (node2->type == XML_ELEMENT_NODE) {
		if ((0 > (ptrdiff_t) node1->content) &&
		    (0 > (ptrdiff_t) node2->content) &&
		    (node1->doc == node2->doc))
		{
		    l1 = -((ptrdiff_t) node1->content);
		    l2 = -((ptrdiff_t) node2->content);
		    if (l1 < l2)
			return(1);
		    if (l1 > l2)
			return(-1);
		} else
		    goto turtle_comparison;
	    }
	    break;
	case XML_ATTRIBUTE_NODE:
	    precedence1 = 1; /* element is owner */
	    miscNode1 = node1;
	    node1 = node1->parent;
	    misc = 1;
	    break;
	case XML_TEXT_NODE:
	case XML_CDATA_SECTION_NODE:
	case XML_COMMENT_NODE:
	case XML_PI_NODE: {
	    miscNode1 = node1;
	    /*
	    * Find nearest element node.
	    */
	    if (node1->prev != NULL) {
		do {
		    node1 = node1->prev;
		    if (node1->type == XML_ELEMENT_NODE) {
			precedence1 = 3; /* element in prev-sibl axis */
			break;
		    }
		    if (node1->prev == NULL) {
			precedence1 = 2; /* element is parent */
			/*
			* URGENT TODO: Are there any cases, where the
			* parent of such a node is not an element node?
			*/
			node1 = node1->parent;
			break;
		    }
		} while (1);
	    } else {
		precedence1 = 2; /* element is parent */
		node1 = node1->parent;
	    }
	    if ((node1 == NULL) || (node1->type != XML_ELEMENT_NODE) ||
		(0 <= (ptrdiff_t) node1->content)) {
		/*
		* Fallback for whatever case.
		*/
		node1 = miscNode1;
		precedence1 = 0;
	    } else
		misc = 1;
	}
	    break;
	case XML_NAMESPACE_DECL:
	    /*
	    * TODO: why do we return 1 for namespace nodes?
	    */
	    return(1);
	default:
	    break;
    }
    switch (node2->type) {
	case XML_ELEMENT_NODE:
	    break;
	case XML_ATTRIBUTE_NODE:
	    precedence2 = 1; /* element is owner */
	    miscNode2 = node2;
	    node2 = node2->parent;
	    misc = 1;
	    break;
	case XML_TEXT_NODE:
	case XML_CDATA_SECTION_NODE:
	case XML_COMMENT_NODE:
	case XML_PI_NODE: {
	    miscNode2 = node2;
	    if (node2->prev != NULL) {
		do {
		    node2 = node2->prev;
		    if (node2->type == XML_ELEMENT_NODE) {
			precedence2 = 3; /* element in prev-sibl axis */
			break;
		    }
		    if (node2->prev == NULL) {
			precedence2 = 2; /* element is parent */
			node2 = node2->parent;
			break;
		    }
		} while (1);
	    } else {
		precedence2 = 2; /* element is parent */
		node2 = node2->parent;
	    }
	    if ((node2 == NULL) || (node2->type != XML_ELEMENT_NODE) ||
		(0 <= (ptrdiff_t) node2->content))
	    {
		node2 = miscNode2;
		precedence2 = 0;
	    } else
		misc = 1;
	}
	    break;
	case XML_NAMESPACE_DECL:
	    return(1);
	default:
	    break;
    }
    if (misc) {
	if (node1 == node2) {
	    if (precedence1 == precedence2) {
		/*
		* The ugly case; but normally there aren't many
		* adjacent non-element nodes around.
		*/
		cur = miscNode2->prev;
		while (cur != NULL) {
		    if (cur == miscNode1)
			return(1);
		    if (cur->type == XML_ELEMENT_NODE)
			return(-1);
		    cur = cur->prev;
		}
		return (-1);
	    } else {
		/*
		* Evaluate based on higher precedence wrt to the element.
		* TODO: This assumes attributes are sorted before content.
		*   Is this 100% correct?
		*/
		if (precedence1 < precedence2)
		    return(1);
		else
		    return(-1);
	    }
	}
	/*
	* Special case: One of the helper-elements is contained by the other.
	* <foo>
	*   <node2>
	*     <node1>Text-1(precedence1 == 2)</node1>
	*   </node2>
	*   Text-6(precedence2 == 3)
	* </foo>
	*/
	if ((precedence2 == 3) && (precedence1 > 1)) {
	    cur = node1->parent;
	    while (cur) {
		if (cur == node2)
		    return(1);
		cur = cur->parent;
	    }
	}
	if ((precedence1 == 3) && (precedence2 > 1)) {
	    cur = node2->parent;
	    while (cur) {
		if (cur == node1)
		    return(-1);
		cur = cur->parent;
	    }
	}
    }

    /*
     * Speedup using document order if availble.
     */
    if ((node1->type == XML_ELEMENT_NODE) &&
	(node2->type == XML_ELEMENT_NODE) &&
	(0 > (ptrdiff_t) node1->content) &&
	(0 > (ptrdiff_t) node2->content) &&
	(node1->doc == node2->doc)) {

	l1 = -((ptrdiff_t) node1->content);
	l2 = -((ptrdiff_t) node2->content);
	if (l1 < l2)
	    return(1);
	if (l1 > l2)
	    return(-1);
    }

turtle_comparison:

    if (node1 == node2->prev)
	return(1);
    if (node1 == node2->next)
	return(-1);
    /*
     * compute depth to root
     */
    for (depth2 = 0, cur = node2; cur->parent != NULL; cur = cur->parent) {
	if (cur->parent == node1)
	    return(1);
	depth2++;
    }
    root = cur;
    for (depth1 = 0, cur = node1; cur->parent != NULL; cur = cur->parent) {
	if (cur->parent == node2)
	    return(-1);
	depth1++;
    }
    /*
     * Distinct document (or distinct entities :-( ) case.
     */
    if (root != cur) {
	return(-2);
    }
    /*
     * get the nearest common ancestor.
     */
    while (depth1 > depth2) {
	depth1--;
	node1 = node1->parent;
    }
    while (depth2 > depth1) {
	depth2--;
	node2 = node2->parent;
    }
    while (node1->parent != node2->parent) {
	node1 = node1->parent;
	node2 = node2->parent;
	/* should not happen but just in case ... */
	if ((node1 == NULL) || (node2 == NULL))
	    return(-2);
    }
    /*
     * Find who's first.
     */
    if (node1 == node2->prev)
	return(1);
    if (node1 == node2->next)
	return(-1);
    /*
     * Speedup using document order if availble.
     */
    if ((node1->type == XML_ELEMENT_NODE) &&
	(node2->type == XML_ELEMENT_NODE) &&
	(0 > (ptrdiff_t) node1->content) &&
	(0 > (ptrdiff_t) node2->content) &&
	(node1->doc == node2->doc)) {

	l1 = -((ptrdiff_t) node1->content);
	l2 = -((ptrdiff_t) node2->content);
	if (l1 < l2)
	    return(1);
	if (l1 > l2)
	    return(-1);
    }

    for (cur = node1->next;cur != NULL;cur = cur->next)
	if (cur == node2)
	    return(1);
    return(-1); /* assume there is no sibling list corruption */
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_node1(int length, struct TYPE_4__ *aux_node1[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_node1[0] = walker;
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->doc = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;
walker->content = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->prev = NULL;
  walker->parent = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_node1[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_node1[i] = walker;
    walker->parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->parent;
    aux_node1[i] = walker;
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->doc = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
walker->content = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->prev = NULL;
    walker->parent = NULL;
  }

  return head;
}

void _delete_node1(struct TYPE_4__ *aux_node1[], int aux_node1_size) {
  for(int i = 0; i < aux_node1_size; i++) 
    if(aux_node1[i])
      free(aux_node1[i]);
}

struct TYPE_4__ *_allocate_node2(int length, struct TYPE_4__ *aux_node2[]) {
  struct TYPE_4__ *walker = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  aux_node2[0] = walker;
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->doc = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;
walker->content = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->prev = NULL;
  walker->parent = NULL;

  struct TYPE_4__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    aux_node2[i] = walker;
    walker->prev = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->prev;
    aux_node2[i] = walker;
    walker->parent = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->parent;
    aux_node2[i] = walker;
walker->type = ((-2 * (next_i()%2)) + 1) * next_i();
walker->doc = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
walker->content = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->prev = NULL;
    walker->parent = NULL;
  }

  return head;
}

void _delete_node2(struct TYPE_4__ *aux_node2[], int aux_node2_size) {
  for(int i = 0; i < aux_node2_size; i++) 
    if(aux_node2[i])
      free(aux_node2[i]);
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
          struct TYPE_4__ * aux_node1[1];
          struct TYPE_4__ * node1 = _allocate_node1(1, aux_node1);
          struct TYPE_4__ * aux_node2[1];
          struct TYPE_4__ * node2 = _allocate_node2(1, aux_node2);
          int benchRet = xmlXPathCmpNodesExt(node1,node2);
          printf("%d\n", benchRet); 
          _delete_node1(aux_node1, 1);
          _delete_node2(aux_node2, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
