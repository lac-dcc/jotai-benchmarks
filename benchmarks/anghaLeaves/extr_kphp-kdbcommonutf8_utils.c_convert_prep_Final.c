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

unsigned int convert_prep (unsigned int x) {
  switch (x) {
  case 65://A->a
    return 97;
  case 66://B->b
    return 98;
  case 67://C->c
    return 99;
  case 68://D->d
    return 100;
  case 69://E->e
    return 101;
  case 70://F->f
    return 102;
  case 71://G->g
    return 103;
  case 72://H->h
    return 104;
  case 73://I->i
    return 105;
  case 74://J->j
    return 106;
  case 75://K->k
    return 107;
  case 76://L->l
    return 108;
  case 77://M->m
    return 109;
  case 78://N->n
    return 110;
  case 79://O->o
    return 111;
  case 80://P->p
    return 112;
  case 81://Q->q
    return 113;
  case 82://R->r
    return 114;
  case 83://S->s
    return 115;
  case 84://T->t
    return 116;
  case 85://U->u
    return 117;
  case 86://V->v
    return 118;
  case 87://W->w
    return 119;
  case 88://X->x
    return 120;
  case 89://Y->y
    return 121;
  case 90://Z->z
    return 122;
  case 1049://Й->й
    return 1081;
  case 1062://Ц->ц
    return 1094;
  case 1059://У->у
    return 1091;
  case 1050://К->к
    return 1082;
  case 1045://Е->е
    return 1077;
  case 1053://Н->н
    return 1085;
  case 1043://Г->г
    return 1075;
  case 1064://Ш->ш
    return 1096;
  case 1065://Щ->щ
    return 1097;
  case 1047://З->з
    return 1079;
  case 1061://Х->х
    return 1093;
  case 1066://Ъ->ъ
    return 1098;
  case 1060://Ф->ф
    return 1092;
  case 1067://Ы->ы
    return 1099;
  case 1042://В->в
    return 1074;
  case 1040://А->а
    return 1072;
  case 1055://П->п
    return 1087;
  case 1056://Р->р
    return 1088;
  case 1054://О->о
    return 1086;
  case 1051://Л->л
    return 1083;
  case 1044://Д->д
    return 1076;
  case 1046://Ж->ж
    return 1078;
  case 1069://Э->э
    return 1101;
  case 1071://Я->я
    return 1103;
  case 1063://Ч->ч
    return 1095;
  case 1057://С->с
    return 1089;
  case 1052://М->м
    return 1084;
  case 1048://И->и
    return 1080;
  case 1058://Т->т
    return 1090;
  case 1068://Ь->ь
    return 1100;
  case 1041://Б->б
    return 1073;
  case 1070://Ю->ю
    return 1102;
  case 1025://Ё->ё
    return 1105;
  case 97://a->a
    return 97;
  case 98://b->b
    return 98;
  case 99://c->c
    return 99;
  case 100://d->d
    return 100;
  case 101://e->e
    return 101;
  case 102://f->f
    return 102;
  case 103://g->g
    return 103;
  case 104://h->h
    return 104;
  case 105://i->i
    return 105;
  case 106://j->j
    return 106;
  case 107://k->k
    return 107;
  case 108://l->l
    return 108;
  case 109://m->m
    return 109;
  case 110://n->n
    return 110;
  case 111://o->o
    return 111;
  case 112://p->p
    return 112;
  case 113://q->q
    return 113;
  case 114://r->r
    return 114;
  case 115://s->s
    return 115;
  case 116://t->t
    return 116;
  case 117://u->u
    return 117;
  case 118://v->v
    return 118;
  case 119://w->w
    return 119;
  case 120://x->x
    return 120;
  case 121://y->y
    return 121;
  case 122://z->z
    return 122;
  case 1081://й->й
    return 1081;
  case 1094://ц->ц
    return 1094;
  case 1091://у->у
    return 1091;
  case 1082://к->к
    return 1082;
  case 1077://е->е
    return 1077;
  case 1085://н->н
    return 1085;
  case 1075://г->г
    return 1075;
  case 1096://ш->ш
    return 1096;
  case 1097://щ->щ
    return 1097;
  case 1079://з->з
    return 1079;
  case 1093://х->х
    return 1093;
  case 1098://ъ->ъ
    return 1098;
  case 1092://ф->ф
    return 1092;
  case 1099://ы->ы
    return 1099;
  case 1074://в->в
    return 1074;
  case 1072://а->а
    return 1072;
  case 1087://п->п
    return 1087;
  case 1088://р->р
    return 1088;
  case 1086://о->о
    return 1086;
  case 1083://л->л
    return 1083;
  case 1076://д->д
    return 1076;
  case 1078://ж->ж
    return 1078;
  case 1101://э->э
    return 1101;
  case 1103://я->я
    return 1103;
  case 1095://ч->ч
    return 1095;
  case 1089://с->с
    return 1089;
  case 1084://м->м
    return 1084;
  case 1080://и->и
    return 1080;
  case 1090://т->т
    return 1090;
  case 1100://ь->ь
    return 1100;
  case 1073://б->б
    return 1073;
  case 1102://ю->ю
    return 1102;
  case 1105://ё->ё
    return 1105;
  case 48://0->0
    return 48;
  case 49://1->1
    return 49;
  case 50://2->2
    return 50;
  case 51://3->3
    return 51;
  case 52://4->4
    return 52;
  case 53://5->5
    return 53;
  case 54://6->6
    return 54;
  case 55://7->7
    return 55;
  case 56://8->8
    return 56;
  case 57://9->9
    return 57;
  default:
    if (x >= 128) {
      return x;
    }
    return 32;
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
          unsigned int x = 100;
          unsigned int benchRet = convert_prep(x);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int x = 255;
          unsigned int benchRet = convert_prep(x);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int x = 10;
          unsigned int benchRet = convert_prep(x);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
